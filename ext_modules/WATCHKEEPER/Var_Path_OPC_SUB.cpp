/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: Var_Path_OPC_SUB
 *** Description: Template for a Simple Function Block Type
 *** Version: 
 ***     1.0: 2019-11-08/thomasolsen - null - 
 *************************************************************************/

#include "Var_Path_OPC_SUB.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Var_Path_OPC_SUB_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_Var_Path_OPC_SUB, g_nStringIdVar_Path_OPC_SUB)

const CStringDictionary::TStringId FORTE_Var_Path_OPC_SUB::scm_anDataInputNames[] = {g_nStringIddns, g_nStringIdNodeId_1, g_nStringIdNodeId_2, g_nStringIdNodeId_3, g_nStringIdNodeId_4};

const CStringDictionary::TStringId FORTE_Var_Path_OPC_SUB::scm_anDataInputTypeIds[] = {g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING};

const CStringDictionary::TStringId FORTE_Var_Path_OPC_SUB::scm_anDataOutputNames[] = {g_nStringIdOUT};

const CStringDictionary::TStringId FORTE_Var_Path_OPC_SUB::scm_anDataOutputTypeIds[] = {g_nStringIdWSTRING};

const TForteInt16 FORTE_Var_Path_OPC_SUB::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_Var_Path_OPC_SUB::scm_anEIWith[] = {1, 0, 4, 2, 3, 255};
const CStringDictionary::TStringId FORTE_Var_Path_OPC_SUB::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_Var_Path_OPC_SUB::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_Var_Path_OPC_SUB::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_Var_Path_OPC_SUB::scm_anEventOutputNames[] = {g_nStringIdCNF};

const SFBInterfaceSpec FORTE_Var_Path_OPC_SUB::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  5,  scm_anDataInputNames, scm_anDataInputTypeIds,
  1,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};

void FORTE_Var_Path_OPC_SUB::alg_REQ(void){
CIEC_WSTRING action;
CIEC_WSTRING endpoint;
CIEC_WSTRING browsepath_start;
CIEC_WSTRING browsepath_end;
CIEC_WSTRING browsepath;
CIEC_WSTRING id;
CIEC_WSTRING start;
CIEC_WSTRING end;
CIEC_WSTRING PAIR1;
CIEC_WSTRING PAIR2;
CIEC_WSTRING PAIR3;
CIEC_WSTRING PAIR4;
CIEC_WSTRING RESULT;
CIEC_WSTRING emptyString;
CIEC_WSTRING delString;
CIEC_INT stringLen;


emptyString = "";
delString = ";";

start = "opc_ua[";
action = "SUBSCRIBE;";


/*  browse path*/
browsepath_start = "opc.tcp://";
browsepath_end = ":4840#;";
/*  dns is the FB input as a WSTRING. It is the name of the remote OPC_UA server */
browsepath = CONCAT((browsepath_start), (dns()), (browsepath_end));

id = ",1:s=VAR.";
end = "]";

if((!((NodeId_1() == emptyString)))){
	PAIR1 = CONCAT((id), (NodeId_1()), (delString));
};
if((!((NodeId_2() == emptyString)))){
	PAIR2 = CONCAT((id), (NodeId_2()), (delString));
};
if((!((NodeId_3() == emptyString)))){
	PAIR3 = CONCAT((id), (NodeId_3()), (delString));
};
if((!((NodeId_4() == emptyString)))){
	PAIR4 = CONCAT((id), (NodeId_4()), (delString));
};

RESULT = CONCAT((start), (action), (browsepath), (PAIR1), (PAIR2), (PAIR3), (PAIR4));

stringLen = LEN((RESULT));
stringLen = stringLen-1;
RESULT = LEFT((RESULT), (stringLen));

OUT() = CONCAT((RESULT), (end));

}



