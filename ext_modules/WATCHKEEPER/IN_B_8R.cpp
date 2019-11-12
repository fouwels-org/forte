/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: IN_B_8R
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-11-12/thomasolsen - null - 
 *************************************************************************/

#include "IN_B_8R.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "IN_B_8R_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_IN_B_8R, g_nStringIdIN_B_8R)

const CStringDictionary::TStringId FORTE_IN_B_8R::scm_anDataInputNames[] = {g_nStringIdEN, g_nStringIdID1, g_nStringIdID2, g_nStringIdID3, g_nStringIdID4, g_nStringIdID5, g_nStringIdID6, g_nStringIdID7, g_nStringIdID8};

const CStringDictionary::TStringId FORTE_IN_B_8R::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING};

const CStringDictionary::TStringId FORTE_IN_B_8R::scm_anDataOutputNames[] = {g_nStringIdST, g_nStringIdQ1, g_nStringIdQ2, g_nStringIdQ3, g_nStringIdQ4, g_nStringIdQ5, g_nStringIdQ6, g_nStringIdQ7, g_nStringIdQ8};

const CStringDictionary::TStringId FORTE_IN_B_8R::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_IN_B_8R::scm_anEIWithIndexes[] = {0, 2};
const TDataIOID FORTE_IN_B_8R::scm_anEIWith[] = {0, 255, 0, 1, 2, 3, 4, 5, 6, 7, 8, 255};
const CStringDictionary::TStringId FORTE_IN_B_8R::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_IN_B_8R::scm_anEOWith[] = {0, 255, 0, 1, 2, 3, 4, 5, 6, 7, 8, 255};
const TForteInt16 FORTE_IN_B_8R::scm_anEOWithIndexes[] = {0, 2, -1};
const CStringDictionary::TStringId FORTE_IN_B_8R::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};

const SFBInterfaceSpec FORTE_IN_B_8R::scm_stFBInterfaceSpec = {
  2,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  2,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  9,  scm_anDataInputNames, scm_anDataInputTypeIds,
  9,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


const SCFB_FBInstanceData FORTE_IN_B_8R::scm_astInternalFBs[] = {
  {g_nStringIdBOOL2BOOL, g_nStringIdBOOL2BOOL},
  {g_nStringIdBOOL2BOOL_1, g_nStringIdBOOL2BOOL},
  {g_nStringIdBOOL2BOOL_2, g_nStringIdBOOL2BOOL},
  {g_nStringIdBOOL2BOOL_3, g_nStringIdBOOL2BOOL},
  {g_nStringIdENABLE, g_nStringIdE_PERMIT},
  {g_nStringIdENABLE_1, g_nStringIdE_PERMIT},
  {g_nStringIdCLIENT_1, g_nStringIdCLIENT_0_1},
  {g_nStringIdCLIENT_2, g_nStringIdCLIENT_0_1},
  {g_nStringIdCLIENT_3, g_nStringIdCLIENT_0_1},
  {g_nStringIdCLIENT_4, g_nStringIdCLIENT_0_1},
  {g_nStringIdVar_Path_OPC_READ, g_nStringIdVar_Path_OPC_READ_1},
  {g_nStringIdVar_Path_OPC_READ_1, g_nStringIdVar_Path_OPC_READ_1},
  {g_nStringIdVar_Path_OPC_READ_2, g_nStringIdVar_Path_OPC_READ_1},
  {g_nStringIdVar_Path_OPC_READ_3, g_nStringIdVar_Path_OPC_READ_1},
  {g_nStringIdVar_Path_OPC_READ_3_1, g_nStringIdVar_Path_OPC_READ_1},
  {g_nStringIdCLIENT_4_1, g_nStringIdCLIENT_0_1},
  {g_nStringIdVar_Path_OPC_READ_3_1_1, g_nStringIdVar_Path_OPC_READ_1},
  {g_nStringIdCLIENT_4_1_1, g_nStringIdCLIENT_0_1},
  {g_nStringIdVar_Path_OPC_READ_3_1_1_1, g_nStringIdVar_Path_OPC_READ_1},
  {g_nStringIdCLIENT_4_1_1_1, g_nStringIdCLIENT_0_1},
  {g_nStringIdVar_Path_OPC_READ_3_1_1_1_1, g_nStringIdVar_Path_OPC_READ_1},
  {g_nStringIdCLIENT_4_1_1_1_1, g_nStringIdCLIENT_0_1},
  {g_nStringIdBOOL2BOOL_2_1, g_nStringIdBOOL2BOOL},
  {g_nStringIdBOOL2BOOL_3_1, g_nStringIdBOOL2BOOL},
  {g_nStringIdBOOL2BOOL_1_1, g_nStringIdBOOL2BOOL},
  {g_nStringIdBOOL2BOOL_4, g_nStringIdBOOL2BOOL},
};

const SCFB_FBParameter FORTE_IN_B_8R::scm_astParamters[] = {
  {10, g_nStringIddns, "opcserver"},
  {11, g_nStringIddns, "opcserver"},
  {12, g_nStringIddns, "opcserver"},
  {13, g_nStringIddns, "opcserver"},
  {14, g_nStringIddns, "opcserver"},
  {16, g_nStringIddns, "opcserver"},
  {18, g_nStringIddns, "opcserver"},
  {20, g_nStringIddns, "opcserver"},
};

const SCFB_FBConnectionData FORTE_IN_B_8R::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdENABLE_1, g_nStringIdEI), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdENABLE, g_nStringIdEI), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_2, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_1, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_3, g_nStringIdCNF), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_3, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdENABLE_1, g_nStringIdEO), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ, g_nStringIdREQ), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ, g_nStringIdCNF), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1, g_nStringIdINIT), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1, g_nStringIdINITO), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_1, g_nStringIdREQ), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_1, g_nStringIdCNF), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_2, g_nStringIdINIT), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_2, g_nStringIdINITO), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_2, g_nStringIdREQ), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_2, g_nStringIdCNF), 12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_3, g_nStringIdINIT), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_3, g_nStringIdINITO), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3, g_nStringIdREQ), 13},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3, g_nStringIdCNF), 13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4, g_nStringIdINIT), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdENABLE, g_nStringIdEO), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4, g_nStringIdCNF), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_2, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4, g_nStringIdINITO), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3_1, g_nStringIdREQ), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3_1, g_nStringIdCNF), 14, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4_1, g_nStringIdINIT), 15},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4_1, g_nStringIdINITO), 15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3_1_1, g_nStringIdREQ), 16},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3_1_1, g_nStringIdCNF), 16, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4_1_1, g_nStringIdINIT), 17},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3_1_1_1, g_nStringIdCNF), 18, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4_1_1_1, g_nStringIdINIT), 19},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4_1_1, g_nStringIdINITO), 17, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3_1_1_1, g_nStringIdREQ), 18},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4_1_1, g_nStringIdCNF), 17, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4_1_1_1, g_nStringIdREQ), 19},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4_1_1_1, g_nStringIdINITO), 19, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3_1_1_1_1, g_nStringIdREQ), 20},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3_1_1_1_1, g_nStringIdCNF), 20, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4_1_1_1_1, g_nStringIdINIT), 21},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4_1_1_1, g_nStringIdCNF), 19, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4_1_1_1_1, g_nStringIdREQ), 21},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4_1_1_1_1, g_nStringIdINITO), 21, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4_1_1_1_1, g_nStringIdCNF), 21, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4_1, g_nStringIdCNF), 15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4_1_1, g_nStringIdREQ), 17},
};

const SCFB_FBFannedOutConnectionData FORTE_IN_B_8R::scm_astFannedOutEventConnections[] = {
  {2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_2, g_nStringIdREQ), 7},
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_3, g_nStringIdREQ), 8},
  {4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4, g_nStringIdREQ), 9},
  {14, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4_1, g_nStringIdREQ), 15},
  {21, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_1_1, g_nStringIdREQ), 24},
  {24, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_3_1, g_nStringIdREQ), 23},
  {26, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_2_1, g_nStringIdREQ), 22},
  {27, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_4, g_nStringIdREQ), 25},
};

const SCFB_FBConnectionData FORTE_IN_B_8R::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdEN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdENABLE, g_nStringIdPERMIT), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdOUT), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQ1), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_1, g_nStringIdOUT), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQ2), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_3, g_nStringIdOUT), 3, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQ3), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_2, g_nStringIdOUT), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQ4), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1, g_nStringIdRD_1), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdIN), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4, g_nStringIdRD_1), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_2, g_nStringIdIN), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_3, g_nStringIdRD_1), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_3, g_nStringIdIN), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_2, g_nStringIdRD_1), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_1, g_nStringIdIN), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ, g_nStringIdENABLED), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1, g_nStringIdQI), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ, g_nStringIdOUT), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1, g_nStringIdID), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_1, g_nStringIdENABLED), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_2, g_nStringIdQI), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_1, g_nStringIdOUT), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_2, g_nStringIdID), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_2, g_nStringIdENABLED), 12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_3, g_nStringIdQI), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_2, g_nStringIdOUT), 12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_3, g_nStringIdID), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3, g_nStringIdENABLED), 13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4, g_nStringIdQI), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3, g_nStringIdOUT), 13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4, g_nStringIdID), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3_1, g_nStringIdENABLED), 14, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4_1, g_nStringIdQI), 15},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3_1, g_nStringIdOUT), 14, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4_1, g_nStringIdID), 15},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdID6), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3_1_1, g_nStringIdNodeId_1), 16},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3_1_1, g_nStringIdOUT), 16, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4_1_1, g_nStringIdID), 17},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3_1_1, g_nStringIdENABLED), 16, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4_1_1, g_nStringIdQI), 17},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3_1_1_1, g_nStringIdENABLED), 18, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4_1_1_1, g_nStringIdQI), 19},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3_1_1_1, g_nStringIdOUT), 18, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4_1_1_1, g_nStringIdID), 19},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdID7), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3_1_1_1, g_nStringIdNodeId_1), 18},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdID1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ, g_nStringIdNodeId_1), 10},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdID2), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_1, g_nStringIdNodeId_1), 11},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdID3), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_2, g_nStringIdNodeId_1), 12},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdID4), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3, g_nStringIdNodeId_1), 13},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdID5), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3_1, g_nStringIdNodeId_1), 14},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdID8), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3_1_1_1_1, g_nStringIdNodeId_1), 20},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3_1_1_1_1, g_nStringIdOUT), 20, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4_1_1_1_1, g_nStringIdID), 21},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3_1_1_1_1, g_nStringIdENABLED), 20, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4_1_1_1_1, g_nStringIdQI), 21},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_4, g_nStringIdOUT), 25, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQ5), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_1_1, g_nStringIdOUT), 24, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQ6), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_3_1, g_nStringIdOUT), 23, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQ7), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_2_1, g_nStringIdOUT), 22, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQ8), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4_1, g_nStringIdRD_1), 15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_4, g_nStringIdIN), 25},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4_1_1, g_nStringIdRD_1), 17, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_1_1, g_nStringIdIN), 24},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4_1_1_1, g_nStringIdRD_1), 19, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_3_1, g_nStringIdIN), 23},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4_1_1_1_1, g_nStringIdRD_1), 21, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_2_1, g_nStringIdIN), 22},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4_1_1_1_1, g_nStringIdQO), 21, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdST), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_IN_B_8R::scm_astFannedOutDataConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdENABLE_1, g_nStringIdPERMIT), 5},
};

const SCFB_FBNData FORTE_IN_B_8R::scm_stFBNData = {
  26, scm_astInternalFBs,
  28, scm_astEventConnections,
  8, scm_astFannedOutEventConnections,
  42, scm_astDataConnections,
  1, scm_astFannedOutDataConnections,
  8, scm_astParamters
};


