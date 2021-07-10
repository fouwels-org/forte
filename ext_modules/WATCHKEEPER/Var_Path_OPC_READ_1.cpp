/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Var_Path_OPC_READ_1
 *** Description: Template for a Simple Function Block Type
 *** Version:
***     1.0: 2019-11-08/thomasolsen -  - 
 *************************************************************************/

#include "Var_Path_OPC_READ_1.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Var_Path_OPC_READ_1_gen.cpp"
#endif

#include "forte_int.h"
#include "forte_wstring.h"
#include "forte_array_at.h"

DEFINE_FIRMWARE_FB(FORTE_Var_Path_OPC_READ_1, g_nStringIdVar_Path_OPC_READ_1)

const CStringDictionary::TStringId FORTE_Var_Path_OPC_READ_1::scm_anDataInputNames[] = {g_nStringIddns, g_nStringIdPrefix, g_nStringIdNodeId_1};

const CStringDictionary::TStringId FORTE_Var_Path_OPC_READ_1::scm_anDataInputTypeIds[] = {g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING};

const CStringDictionary::TStringId FORTE_Var_Path_OPC_READ_1::scm_anDataOutputNames[] = {g_nStringIdENABLED, g_nStringIdOUT};

const CStringDictionary::TStringId FORTE_Var_Path_OPC_READ_1::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING};

const TDataIOID FORTE_Var_Path_OPC_READ_1::scm_anEIWith[] = {2, 0, 1, 255};
const TForteInt16 FORTE_Var_Path_OPC_READ_1::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_Var_Path_OPC_READ_1::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_Var_Path_OPC_READ_1::scm_anEOWith[] = {1, 0, 255};
const TForteInt16 FORTE_Var_Path_OPC_READ_1::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_Var_Path_OPC_READ_1::scm_anEventOutputNames[] = {g_nStringIdCNF};


const SFBInterfaceSpec FORTE_Var_Path_OPC_READ_1::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  3, scm_anDataInputNames, scm_anDataInputTypeIds,
  2, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

void FORTE_Var_Path_OPC_READ_1::setInitialValues() {
}
void FORTE_Var_Path_OPC_READ_1::alg_REQ(void) {
  CIEC_WSTRING st_action;
  CIEC_WSTRING st_endpoint;
  CIEC_WSTRING st_browsepath_start;
  CIEC_WSTRING st_browsepath_end;
  CIEC_WSTRING st_browsepath;
  CIEC_WSTRING st_id;
  CIEC_WSTRING st_start;
  CIEC_WSTRING st_end;
  CIEC_WSTRING st_PAIR1;
  CIEC_WSTRING st_PAIR2;
  CIEC_WSTRING st_PAIR3;
  CIEC_WSTRING st_PAIR4;
  CIEC_WSTRING st_RESULT;
  CIEC_WSTRING st_emptyString;
  CIEC_WSTRING st_delString;
  CIEC_WSTRING st_dotString;
  CIEC_INT st_stringLen;
  st_ENABLED() = false;
  st_emptyString = "";
  st_delString = ";";
  st_start = "opc_ua[";
  st_action = "READ;";
  st_browsepath_start = "opc.tcp://";
  st_browsepath_end = ":4840#;";
  st_browsepath = CONCAT(st_browsepath_start, st_dns(), st_browsepath_end);
  st_id = ",1:s=";
  st_end = "]";
  if((! (st_NodeId_1() == st_emptyString))) {
  	st_PAIR1 = CONCAT(st_id, st_Prefix(), st_NodeId_1(), st_delString);
  	st_ENABLED() = true;
  }
  st_RESULT = CONCAT(st_start, st_action, st_browsepath, st_PAIR1, st_PAIR2, st_PAIR3, st_PAIR4);
  st_stringLen = LEN(st_RESULT);
  st_stringLen = SUB(st_stringLen, 1);
  st_RESULT = LEFT(st_RESULT, st_stringLen);
  st_OUT() = CONCAT(st_RESULT, st_end);
}


