/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: OUT_I_4W
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-11-12/thomasolsen - null - 
 *************************************************************************/

#include "OUT_I_4W.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "OUT_I_4W_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_OUT_I_4W, g_nStringIdOUT_I_4W)

const CStringDictionary::TStringId FORTE_OUT_I_4W::scm_anDataInputNames[] = {g_nStringIdEN, g_nStringIdPREFIX, g_nStringIdID1, g_nStringIdO1, g_nStringIdID2, g_nStringIdO2, g_nStringIdID3, g_nStringIdO3, g_nStringIdID4, g_nStringIdO4};

const CStringDictionary::TStringId FORTE_OUT_I_4W::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdINT, g_nStringIdWSTRING, g_nStringIdINT, g_nStringIdWSTRING, g_nStringIdINT, g_nStringIdWSTRING, g_nStringIdINT};

const CStringDictionary::TStringId FORTE_OUT_I_4W::scm_anDataOutputNames[] = {g_nStringIdST};

const CStringDictionary::TStringId FORTE_OUT_I_4W::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TForteInt16 FORTE_OUT_I_4W::scm_anEIWithIndexes[] = {0, 2};
const TDataIOID FORTE_OUT_I_4W::scm_anEIWith[] = {0, 255, 0, 2, 4, 6, 8, 3, 5, 7, 9, 1, 255};
const CStringDictionary::TStringId FORTE_OUT_I_4W::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_OUT_I_4W::scm_anEOWith[] = {0, 255, 0, 255};
const TForteInt16 FORTE_OUT_I_4W::scm_anEOWithIndexes[] = {0, 2, -1};
const CStringDictionary::TStringId FORTE_OUT_I_4W::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};

const SFBInterfaceSpec FORTE_OUT_I_4W::scm_stFBInterfaceSpec = {
  2,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  2,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  10,  scm_anDataInputNames, scm_anDataInputTypeIds,
  1,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


const SCFB_FBInstanceData FORTE_OUT_I_4W::scm_astInternalFBs[] = {
  {g_nStringIdENABLE, g_nStringIdE_PERMIT},
  {g_nStringIdENABLE_1, g_nStringIdE_PERMIT},
  {g_nStringIdCLIENT_1_0, g_nStringIdCLIENT_1_0},
  {g_nStringIdCLIENT_1_0_1, g_nStringIdCLIENT_1_0},
  {g_nStringIdCLIENT_1_0_1_1, g_nStringIdCLIENT_1_0},
  {g_nStringIdCLIENT_1_0_1_1_1, g_nStringIdCLIENT_1_0},
  {g_nStringIdint4, g_nStringIdFilterInt},
  {g_nStringIdint3, g_nStringIdFilterInt},
  {g_nStringIdint2, g_nStringIdFilterInt},
  {g_nStringIdint1, g_nStringIdFilterInt},
  {g_nStringIdF_OR_2, g_nStringIdF_OR},
  {g_nStringIdF_OR, g_nStringIdF_OR},
  {g_nStringIdBOOL2BOOL, g_nStringIdBOOL2BOOL},
  {g_nStringIdBOOL2BOOL_1, g_nStringIdBOOL2BOOL},
  {g_nStringIdF_OR_1, g_nStringIdF_OR},
  {g_nStringIdVar_Path_OPC_W_1, g_nStringIdVar_Path_OPC_WRITE_1},
  {g_nStringIdVar_Path_OPC_W, g_nStringIdVar_Path_OPC_WRITE_1},
  {g_nStringIdVar_Path_OPC_W_2, g_nStringIdVar_Path_OPC_WRITE_1},
  {g_nStringIdVar_Path_OPC_W_3, g_nStringIdVar_Path_OPC_WRITE_1},
};

const SCFB_FBParameter FORTE_OUT_I_4W::scm_astParamters[] = {
  {15, g_nStringIddns, "opcserver"},
  {16, g_nStringIddns, "opcserver"},
  {17, g_nStringIddns, "opcserver"},
  {18, g_nStringIddns, "opcserver"},
};

const SCFB_FBConnectionData FORTE_OUT_I_4W::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdENABLE_1, g_nStringIdEI), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdENABLE, g_nStringIdEI), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0_1_1_1, g_nStringIdINITO), 5, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdint4, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0_1_1_1, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdint3, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0_1_1, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdint2, g_nStringIdCNF), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0_1, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdint1, g_nStringIdCNF), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdENABLE, g_nStringIdEO), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdint2, g_nStringIdREQ), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_1, g_nStringIdCNF), 13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR_1, g_nStringIdREQ), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdCNF), 12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR_1, g_nStringIdREQ), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR, g_nStringIdCNF), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdREQ), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR_2, g_nStringIdCNF), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_1, g_nStringIdREQ), 13},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR, g_nStringIdREQ), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0_1, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR, g_nStringIdREQ), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0_1_1, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR_2, g_nStringIdREQ), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0_1_1_1, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR_2, g_nStringIdREQ), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0, g_nStringIdINITO), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_W_1, g_nStringIdREQ), 15},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_W_1, g_nStringIdCNF), 15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0_1, g_nStringIdINIT), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdENABLE_1, g_nStringIdEO), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_W, g_nStringIdREQ), 16},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_W, g_nStringIdCNF), 16, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0, g_nStringIdINIT), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0_1, g_nStringIdINITO), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_W_2, g_nStringIdREQ), 17},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_W_2, g_nStringIdCNF), 17, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0_1_1, g_nStringIdINIT), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0_1_1, g_nStringIdINITO), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_W_3, g_nStringIdREQ), 18},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_W_3, g_nStringIdCNF), 18, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0_1_1_1, g_nStringIdINIT), 5},
};

const SCFB_FBFannedOutConnectionData FORTE_OUT_I_4W::scm_astFannedOutEventConnections[] = {
  {7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdint3, g_nStringIdREQ), 7},
  {7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdint4, g_nStringIdREQ), 6},
  {7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdint1, g_nStringIdREQ), 9},
  {7, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
};

const SCFB_FBConnectionData FORTE_OUT_I_4W::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdEN), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdENABLE, g_nStringIdPERMIT), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdO4), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdint4, g_nStringIdIN), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdint4, g_nStringIdOUT), 6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0_1_1_1, g_nStringIdSD_1), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdO3), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdint3, g_nStringIdIN), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdint3, g_nStringIdOUT), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0_1_1, g_nStringIdSD_1), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdO2), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdint2, g_nStringIdIN), 8},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdint2, g_nStringIdOUT), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0_1, g_nStringIdSD_1), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdO1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdint1, g_nStringIdIN), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdint1, g_nStringIdOUT), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0, g_nStringIdSD_1), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR_1, g_nStringIdOUT), 14, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdST), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdOUT), 12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR_1, g_nStringIdIN1), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_1, g_nStringIdOUT), 13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR_1, g_nStringIdIN2), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR, g_nStringIdOUT), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdIN), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR_2, g_nStringIdOUT), 10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_1, g_nStringIdIN), 13},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0, g_nStringIdQO), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR, g_nStringIdIN1), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0_1, g_nStringIdQO), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR, g_nStringIdIN2), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0_1_1, g_nStringIdQO), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR_2, g_nStringIdIN1), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0_1_1_1, g_nStringIdQO), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_OR_2, g_nStringIdIN2), 10},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdID2), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_W_1, g_nStringIdNodeId_1), 15},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_W_1, g_nStringIdENABLED), 15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0_1, g_nStringIdQI), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_W_1, g_nStringIdOUT), 15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0_1, g_nStringIdID), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdID1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_W, g_nStringIdNodeId_1), 16},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_W, g_nStringIdENABLED), 16, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0, g_nStringIdQI), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_W, g_nStringIdOUT), 16, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0, g_nStringIdID), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdID3), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_W_2, g_nStringIdNodeId_1), 17},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_W_2, g_nStringIdENABLED), 17, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0_1_1, g_nStringIdQI), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_W_2, g_nStringIdOUT), 17, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0_1_1, g_nStringIdID), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdID4), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_W_3, g_nStringIdNodeId_1), 18},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_W_3, g_nStringIdENABLED), 18, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0_1_1_1, g_nStringIdQI), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_W_3, g_nStringIdOUT), 18, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0_1_1_1, g_nStringIdID), 5},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPREFIX), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_W, g_nStringIdPrefix), 16},
};

const SCFB_FBFannedOutConnectionData FORTE_OUT_I_4W::scm_astFannedOutDataConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdENABLE_1, g_nStringIdPERMIT), 1},
  {30, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_W_1, g_nStringIdPrefix), 15},
  {30, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_W_2, g_nStringIdPrefix), 17},
  {30, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_W_3, g_nStringIdPrefix), 18},
};

const SCFB_FBNData FORTE_OUT_I_4W::scm_stFBNData = {
  19, scm_astInternalFBs,
  24, scm_astEventConnections,
  4, scm_astFannedOutEventConnections,
  31, scm_astDataConnections,
  4, scm_astFannedOutDataConnections,
  4, scm_astParamters
};


