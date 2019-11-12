/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: Out_Bool1
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-11-05/thomasolsen - null - 
 *************************************************************************/

#include "Out_Bool1.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Out_Bool1_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_Out_Bool1, g_nStringIdOut_Bool1)

const CStringDictionary::TStringId FORTE_Out_Bool1::scm_anDataInputNames[] = {g_nStringIdName1, g_nStringIdOut1};

const CStringDictionary::TStringId FORTE_Out_Bool1::scm_anDataInputTypeIds[] = {g_nStringIdWSTRING, g_nStringIdBOOL};

const TForteInt16 FORTE_Out_Bool1::scm_anEIWithIndexes[] = {0, 3};
const TDataIOID FORTE_Out_Bool1::scm_anEIWith[] = {0, 1, 255, 0, 1, 255};
const CStringDictionary::TStringId FORTE_Out_Bool1::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TForteInt16 FORTE_Out_Bool1::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_Out_Bool1::scm_anEventOutputNames[] = {g_nStringIdCNF};

const SFBInterfaceSpec FORTE_Out_Bool1::scm_stFBInterfaceSpec = {
  2,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  0, 0,  2,  scm_anDataInputNames, scm_anDataInputTypeIds,
  0,  0, 0,
  0, 0
};


const SCFB_FBInstanceData FORTE_Out_Bool1::scm_astInternalFBs[] = {
  {g_nStringIdBOOL2BOOL, g_nStringIdBOOL2BOOL},
  {g_nStringIdOutput_Path_OPC_WRITE, g_nStringIdOutput_Path_OPC_WRITE},
  {g_nStringIdCLIENT_1_0, g_nStringIdCLIENT_1_0},
};

const SCFB_FBParameter FORTE_Out_Bool1::scm_astParamters[] = {
  {1, g_nStringIddns, "opcserver"},
  {2, g_nStringIdQI, "TRUE"},
};

const SCFB_FBConnectionData FORTE_Out_Bool1::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdOutput_Path_OPC_WRITE, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdOutput_Path_OPC_WRITE, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0, g_nStringIdINIT), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
};

const SCFB_FBConnectionData FORTE_Out_Bool1::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdOut1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdIN), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdName1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdOutput_Path_OPC_WRITE, g_nStringIdNodeId_1), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdBOOL2BOOL, g_nStringIdOUT), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0, g_nStringIdSD_1), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdOutput_Path_OPC_WRITE, g_nStringIdOUT), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCLIENT_1_0, g_nStringIdID), 2},
};

const SCFB_FBNData FORTE_Out_Bool1::scm_stFBNData = {
  3, scm_astInternalFBs,
  5, scm_astEventConnections,
  0, 0,
  4, scm_astDataConnections,
  0, 0,
  2, scm_astParamters
};


