
/******************************************************************************
*
*   FILE
*   ----
*   MySQLDatabase.c
*
*   History
*   -------
*   2018-05-03   File created
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


OV_DLLFNCEXPORT OV_RESULT Databases_MySQLDatabase_connect(void);
typedef OV_RESULT DS_FNC_DISCONNECT(void) {
    /*    
    *   local variables
    */

    return OV_ERR_OK;
}

OV_DLLFNCEXPORT OV_RESULT Databases_MySQLDatabase_disconnect(void);
typedef OV_RESULT DS_FNC_READDATA(void) {
    /*    
    *   local variables
    */

    return OV_ERR_OK;
}

OV_DLLFNCEXPORT OV_RESULT Databases_MySQLDatabase_readData(void); 
typedef OV_RESULT DS_FNC_WRITEDATA(void) {
    /*    
    *   local variables
    */

    return OV_ERR_OK;
}

OV_DLLFNCEXPORT OV_RESULT Databases_MySQLDatabase_writeData(void);

// ALGORITHM
typedef OV_RESULT DS_FNC_STARTALGORITHM(OV_STRING JsonInput, OV_STRING *JsonOutput) {
    /*    
    *   local variables
    */

    return OV_ERR_OK;
}

OV_DLLFNCEXPORT OV_RESULT Databases_MySQLDatabase_constructor(
	OV_INSTPTR_ov_object 	pobj
) {
    /*    
    *   local variables
    */
    OV_INSTPTR_Databases_MySQLDatabase pinst = Ov_StaticPtrCast(Databases_MySQLDatabase, pobj);
    OV_RESULT    result;

    /* do what the base class does first */
    result = openAASDiscoveryServer_Database_constructor(pobj);
    if(Ov_Fail(result))
         return result;

    /* do what */


    return OV_ERR_OK;
}
