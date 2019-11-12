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

const CStringDictionary::TStringId FORTE_IN_I_4R::scm_anDataInputNames[] = {g_nStringIdEN, g_nStringIdID1, g_nStringIdID2, g_nStringIdID3, g_nStringIdID4};

const CStringDictionary::TStringId FORTE_IN_I_4R::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING};

const CStringDictionary::TStringId FORTE_IN_I_4R::scm_anDataOutputNames[] = {g_nStringIdST, g_nStringIdQ1, g_nStringIdQ2, g_nStringIdQ3, g_nStringIdQ4};

const CStringDictionary::TStringId FORTE_IN_I_4R::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT};

const TForteInt16 FORTE_IN_I_4R::scm_anEIWithIndexes[] = {0, 2};
const TDataIOID FORTE_IN_I_4R::scm_anEIWith[] = {0, 255, 0, 1, 2, 3, 4, 255};
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
  {g_nStringIdINT1, g_nStringIdINT2INT},
  {g_nStringIdINT2, g_nStringIdINT2INT},
  {g_nStringIdINT3, g_nStringIdINT2INT},
  {g_nStringIdINT4, g_nStringIdINT2INT},
};

const SCFB_FBParameter FORTE_IN_I_4R::scm_astParamters[] = {
  {6, g_nStringIddns, "opcserver"},
  {7, g_nStringIddns, "opcserver"},
  {8, g_nStringIddns, "opcserver"},
  {9, g_nStringIddns, "opcserver"},
};

const SCFB_FBConnectionData FORTE_IN_I_4R::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdENABLE_1, g_nStringIdEI), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdENABLE, g_nStringIdEI), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4, g_nStringIdINITO), 5, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdENABLE_1, g_nStringIdEO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1, g_nStringIdINIT), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1, g_nStringIdINITO), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_1, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_1, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_2, g_nStringIdINIT), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_2, g_nStringIdINITO), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_2, g_nStringIdREQ), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_2, g_nStringIdCNF), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_3, g_nStringIdINIT), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_3, g_nStringIdINITO), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3, g_nStringIdREQ), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3, g_nStringIdCNF), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4, g_nStringIdINIT), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdENABLE, g_nStringIdEO), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_2, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_2, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_3, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_3, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_IN_I_4R::scm_astFannedOutEventConnections[] = {
  {12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT1, g_nStringIdREQ), 10},
  {13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2, g_nStringIdREQ), 11},
  {14, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT3, g_nStringIdREQ), 12},
  {15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT4, g_nStringIdREQ), 13},
};

const SCFB_FBConnectionData FORTE_IN_I_4R::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdEN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdENABLE, g_nStringIdPERMIT), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdID1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ, g_nStringIdNodeId_1), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ, g_nStringIdENABLED), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1, g_nStringIdQI), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ, g_nStringIdOUT), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1, g_nStringIdID), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdID2), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_1, g_nStringIdNodeId_1), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_1, g_nStringIdENABLED), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_2, g_nStringIdQI), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_1, g_nStringIdOUT), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_2, g_nStringIdID), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdID3), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_2, g_nStringIdNodeId_1), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_2, g_nStringIdENABLED), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_3, g_nStringIdQI), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_2, g_nStringIdOUT), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_3, g_nStringIdID), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdID4), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3, g_nStringIdNodeId_1), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3, g_nStringIdENABLED), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4, g_nStringIdQI), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ_3, g_nStringIdOUT), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4, g_nStringIdID), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1, g_nStringIdRD_1), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT1, g_nStringIdIN), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT1, g_nStringIdOUT), 10, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQ1), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_2, g_nStringIdRD_1), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2, g_nStringIdIN), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2, g_nStringIdOUT), 11, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQ2), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_3, g_nStringIdRD_1), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT3, g_nStringIdIN), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT3, g_nStringIdOUT), 12, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQ3), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4, g_nStringIdRD_1), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT4, g_nStringIdIN), 13},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT4, g_nStringIdOUT), 13, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdQ4), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_4, g_nStringIdQO), 5, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdST), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_IN_I_4R::scm_astFannedOutDataConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdENABLE_1, g_nStringIdPERMIT), 1},
};

const SCFB_FBNData FORTE_IN_I_4R::scm_stFBNData = {
  14, scm_astInternalFBs,
  16, scm_astEventConnections,
  4, scm_astFannedOutEventConnections,
  22, scm_astDataConnections,
  1, scm_astFannedOutDataConnections,
  4, scm_astParamters
};


