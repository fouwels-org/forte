/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: Vin_Bool1
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-11-05/thomasolsen - null - 
 *************************************************************************/

#include "Vin_Bool1.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Vin_Bool1_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_Vin_Bool1, g_nStringIdVin_Bool1)

const CStringDictionary::TStringId FORTE_Vin_Bool1::scm_anDataInputNames[] = {g_nStringIdName1};

const CStringDictionary::TStringId FORTE_Vin_Bool1::scm_anDataInputTypeIds[] = {g_nStringIdWSTRING};

const CStringDictionary::TStringId FORTE_Vin_Bool1::scm_anDataOutputNames[] = {g_nStringIdIn};

const CStringDictionary::TStringId FORTE_Vin_Bool1::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TForteInt16 FORTE_Vin_Bool1::scm_anEIWithIndexes[] = {0, 2};
const TDataIOID FORTE_Vin_Bool1::scm_anEIWith[] = {0, 255, 0, 255};
const CStringDictionary::TStringId FORTE_Vin_Bool1::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TDataIOID FORTE_Vin_Bool1::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_Vin_Bool1::scm_anEOWithIndexes[] = {-1, 0};
const CStringDictionary::TStringId FORTE_Vin_Bool1::scm_anEventOutputNames[] = {g_nStringIdCNF};

const SFBInterfaceSpec FORTE_Vin_Bool1::scm_stFBInterfaceSpec = {
  2,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  1,  scm_anDataInputNames, scm_anDataInputTypeIds,
  1,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


const SCFB_FBInstanceData FORTE_Vin_Bool1::scm_astInternalFBs[] = {
  {g_nStringIdBOOL2BOOL, g_nStringIdBOOL2BOOL},
  {g_nStringIdCLIENT_0_1, g_nStringIdCLIENT_0_1},
  {g_nStringIdVar_Path_OPC_READ, g_nStringIdVar_Path_OPC_READ},
};

const SCFB_FBParameter FORTE_Vin_Bool1::scm_astParamters[] = {
  {1, g_nStringIdQI, "TRUE"},
  {2, g_nStringIddns, "opcserver"},
};

const SCFB_FBConnectionData FORTE_Vin_Bool1::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_0_1, g_nStringIdINIT), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_0_1, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_0_1, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
};

const SCFB_FBConnectionData FORTE_Vin_Bool1::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ, g_nStringIdOUT), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_0_1, g_nStringIdID), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_0_1, g_nStringIdRD_1), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdIN), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdName1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdVar_Path_OPC_READ, g_nStringIdNodeId_1), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdOUT), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdIn), -1},
};

const SCFB_FBNData FORTE_Vin_Bool1::scm_stFBNData = {
  3, scm_astInternalFBs,
  5, scm_astEventConnections,
  0, 0,
  4, scm_astDataConnections,
  0, 0,
  2, scm_astParamters
};


