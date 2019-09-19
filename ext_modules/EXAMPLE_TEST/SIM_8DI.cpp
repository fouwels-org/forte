/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: SIM_8DI
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-07-17/mariuszbalon1 - null - 
 *************************************************************************/

#include "SIM_8DI.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "SIM_8DI_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_SIM_8DI, g_nStringIdSIM_8DI)

const CStringDictionary::TStringId FORTE_SIM_8DI::scm_anDataInputNames[] = {g_nStringIdID};

const CStringDictionary::TStringId FORTE_SIM_8DI::scm_anDataInputTypeIds[] = {g_nStringIdWSTRING};

const CStringDictionary::TStringId FORTE_SIM_8DI::scm_anDataOutputNames[] = {g_nStringIdIn_Transit, g_nStringIdOpen, g_nStringIdClosed};

const CStringDictionary::TStringId FORTE_SIM_8DI::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_SIM_8DI::scm_anEIWithIndexes[] = {0, 2};
const TDataIOID FORTE_SIM_8DI::scm_anEIWith[] = {0, 255, 0, 255};
const CStringDictionary::TStringId FORTE_SIM_8DI::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_SIM_8DI::scm_anEOWith[] = {1, 0, 2, 255, 2, 1, 0, 255};
const TForteInt16 FORTE_SIM_8DI::scm_anEOWithIndexes[] = {0, 4, -1};
const CStringDictionary::TStringId FORTE_SIM_8DI::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdEvent};

const SFBInterfaceSpec FORTE_SIM_8DI::scm_stFBInterfaceSpec = {
  2,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  2,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  1,  scm_anDataInputNames, scm_anDataInputTypeIds,
  3,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


const SCFB_FBInstanceData FORTE_SIM_8DI::scm_astInternalFBs[] = {
  {g_nStringIdBOOL2BOOL, g_nStringIdBOOL2BOOL},
  {g_nStringIdrev_not_transit, g_nStringIdF_AND},
  {g_nStringIdrov_not_transit, g_nStringIdBOOL2BOOL},
  {g_nStringIdV01, g_nStringIdSUBSCRIBE_2},
  {g_nStringIdrov_not_open, g_nStringIdBOOL2BOOL},
  {g_nStringIdV01_2, g_nStringIdBOOL2BOOL},
  {g_nStringIdNot_In_Transit, g_nStringIdPUBLISH_1},
  {g_nStringIdF_AND, g_nStringIdF_AND},
  {g_nStringIdF_NOT, g_nStringIdF_NOT},
  {g_nStringIdV01_1, g_nStringIdBOOL2BOOL},
  {g_nStringIdRov_not_open, g_nStringIdPUBLISH_1},
  {g_nStringIdBOOL2BOOL_1, g_nStringIdBOOL2BOOL},
  {g_nStringIdrov_not_closed, g_nStringIdBOOL2BOOL},
  {g_nStringIdF_NOT_1, g_nStringIdF_NOT},
  {g_nStringIdF_AND_1, g_nStringIdF_AND},
  {g_nStringIdRov_not_closed, g_nStringIdPUBLISH_1},
  {g_nStringIdWSTRING2WSTRING_1, g_nStringIdWSTRING2WSTRING},
  {g_nStringIdWSTRING2WSTRING, g_nStringIdWSTRING2WSTRING},
  {g_nStringIdF_INSERT, g_nStringIdF_INSERT},
  {g_nStringIdWSTRING2WSTRING_2, g_nStringIdWSTRING2WSTRING},
};

const SCFB_FBParameter FORTE_SIM_8DI::scm_astParamters[] = {
  {3, g_nStringIdQI, "1"},
  {6, g_nStringIdQI, "1"},
  {10, g_nStringIdQI, "1"},
  {15, g_nStringIdQI, "1"},
  {17, g_nStringIdIN, "opc_ua[/Objects/Valves/]"},
  {18, g_nStringIdP, "INT#23"},
};

const SCFB_FBConnectionData FORTE_SIM_8DI::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_AND, g_nStringIdCNF), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdrov_not_open, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdV01_1, g_nStringIdCNF), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT_1, g_nStringIdREQ), 13},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_1, g_nStringIdCNF), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_AND_1, g_nStringIdREQ), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_AND_1, g_nStringIdCNF), 14, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdrov_not_closed, g_nStringIdREQ), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdrov_not_closed, g_nStringIdCNF), 12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRov_not_closed, g_nStringIdREQ), 15},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdV01, g_nStringIdINITO), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdNot_In_Transit, g_nStringIdINIT), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT_1, g_nStringIdCNF), 13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_1, g_nStringIdREQ), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdrev_not_transit, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdrov_not_transit, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT, g_nStringIdCNF), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdrov_not_transit, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdNot_In_Transit, g_nStringIdREQ), 6},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_AND, g_nStringIdREQ), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdV01, g_nStringIdIND), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdV01_2, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdrov_not_open, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRov_not_open, g_nStringIdREQ), 10},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdNot_In_Transit, g_nStringIdINITO), 6, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRov_not_open, g_nStringIdINITO), 10, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRov_not_closed, g_nStringIdINITO), 15, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdNot_In_Transit, g_nStringIdCNF), 6, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdEvent), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRov_not_open, g_nStringIdCNF), 10, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdEvent), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRov_not_closed, g_nStringIdCNF), 15, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdEvent), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_1, g_nStringIdCNF), 16, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_INSERT, g_nStringIdREQ), 18},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING, g_nStringIdCNF), 17, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_INSERT, g_nStringIdREQ), 18},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING, g_nStringIdREQ), 17},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_INSERT, g_nStringIdCNF), 18, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_2, g_nStringIdREQ), 19},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_2, g_nStringIdCNF), 19, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdV01, g_nStringIdRSP), 3},
};

const SCFB_FBFannedOutConnectionData FORTE_SIM_8DI::scm_astFannedOutEventConnections[] = {
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT, g_nStringIdREQ), 8},
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdrev_not_transit, g_nStringIdREQ), 1},
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRov_not_open, g_nStringIdINIT), 10},
  {5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRov_not_closed, g_nStringIdINIT), 15},
  {11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdV01_1, g_nStringIdREQ), 9},
  {21, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_1, g_nStringIdREQ), 16},
  {23, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdV01, g_nStringIdINIT), 3},
};

const SCFB_FBConnectionData FORTE_SIM_8DI::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT_1, g_nStringIdOUT), 13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_1, g_nStringIdIN), 11},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdrov_not_open, g_nStringIdOUT), 4, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdOpen), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdV01, g_nStringIdRD_1), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdV01_1, g_nStringIdIN), 9},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdV01_1, g_nStringIdOUT), 9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdrev_not_transit, g_nStringIdIN1), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_AND, g_nStringIdOUT), 7, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdrov_not_open, g_nStringIdIN), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdV01, g_nStringIdRD_2), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdV01_2, g_nStringIdIN), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdV01_2, g_nStringIdOUT), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_AND_1, g_nStringIdIN2), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT, g_nStringIdOUT), 8, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdIN), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdOUT), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_AND, g_nStringIdIN1), 7},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdrov_not_transit, g_nStringIdOUT), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdIn_Transit), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdrov_not_closed, g_nStringIdOUT), 12, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdClosed), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_AND_1, g_nStringIdOUT), 14, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdrov_not_closed, g_nStringIdIN), 12},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL_1, g_nStringIdOUT), 11, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_AND_1, g_nStringIdIN1), 14},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdrev_not_transit, g_nStringIdOUT), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdrov_not_transit, g_nStringIdIN), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING, g_nStringIdOUT), 17, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_INSERT, g_nStringIdIN1), 18},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_1, g_nStringIdOUT), 16, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_INSERT, g_nStringIdIN2), 18},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdID), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_1, g_nStringIdIN), 16},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_INSERT, g_nStringIdOUT), 18, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRov_not_closed, g_nStringIdID), 15},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_2, g_nStringIdOUT), 19, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdV01, g_nStringIdID), 3},
};

const SCFB_FBFannedOutConnectionData FORTE_SIM_8DI::scm_astFannedOutDataConnections[] = {
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRov_not_open, g_nStringIdSD_1), 10},
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT_1, g_nStringIdIN), 13},
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_AND, g_nStringIdIN2), 7},
  {6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_NOT, g_nStringIdIN), 8},
  {6, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdrev_not_transit, g_nStringIdIN2), 1},
  {9, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdNot_In_Transit, g_nStringIdSD_1), 6},
  {10, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRov_not_closed, g_nStringIdSD_1), 15},
  {17, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdRov_not_open, g_nStringIdID), 10},
  {17, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdNot_In_Transit, g_nStringIdID), 6},
  {17, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_2, g_nStringIdIN), 19},
};

const SCFB_FBNData FORTE_SIM_8DI::scm_stFBNData = {
  20, scm_astInternalFBs,
  24, scm_astEventConnections,
  7, scm_astFannedOutEventConnections,
  19, scm_astDataConnections,
  10, scm_astFannedOutDataConnections,
  6, scm_astParamters
};


