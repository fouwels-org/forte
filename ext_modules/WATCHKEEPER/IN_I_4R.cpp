/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: IN_I_4R
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-11-12/thomasolsen - null - 
 *************************************************************************/

#include "IN_I_4R.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "IN_I_4R_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_IN_I_4R, g_nStringIdIN_I_4R)

const CStringDictionary::TStringId FORTE_IN_I_4R::scm_anDataInputNames[] = {g_nStringIdPREFIX, g_nStringIdID1, g_nStringIdID2, g_nStringIdID3, g_nStringIdID4};

const CStringDictionary::TStringId FORTE_IN_I_4R::scm_anDataInputTypeIds[] = {g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING};

const CStringDictionary::TStringId FORTE_IN_I_4R::scm_anDataOutputNames[] = {g_nStringIdST, g_nStringIdQ1, g_nStringIdQ2, g_nStringIdQ3, g_nStringIdQ4};

const CStringDictionary::TStringId FORTE_IN_I_4R::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT};

const TForteInt16 FORTE_IN_I_4R::scm_anEIWithIndexes[] = {-1, 0};
const TDataIOID FORTE_IN_I_4R::scm_anEIWith[] = {1, 2, 3, 4, 0, 255};
const CStringDictionary::TStringId FORTE_IN_I_4R::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_IN_I_4R::scm_anEOWith[] = {0, 255, 0, 1, 2, 3, 4, 255};
const TForteInt16 FORTE_IN_I_4R::scm_anEOWithIndexes[] = {0, 2, -1};
const CStringDictionary::TStringId FORTE_IN_I_4R::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};

const SFBInterfaceSpec FORTE_IN_I_4R::scm_stFBInterfaceSpec = {
  2,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  2,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  5,  scm_anDataInputNames, scm_anDataInputTypeIds,
  5,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


const SCFB_FBInstanceData FORTE_IN_I_4R::scm_astInternalFBs[] = {
  {g_nStringIdCLIENT_1, g_nStringIdCLIENT_0_1},
  {g_nStringIdCLIENT_2, g_nStringIdCLIENT_0_1},
  {g_nStringIdCLIENT_3, g_nStringIdCLIENT_0_1},
  {g_nStringIdCLIENT_4, g_nStringIdCLIENT_0_1},
  {g_nStringIdINT1, g_nStringIdINT2INT},
  {g_nStringIdINT2, g_nStringIdINT2INT},
  {g_nStringIdINT3, g_nStringIdINT2INT},
  {g_nStringIdINT4, g_nStringIdINT2INT},
  {g_nStringIdF_OR, g_nStringIdF_OR},
  {g_nStringIdF_OR_1, g_nStringIdF_OR},
  {g_nStringIdF_OR_2, g_nStringIdF_OR},
  {g_nStringIdBOOL2BOOL, g_nStringIdBOOL2BOOL},
  {g_nStringIdBOOL2BOOL_1, g_nStringIdBOOL2BOOL},
  {g_nStringIdVar_Path_OPC_READ, g_nStringIdVar_Path_OPC_READ_1},
  {g_nStringIdVar_Path_OPC_READ_1, g_nStringIdVar_Path_OPC_READ_1},
  {g_nStringIdVar_Path_OPC_READ_2, g_nStringIdVar_Path_OPC_READ_1},
  {g_nStringIdVar_Path_OPC_READ_3, g_nStringIdVar_Path_OPC_READ_1},
};

const SCFB_FBParameter FORTE_IN_I_4R::scm_astParamters[] = {
  {13, g_nStringIddns, "opcserver"},
  {14, g_nStringIddns, "opcserver"},
  {15, g_nStringIddns, "opcserver"},
  {16, g_nStringIddns, "opcserver"},
};

const SCFB_FBConnectionData FORTE_IN_I_4R::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4, g_nStringIdINITO), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_2, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_2, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_3, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_3, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR, g_nStringIdCNF), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdREQ), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR_2, g_nStringIdCNF), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_1, g_nStringIdREQ), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_1, g_nStringIdCNF), 12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR_1, g_nStringIdREQ), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdCNF), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR_1, g_nStringIdREQ), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ, g_nStringIdCNF), 13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1, g_nStringIdINIT), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1, g_nStringIdINITO), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_1, g_nStringIdREQ), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_1, g_nStringIdCNF), 14, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_2, g_nStringIdINIT), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_2, g_nStringIdINITO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_2, g_nStringIdREQ), 15},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_2, g_nStringIdCNF), 15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_3, g_nStringIdINIT), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_3, g_nStringIdINITO), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3, g_nStringIdREQ), 16},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3, g_nStringIdCNF), 16, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4, g_nStringIdINIT), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ, g_nStringIdREQ), 13},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1, g_nStringIdREQ), 0},
};

const SCFB_FBFannedOutConnectionData FORTE_IN_I_4R::scm_astFannedOutEventConnections[] = {
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT1, g_nStringIdREQ), 4},
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR, g_nStringIdREQ), 8},
  {2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2, g_nStringIdREQ), 5},
  {2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR, g_nStringIdREQ), 8},
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT3, g_nStringIdREQ), 6},
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR_2, g_nStringIdREQ), 10},
  {4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT4, g_nStringIdREQ), 7},
  {4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR_2, g_nStringIdREQ), 10},
};

const SCFB_FBConnectionData FORTE_IN_I_4R::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1, g_nStringIdRD_1), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT1, g_nStringIdIN), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT1, g_nStringIdOUT), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQ1), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_2, g_nStringIdRD_1), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2, g_nStringIdIN), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2, g_nStringIdOUT), 5, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQ2), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_3, g_nStringIdRD_1), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT3, g_nStringIdIN), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT3, g_nStringIdOUT), 6, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQ3), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4, g_nStringIdRD_1), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT4, g_nStringIdIN), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT4, g_nStringIdOUT), 7, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQ4), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR_1, g_nStringIdOUT), 9, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdST), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR, g_nStringIdOUT), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdIN), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdOUT), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR_1, g_nStringIdIN1), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR_2, g_nStringIdOUT), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_1, g_nStringIdIN), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_1, g_nStringIdOUT), 12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR_1, g_nStringIdIN2), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1, g_nStringIdQO), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR, g_nStringIdIN1), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_2, g_nStringIdQO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR, g_nStringIdIN2), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_3, g_nStringIdQO), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR_2, g_nStringIdIN1), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4, g_nStringIdQO), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR_2, g_nStringIdIN2), 10},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdID1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ, g_nStringIdNodeId_1), 13},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ, g_nStringIdENABLED), 13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1, g_nStringIdQI), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ, g_nStringIdOUT), 13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1, g_nStringIdID), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdID2), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_1, g_nStringIdNodeId_1), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_1, g_nStringIdENABLED), 14, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_2, g_nStringIdQI), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_1, g_nStringIdOUT), 14, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_2, g_nStringIdID), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdID3), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_2, g_nStringIdNodeId_1), 15},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_2, g_nStringIdENABLED), 15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_3, g_nStringIdQI), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_2, g_nStringIdOUT), 15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_3, g_nStringIdID), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdID4), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3, g_nStringIdNodeId_1), 16},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3, g_nStringIdENABLED), 16, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4, g_nStringIdQI), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3, g_nStringIdOUT), 16, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4, g_nStringIdID), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPREFIX), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ, g_nStringIdPrefix), 13},
};

const SCFB_FBFannedOutConnectionData FORTE_IN_I_4R::scm_astFannedOutDataConnections[] = {
  {29, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_1, g_nStringIdPrefix), 14},
  {29, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_2, g_nStringIdPrefix), 15},
  {29, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3, g_nStringIdPrefix), 16},
};

const SCFB_FBNData FORTE_IN_I_4R::scm_stFBNData = {
  17, scm_astInternalFBs,
  18, scm_astEventConnections,
  8, scm_astFannedOutEventConnections,
  30, scm_astDataConnections,
  3, scm_astFannedOutDataConnections,
  4, scm_astParamters
};


