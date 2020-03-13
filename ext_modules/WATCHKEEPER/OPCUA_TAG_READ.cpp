/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: OPCUA_TAG_READ
 *** Description: Reads a tag value from an OPCUA server
 *** Version: 
 ***     1.0: 2020-03-10/richardatkinson - null - 
 *************************************************************************/

#include "OPCUA_TAG_READ.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "OPCUA_TAG_READ_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_OPCUA_TAG_READ, g_nStringIdOPCUA_TAG_READ)

const CStringDictionary::TStringId FORTE_OPCUA_TAG_READ::scm_anDataInputNames[] = {g_nStringIddns, g_nStringIdPrefix, g_nStringIdTag_Type, g_nStringIdTag_1, g_nStringIdTag_2, g_nStringIdTag_3, g_nStringIdTag_4, g_nStringIdClient_Read_Complete, g_nStringIdClient_Status, g_nStringIdData_From_Client, g_nStringIdPoll_Time};

const CStringDictionary::TStringId FORTE_OPCUA_TAG_READ::scm_anDataInputTypeIds[] = {g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdBOOL, g_nStringIdTIME};

const CStringDictionary::TStringId FORTE_OPCUA_TAG_READ::scm_anDataOutputNames[] = {g_nStringIdENABLED, g_nStringIdID_OUT, g_nStringIdCur_Tag_Read, g_nStringIdTag1_Value, g_nStringIdTag2_Value, g_nStringIdTag3_Value, g_nStringIdTag4_Value, g_nStringIdSTATUS};

const CStringDictionary::TStringId FORTE_OPCUA_TAG_READ::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdINT, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdWSTRING};

const TForteInt16 FORTE_OPCUA_TAG_READ::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_OPCUA_TAG_READ::scm_anEIWith[] = {3, 0, 1, 4, 5, 6, 9, 7, 8, 2, 255};
const CStringDictionary::TStringId FORTE_OPCUA_TAG_READ::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_OPCUA_TAG_READ::scm_anEOWith[] = {0, 1, 2, 3, 4, 5, 6, 7, 255};
const TForteInt16 FORTE_OPCUA_TAG_READ::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_OPCUA_TAG_READ::scm_anEventOutputNames[] = {g_nStringIdCNF};

const SFBInterfaceSpec FORTE_OPCUA_TAG_READ::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  11,  scm_anDataInputNames, scm_anDataInputTypeIds,
  8,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};

void FORTE_OPCUA_TAG_READ::alg_REQ(void){
CIEC_WSTRING tag1_connection_string;
CIEC_WSTRING tag2_connection_string;
CIEC_WSTRING tag3_connection_string;
CIEC_WSTRING tag4_connection_string;


/*  SET UP OPCUA connection string */
/*  EXAMPLE CONNECTION STRING          opc_ua[READ;opc.tcp://10.0.5.90:4840#;,1:s=IO.V01_1]          */
if((!((Tag_1() == "")))){
	tag1_connection_string = "opc_ua[READ;opc.tcp://10.0.5.90:4840#;,1:s=IO.V01_1]";/* CONCAT("opc_ua[READ;opc.tcp://" , dns , ":4840#;,1:s=" , Prefix , "." , Tag_1 , "]");*/
};

if((!((Tag_2() == "")))){
	tag2_connection_string = "opc_ua[READ;opc.tcp://10.0.5.90:4840#;,1:s=IO.V01_2]";
};

if((!((Tag_3() == "")))){
	tag3_connection_string = "opc_ua[READ;opc.tcp://10.0.5.90:4840#;,1:s=IO.V01_3]";
};

if((!((Tag_4() == "")))){
	tag4_connection_string = "opc_ua[READ;opc.tcp://10.0.5.90:4840#;,1:s=IO.V01_4]";
};
	
/*  READ THE OPCUA TAGS IN SUCCESSION */
switch(Cur_Tag_Read() ){
case 0:
	ENABLED() = false;
	Cur_Tag_Read() = 1;
break;

case 1:
	if((!((ENABLED())))){
		ID_OUT() = tag1_connection_string;
		ENABLED() = true;
	};
	if((((Client_Read_Complete()))) && (((Client_Status() == "OK")))){
		Tag1_Value() = Data_From_Client();
		ENABLED() = false;
		Cur_Tag_Read() = 2;
	}
break;

case 2:
	if((!((ENABLED())))){
		ID_OUT() = tag2_connection_string;
		ENABLED() = true;
	};
	if((((Client_Read_Complete()))) && (((Client_Status() == "OK")))){
		Tag2_Value() = Data_From_Client();
		ENABLED() = false;
		Cur_Tag_Read() = 0;
	}
break;

case 3:
	ENABLED() = false;
	Cur_Tag_Read() = 1;		
 break;
default: 
		ENABLED() = false;
		Cur_Tag_Read() = 0;
 };

STATUS() = Client_Status();

}



