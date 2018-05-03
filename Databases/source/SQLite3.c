
/******************************************************************************
*
*   FILE
*   ----
*   SQLite3.c
*
*   History
*   -------
*   2018-04-25   File created
*
*******************************************************************************
*
*   This file is generated by the 'acplt_builder' command
*
******************************************************************************/


#ifndef OV_COMPILE_LIBRARY_Databases
#define OV_COMPILE_LIBRARY_Databases
#endif


#include "Databases.h"
#include "libov/ov_macros.h"
#include "sqlite3.h"
#include "libov/ov_logfile.h"
#include <stdio.h>



// global variables, access to object members and db handler
OV_INSTPTR_Databases_SQLite3 SQLITE3_pinst = NULL;
int rc;
sqlite3* db;

// callback function
static int callback(void* data, int argc, char **argv, char **col_name) {
	for(int i = 0; i<argc; i++) {
		ov_logfile_info("%-10s : %-s", col_name[i], argv[i] ? argv[i] : "NULL");
	}
	return 0;
}

OV_DLLFNCEXPORT OV_RESULT Databases_SQLite3_connect(void) {
	rc = sqlite3_open(SQLITE3_pinst->v_endpoint , &db);

	if( rc != SQLITE_OK ) {
		ov_logfile_info("failed to open db!");
		sqlite3_close(db);
		return OV_ERR_GENERIC;
	}

    return OV_ERR_OK;
}

OV_DLLFNCEXPORT OV_RESULT Databases_SQLite3_disconnect(void) {

	sqlite3_close(db);

    return OV_ERR_OK;
}

OV_DLLFNCEXPORT OV_RESULT Databases_SQLite3_readData(void) {
	const char* data = "Callback funtion called";
	char* err_msg;
	rc = sqlite3_exec(db, "select * from register", callback, (void*)data, &err_msg);

	if(rc != SQLITE_OK) {
		ov_logfile_info("SQL Error: %s", err_msg);
		sqlite3_free(err_msg);
		return OV_ERR_GENERIC;
	}
    return OV_ERR_OK;
}

OV_DLLFNCEXPORT OV_RESULT Databases_SQLite3_writeData(void) {
	sqlite3_stmt *stmt;
	sqlite3_prepare_v2(db, "insert into register (ip, cert) values (?1, ?2)", -1,  &stmt, NULL);

	sqlite3_bind_text(stmt, 1, SQLITE3_pinst->v_ip, -1, SQLITE_STATIC);
	sqlite3_bind_text(stmt, 2, SQLITE3_pinst->v_cert, -1, SQLITE_STATIC);

	rc = sqlite3_step(stmt);
	if( rc != SQLITE_DONE ) {
		ov_logfile_info("failed to write db!");
		return OV_ERR_GENERIC;
	}

    return OV_ERR_OK;
}

OV_DLLFNCEXPORT OV_RESULT Databases_SQLite3_io_set(
    OV_INSTPTR_Databases_SQLite3          pobj,
    const OV_BOOL  value
) {
	pobj->v_io = value;

	if(pobj->v_io) {
		Databases_SQLite3_readData();
	}
	else {
		Databases_SQLite3_writeData();
	}

	return OV_ERR_OK;
}

OV_DLLFNCEXPORT OV_RESULT Databases_SQLite3_constructor(
	OV_INSTPTR_ov_object 	pobj
) {
    /*    
    *   local variables
    */
    OV_INSTPTR_Databases_SQLite3 pinst = Ov_StaticPtrCast(Databases_SQLite3, pobj);
    OV_RESULT    result;

    /* do what the base class does first */
    result = openAASDiscoveryServer_Database_constructor(pobj);
    if(Ov_Fail(result))
         return result;

    SQLITE3_pinst = pinst;
    /* do what */


    return OV_ERR_OK;
}
