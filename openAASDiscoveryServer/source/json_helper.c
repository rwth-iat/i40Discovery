#include "json_helper.h"

#include <stddef.h>
#include <string.h>
#include <stdlib.h>


int jsoneq(const char *json, const jsmntok_t *tok, const char *s) {
	if (tok->type == JSMN_STRING && (int) strlen(s) == tok->end - tok->start &&
			strncmp(json + tok->start, s, tok->end - tok->start) == 0) {
		return 0;
	}
	return -1;
}

OV_RESULT jsonTokenize(json_data* jsonData) {
	jsmn_parser p;

	jsmn_init(&p);

	jsonData->num_token = jsmn_parse(&p, jsonData->js, strlen(jsonData->js), NULL, 0);

	if(jsonData->num_token<0)
		return OV_ERR_BADINITPARAM;

	jsonData->token = malloc(jsonData->num_token*sizeof(jsmntok_t));
	if(!jsonData->token)
		return OV_ERR_GENERIC;

	jsmn_init(&p);
	jsmn_parse(&p, jsonData->js, strlen(jsonData->js), jsonData->token, jsonData->num_token);

	return OV_ERR_OK;
}

OV_RESULT jsonRequestParse(request_data* requestData) {
	json_data jsonData;
	if(!jsonTokenize(&jsonData)) {
		return OV_ERR_BADPARAM;
	}

	// Parsing Header
	OV_STRING_VEC tags;
	Ov_SetDynamicVectorLength(&tags, 7, STRING);
	OV_STRING_VEC values;
	Ov_SetDynamicVectorLength(&values, 7, STRING);

	ov_string_setvalue(&tags.value[0], "endpointSender");
	ov_string_setvalue(&tags.value[1], "endpointReceiver");
	ov_string_setvalue(&tags.value[2], "messageID");
	ov_string_setvalue(&tags.value[3], "messageType");
	ov_string_setvalue(&tags.value[4], "protocolType");
	ov_string_setvalue(&tags.value[5], "componentID");

	jsonGetValuesByTags(tags, jsonData, values);

	ov_string_setvalue(&requestData->header.endpointSender, values.value[0]);
	ov_string_setvalue(&requestData->header.endpointReceiver, values.value[1]);
	ov_string_setvalue(&requestData->header.messageID, values.value[2]);
	requestData->header.messageType = atoi(values.value[3]);
	requestData->header.protocolType = atoi(values.value[4]);
	ov_string_setvalue(&requestData->header.componentID, values.value[5]);

	Ov_SetDynamicVectorLength(&tags, 1, STRING);
	ov_string_setvalue(&tags.value[0], "body");
	OV_UINT_VEC tokenIndex;
	Ov_SetDynamicVectorLength(&tokenIndex, 1, UINT);

	jsonGetTokenIndexByTags(tags, jsonData, tokenIndex);

	requestData->body.offset 	= jsonData.token[tokenIndex.value[0]].start;
	requestData->body.js 	 	= &jsonData.js[requestData->body.offset];
	requestData->body.num_token = jsonData.token[tokenIndex.value[0]].size + 1; // number of children plus body
	requestData->body.token		= &jsonData.token[jsonData.num_token - requestData->body.num_token];

	Ov_SetDynamicVectorLength(&tags, 0 , STRING);
	Ov_SetDynamicVectorLength(&values, 0 , STRING);
	Ov_SetDynamicVectorLength(&tokenIndex, 0 , UINT);

	return OV_ERR_OK;
}

OV_RESULT jsonResponseParse(response_data* responseData) {
	json_data jsonData;
	if(!jsonTokenize(&jsonData)) {
		return OV_ERR_BADPARAM;
	}

	OV_STRING_VEC tags;
	Ov_SetDynamicVectorLength(&tags, 7, STRING);
	OV_STRING_VEC values;
	Ov_SetDynamicVectorLength(&values, 7, STRING);

	ov_string_setvalue(&tags.value[0], "endpointSender");
	ov_string_setvalue(&tags.value[1], "endpointReceiver");
	ov_string_setvalue(&tags.value[2], "messageID");
	ov_string_setvalue(&tags.value[3], "referToMessageID");
	ov_string_setvalue(&tags.value[4], "messageType");
	ov_string_setvalue(&tags.value[5], "errorFlag");
	ov_string_setvalue(&tags.value[6], "errorMessage");

	jsonGetValuesByTags(tags, jsonData, values);

	ov_string_setvalue(&responseData->header.endpointSender, values.value[0]);
	ov_string_setvalue(&responseData->header.endpointReceiver, values.value[1]);
	ov_string_setvalue(&responseData->header.messageID, values.value[2]);
	ov_string_setvalue(&responseData->header.referToMessageID, values.value[3]);
	responseData->header.messageType = atoi(values.value[4]);
	responseData->header.errorFlag = atoi(values.value[5]);
	ov_string_setvalue(&responseData->header.errorMessage, values.value[6]);

	Ov_SetDynamicVectorLength(&tags, 1, STRING);
	ov_string_setvalue(&tags.value[0], "body");
	OV_UINT_VEC tokenIndex;
	Ov_SetDynamicVectorLength(&tokenIndex, 1, UINT);

	jsonGetTokenIndexByTags(tags, jsonData, tokenIndex);

	responseData->body.offset 	= jsonData.token[tokenIndex.value[0]].start;
	responseData->body.js 	 	= &jsonData.js[responseData->body.offset];
	responseData->body.num_token = jsonData.token[tokenIndex.value[0]].size + 1; // number of children plus body
	responseData->body.token	= &jsonData.token[jsonData.num_token - responseData->body.num_token];

	Ov_SetDynamicVectorLength(&tags, 0 , STRING);
	Ov_SetDynamicVectorLength(&values, 0 , STRING);
	Ov_SetDynamicVectorLength(&tokenIndex, 0 , UINT);

	return OV_ERR_OK;
}

OV_RESULT jsonGetTokenIndexByTags(const OV_STRING_VEC tags, const json_data jsonData, OV_UINT_VEC tokenIndex) {
	for(int i = 0; i < jsonData.num_token; i++) {
		for(int j = 0; j < tags.veclen; j++) {
			if(jsoneq(jsonData.js, &jsonData.token[i], tags.value[j])==0){
				tokenIndex.value[j] = i;
				break;
			}
		}
	}
	return OV_ERR_OK;
}

OV_RESULT jsonGetValuesByTags(const OV_STRING_VEC tags, const json_data jsonData, OV_STRING_VEC values) {
	for(int i = 0; i < jsonData.num_token; i++) {
		for(int j = 0; j < tags.veclen; j++) {
			if(jsoneq(jsonData.js, &jsonData.token[i], tags.value[j])==0){
				jsonGetValueByToken(jsonData.js, &jsonData.token[i], &values.value[j]);
				break;
			}
		}
	}
	return OV_ERR_OK;
}

OV_RESULT jsonGetValuesAndTokenIndexByTags(const OV_STRING_VEC tags, const json_data jsonData, OV_STRING_VEC values, OV_UINT_VEC tokenIndex) {
	for(int i = 0; i < jsonData.num_token; i++) {
		for(int j = 0; j < tags.veclen; j++) {
			if(jsoneq(jsonData.js, &jsonData.token[i], tags.value[j])==0){
				jsonGetValueByToken(jsonData.js, &jsonData.token[i], &values.value[j]);
				tokenIndex.value[j] = i;
				break;
			}
		}
	}
	return OV_ERR_OK;
}

OV_RESULT jsonGetValueByToken(const char* js, const jsmntok_t* t, OV_STRING* str) {
	if(!(t->type==JSMN_STRING) || !str)
		return OV_ERR_BADPARAM;

	const char* jsStr = js+t->start;

	int len = t->end-t->start;
	int offset = 0;

	char* pString = Ov_DbMalloc(len+1);
	if(!pString)
		return OV_ERR_DBOUTOFMEMORY;

	for(int pos = 0;pos < len; pos++){
		if(jsStr[pos] == '\\'){
			pos++;
			offset++;
			switch(jsStr[pos]){
			// replace escape sequences
			case 'b':
				pString[pos-offset] = '\b';
				break;
			case 'f':
				pString[pos-offset] = '\f';
				break;
			case 'n':
				pString[pos-offset] = '\n';
				break;
			case 'r':
				pString[pos-offset] = '\r';
				break;
			case 't':
				pString[pos-offset] = '\t';
				break;
			case '\"':
				pString[pos-offset] = '\"';
				break;
			case '\\':
				pString[pos-offset] = '\\';
				break;
			default:
				return OV_ERR_BADPARAM;
			}
		} else {
			pString[pos-offset] = jsStr[pos];
		}
	}

	OV_UINT strlen = len - offset;
	pString[strlen] = '\0';

	ov_string_setvalue(str, pString);

	Ov_DbFree(pString);

	return OV_ERR_OK;
}


/**
int scmp(char *s1, char *s2) {
	while(*s1 != '\0' && *s1 == *s2) { s1++; s2++; }
	return (*s1 - *s2);
}

jsmntok_t* findTag(const char* js, jsmntok_t *tokens, const char* tag) {

jsmntok_t* findTag(const char* js, jsmntok_t *tokens, const char* tag) {
	for(int i=0; i < sizeof(tokens)/sizeof(jsmntok_t); i++) {
		char* tokStr = (char *)malloc(tokens[i].size);

		strncpy(tokStr, &js[tokens[i].start], (size_t)tokens[i].size);

		if(!scmp(tokStr, (char*)tag)) {
			return &tokens[i];
		}
		frer
	}
	return NULL;
}


char* getTagValue(const char* js, jsmntok_t tok, const char* tag) {
	return (char *)NULL;
}

**/
