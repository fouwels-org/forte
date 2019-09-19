/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: Output
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-08-02/thomasolsen - null - null
 *************************************************************************/

#include "Output.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Output_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_Output, g_nStringIdOutput)

const CStringDictionary::TStringId FORTE_Output::scm_anDataInputNames[] = {g_nStringIdValue, g_nStringIdName};

const CStringDictionary::TStringId FORTE_Output::scm_anDataInputTypeIds[] = {g_nStringIdINT, g_nStringIdWSTRING};

const TForteInt16 FORTE_Output::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_Output::scm_anEIWith[] = {0, 1, 255};
const CStringDictionary::TStringId FORTE_Output::scm_anEventInputNames[] = {g_nStringIdREQ};

const TForteInt16 FORTE_Output::scm_anEOWithIndexes[] = {-1};
const SFBInterfaceSpec FORTE_Output::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  0,  0,   0, 0,  2,  scm_anDataInputNames, scm_anDataInputTypeIds,
  0,  0, 0,
  0, 0
};


const SCFB_FBInstanceData FORTE_Output::scm_astInternalFBs[] = {
  {g_nStringIdWSTRING2WSTRING, g_nStringIdWSTRING2WSTRING},
  {g_nStringIdOUT, g_nStringIdINT2INT},
  {g_nStringIdF_INSERT, g_nStringIdF_INSERT},
  {g_nStringIdWSTRING2WSTRING_1, g_nStringIdWSTRING2WSTRING},
  {g_nStringIdPUBLISH_1, g_nStringIdPUBLISH_1},
};

const SCFB_FBParameter FORTE_Output::scm_astParamters[] = {
  {0, g_nStringIdIN, "opc_ua[/Objects/Outputs/]"},
  {2, g_nStringIdP, "INT#23"},
  {4, g_nStringIdQI, "1"},
};

const SCFB_FBConnectionData FORTE_Output::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_1, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdOUT, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_INSERT, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_INSERT, g_nStringIdREQ), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING, g_nStringIdREQ), 0},
};

const SCFB_FBFannedOutConnectionData FORTE_Output::scm_astFannedOutEventConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_INSERT, g_nStringIdREQ), 2},
  {1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdINIT), 4},
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_1, g_nStringIdREQ), 3},
};

const SCFB_FBConnectionData FORTE_Output::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdOUT, g_nStringIdOUT), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdSD_1), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING, g_nStringIdOUT), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_INSERT, g_nStringIdIN1), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_1, g_nStringIdOUT), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_INSERT, g_nStringIdIN2), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_INSERT, g_nStringIdOUT), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_1, g_nStringIdID), 4},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdName), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdWSTRING2WSTRING_1, g_nStringIdIN), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdValue), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdOUT, g_nStringIdIN), 1},
};

const SCFB_FBNData FORTE_Output::scm_stFBNData = {
  5, scm_astInternalFBs,
  4, scm_astEventConnections,
  3, scm_astFannedOutEventConnections,
  6, scm_astDataConnections,
  0, 0,
  3, scm_astParamters
};


