/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: In_Bool1
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-11-05/thomasolsen - null - 
 *************************************************************************/

#include "In_Bool1.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "In_Bool1_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_In_Bool1, g_nStringIdIn_Bool1)

const CStringDictionary::TStringId FORTE_In_Bool1::scm_anDataInputNames[] = {g_nStringIdName1};

const CStringDictionary::TStringId FORTE_In_Bool1::scm_anDataInputTypeIds[] = {g_nStringIdWSTRING};

const CStringDictionary::TStringId FORTE_In_Bool1::scm_anDataOutputNames[] = {g_nStringIdIN1};

const CStringDictionary::TStringId FORTE_In_Bool1::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TForteInt16 FORTE_In_Bool1::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_In_Bool1::scm_anEIWith[] = {0, 255};
const CStringDictionary::TStringId FORTE_In_Bool1::scm_anEventInputNames[] = {g_nStringIdINIT};

const TDataIOID FORTE_In_Bool1::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_In_Bool1::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_In_Bool1::scm_anEventOutputNames[] = {g_nStringIdCNF};

const SFBInterfaceSpec FORTE_In_Bool1::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  1,  scm_anDataInputNames, scm_anDataInputTypeIds,
  1,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


const SCFB_FBInstanceData FORTE_In_Bool1::scm_astInternalFBs[] = {
  {g_nStringIdBOOL2BOOL, g_nStringIdBOOL2BOOL},
  {g_nStringIdInput_Path_OPC_READ, g_nStringIdInput_Path_OPC_READ},
  {g_nStringIdSUBSCRIBE_1, g_nStringIdSUBSCRIBE_1},
};

const SCFB_FBParameter FORTE_In_Bool1::scm_astParamters[] = {
  {1, g_nStringIddns, "opcserver"},
  {2, g_nStringIdQI, "TRUE"},
};

const SCFB_FBConnectionData FORTE_In_Bool1::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInput_Path_OPC_READ, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdIND), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInput_Path_OPC_READ, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdINIT), 2},
};

const SCFB_FBConnectionData FORTE_In_Bool1::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdName1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInput_Path_OPC_READ, g_nStringIdNodeId_1), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdOUT), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdIN1), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdRD_1), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdIN), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInput_Path_OPC_READ, g_nStringIdOUT), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdID), 2},
};

const SCFB_FBNData FORTE_In_Bool1::scm_stFBNData = {
  3, scm_astInternalFBs,
  4, scm_astEventConnections,
  0, 0,
  4, scm_astDataConnections,
  0, 0,
  2, scm_astParamters
};


