/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: In_Bool4
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-11-05/thomasolsen - null - 
 *************************************************************************/

#include "In_Bool4.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "In_Bool4_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_In_Bool4, g_nStringIdIn_Bool4)

const CStringDictionary::TStringId FORTE_In_Bool4::scm_anDataInputNames[] = {g_nStringIdName1, g_nStringIdName2, g_nStringIdName3, g_nStringIdName4};

const CStringDictionary::TStringId FORTE_In_Bool4::scm_anDataInputTypeIds[] = {g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING};

const CStringDictionary::TStringId FORTE_In_Bool4::scm_anDataOutputNames[] = {g_nStringIdIN1, g_nStringIdIN2, g_nStringIdIN3, g_nStringIdIN4};

const CStringDictionary::TStringId FORTE_In_Bool4::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_In_Bool4::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_In_Bool4::scm_anEIWith[] = {0, 1, 2, 3, 255};
const CStringDictionary::TStringId FORTE_In_Bool4::scm_anEventInputNames[] = {g_nStringIdINIT};

const TDataIOID FORTE_In_Bool4::scm_anEOWith[] = {0, 1, 2, 3, 255};
const TForteInt16 FORTE_In_Bool4::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_In_Bool4::scm_anEventOutputNames[] = {g_nStringIdCNF};

const SFBInterfaceSpec FORTE_In_Bool4::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  4,  scm_anDataInputNames, scm_anDataInputTypeIds,
  4,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


const SCFB_FBInstanceData FORTE_In_Bool4::scm_astInternalFBs[] = {
  {g_nStringIdBOOL2BOOL, g_nStringIdBOOL2BOOL},
  {g_nStringIdBOOL2BOOL_1, g_nStringIdBOOL2BOOL},
  {g_nStringIdBOOL2BOOL_2, g_nStringIdBOOL2BOOL},
  {g_nStringIdBOOL2BOOL_3, g_nStringIdBOOL2BOOL},
  {g_nStringIdInput_Path_OPC_SUB, g_nStringIdInput_Path_OPC_SUB},
  {g_nStringIdSUBSCRIBE_4, g_nStringIdSUBSCRIBE_4},
};

const SCFB_FBParameter FORTE_In_Bool4::scm_astParamters[] = {
  {4, g_nStringIddns, "opcserver"},
  {5, g_nStringIdQI, "TRUE"},
};

const SCFB_FBConnectionData FORTE_In_Bool4::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_1, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_2, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_3, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInput_Path_OPC_SUB, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInput_Path_OPC_SUB, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_4, g_nStringIdINIT), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_4, g_nStringIdIND), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdREQ), 0},
};

const SCFB_FBFannedOutConnectionData FORTE_In_Bool4::scm_astFannedOutEventConnections[] = {
  {6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_1, g_nStringIdREQ), 1},
  {6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_2, g_nStringIdREQ), 2},
  {6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_3, g_nStringIdREQ), 3},
};

const SCFB_FBConnectionData FORTE_In_Bool4::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdOUT), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdIN1), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_1, g_nStringIdOUT), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdIN2), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_2, g_nStringIdOUT), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdIN3), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_3, g_nStringIdOUT), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdIN4), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdName1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInput_Path_OPC_SUB, g_nStringIdNodeId_1), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdName2), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInput_Path_OPC_SUB, g_nStringIdNodeId_2), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdName3), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInput_Path_OPC_SUB, g_nStringIdNodeId_3), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdName4), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInput_Path_OPC_SUB, g_nStringIdNodeId_4), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInput_Path_OPC_SUB, g_nStringIdOUT), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_4, g_nStringIdID), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_4, g_nStringIdRD_1), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdIN), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_4, g_nStringIdRD_2), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_1, g_nStringIdIN), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_4, g_nStringIdRD_3), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_2, g_nStringIdIN), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_4, g_nStringIdRD_4), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_3, g_nStringIdIN), 3},
};

const SCFB_FBNData FORTE_In_Bool4::scm_stFBNData = {
  6, scm_astInternalFBs,
  7, scm_astEventConnections,
  3, scm_astFannedOutEventConnections,
  13, scm_astDataConnections,
  0, 0,
  2, scm_astParamters
};


