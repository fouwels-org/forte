/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: In_Int1
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-11-05/thomasolsen - null - 
 *************************************************************************/

#include "In_Int1.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "In_Int1_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_In_Int1, g_nStringIdIn_Int1)

const CStringDictionary::TStringId FORTE_In_Int1::scm_anDataInputNames[] = {g_nStringIdName1};

const CStringDictionary::TStringId FORTE_In_Int1::scm_anDataInputTypeIds[] = {g_nStringIdWSTRING};

const CStringDictionary::TStringId FORTE_In_Int1::scm_anDataOutputNames[] = {g_nStringIdIN1};

const CStringDictionary::TStringId FORTE_In_Int1::scm_anDataOutputTypeIds[] = {g_nStringIdINT};

const TForteInt16 FORTE_In_Int1::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_In_Int1::scm_anEIWith[] = {0, 255};
const CStringDictionary::TStringId FORTE_In_Int1::scm_anEventInputNames[] = {g_nStringIdINIT};

const TDataIOID FORTE_In_Int1::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_In_Int1::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_In_Int1::scm_anEventOutputNames[] = {g_nStringIdCNF};

const SFBInterfaceSpec FORTE_In_Int1::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  1,  scm_anDataInputNames, scm_anDataInputTypeIds,
  1,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


const SCFB_FBInstanceData FORTE_In_Int1::scm_astInternalFBs[] = {
  {g_nStringIdINT2INT, g_nStringIdINT2INT},
  {g_nStringIdSUBSCRIBE_1, g_nStringIdSUBSCRIBE_1},
  {g_nStringIdInput_Path_OPC_SUB, g_nStringIdInput_Path_OPC_SUB},
};

const SCFB_FBParameter FORTE_In_Int1::scm_astParamters[] = {
  {1, g_nStringIdQI, "TRUE"},
  {2, g_nStringIddns, "opcserver"},
};

const SCFB_FBConnectionData FORTE_In_Int1::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdIND), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInput_Path_OPC_SUB, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInput_Path_OPC_SUB, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdINIT), 1},
};

const SCFB_FBConnectionData FORTE_In_Int1::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT, g_nStringIdOUT), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdIN1), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdRD_1), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT, g_nStringIdIN), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInput_Path_OPC_SUB, g_nStringIdOUT), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdID), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdName1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdInput_Path_OPC_SUB, g_nStringIdNodeId_1), 2},
};

const SCFB_FBNData FORTE_In_Int1::scm_stFBNData = {
  3, scm_astInternalFBs,
  4, scm_astEventConnections,
  0, 0,
  4, scm_astDataConnections,
  0, 0,
  2, scm_astParamters
};


