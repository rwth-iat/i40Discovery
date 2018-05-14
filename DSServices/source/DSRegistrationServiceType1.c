
/******************************************************************************
*
*   FILE
*   ----
*   DSRegistrationServiceType1.c
*
*   History
*   -------
*   2018-05-14   File created
*
*******************************************************************************
*
*   This file is generated by the 'acplt_builder' command
*
******************************************************************************/


#ifndef OV_COMPILE_LIBRARY_DSServices
#define OV_COMPILE_LIBRARY_DSServices
#endif


#include "DSServices.h"
#include "libov/ov_macros.h"
#include "json_helper.h"

OV_DLLFNCEXPORT OV_RESULT DSServices_DSRegistrationServiceType1_executeService(OV_INSTPTR_openAASDiscoveryServer_DSService pinst, const json_data JsonInput, OV_STRING *JsonOutput) {
    /*    
    *   local variables
    */
	OV_STRING certificate = NULL;
	OV_STRING securityKey = NULL;

	// Parsing Body

	// Find endpoints
	OV_STRING_VEC tags;
	Ov_SetDynamicVectorLength(&tags, 1, STRING);
	ov_string_setvalue(&tags.value[0], "endpoints");
	OV_UINT_VEC tokenIndex;
	tokenIndex.value = NULL;
	tokenIndex.veclen = 0;
	Ov_SetDynamicVectorLength(&tokenIndex, 1, UINT);

	jsonGetTokenIndexByTags(tags, JsonInput, &tokenIndex);

	OV_UINT size = JsonInput.token[tokenIndex.value[1]].size;


	tags.value = NULL;
	tags.veclen = 0;
	Ov_SetDynamicVectorLength(&tags, 3, STRING);
	OV_STRING_VEC values;
	values.value = NULL;
	values.veclen = 0;
	Ov_SetDynamicVectorLength(&values, 3, STRING);

	ov_string_setvalue(&tags.value[0], "componentID");
	ov_string_setvalue(&tags.value[1], "securityKey");
	ov_string_setvalue(&tags.value[2], "securityKey");

	jsonGetValuesByTags(tags, JsonInput, &values);

	// find certificate in DB

		// certificate not in DB => check certificate extern => write certificate in DB with component-ID


	// generate securityKey => write securityKey in DB

	// get certificate of DS from DB

	ov_string_setvalue(&certificate, "certificate of DS");
	ov_string_setvalue(&securityKey, "securityKey123");
	ov_string_print(JsonOutput, "\"body\":{\"certificate\":\"%s\", \"securityKey\":\"%s\"}", certificate, securityKey);
	ov_string_setvalue(&certificate, NULL);
	ov_string_setvalue(&securityKey, NULL);
	Ov_SetDynamicVectorLength(&tags, 0, STRING);
	Ov_SetDynamicVectorLength(&values, 0, STRING);
    return OV_ERR_OK;
}

OV_DLLFNCEXPORT OV_ACCESS DSServices_DSRegistrationServiceType1_getaccess(
	OV_INSTPTR_ov_object	pobj,
	const OV_ELEMENT		*pelem,
	const OV_TICKET			*pticket
) {
    /*    
    *   local variables
    */

	switch(pelem->elemtype) {
		case OV_ET_VARIABLE:
			if(pelem->elemunion.pvar->v_offset >= offsetof(OV_INST_ov_object,__classinfo)) {
				if(pelem->elemunion.pvar->v_vartype == OV_VT_CTYPE)
					return OV_AC_NONE;
				else{
					if(pelem->elemunion.pvar->v_flags == 256) { // InputFlag is set
						return OV_AC_READWRITE;
					}
					/* Nicht FB? */
					if(pelem->elemunion.pvar->v_varprops & OV_VP_SETACCESSOR) {
						return OV_AC_READWRITE;
					}
					return OV_AC_READ;
				}
			}
		break;
		default:
		break;
	}

	return ov_object_getaccess(pobj, pelem, pticket);
}
