/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: A_OUT_4
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-08-02/thomasolsen - null - null
 *************************************************************************/

#include "A_OUT_4.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "A_OUT_4_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_A_OUT_4, g_nStringIdA_OUT_4)

const CStringDictionary::TStringId FORTE_A_OUT_4::scm_anDataInputNames[] = {g_nStringIdOUT1, g_nStringIdOUT2, g_nStringIdOUT3, g_nStringIdOUT4, g_nStringIdID};

const CStringDictionary::TStringId FORTE_A_OUT_4::scm_anDataInputTypeIds[] = {g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdWSTRING};

const TForteInt16 FORTE_A_OUT_4::scm_anEIWithIndexes[] = {0, 5};
const TDataIOID FORTE_A_OUT_4::scm_anEIWith[] = {0, 1, 2, 3, 255, 0, 1, 2, 3, 255};
const CStringDictionary::TStringId FORTE_A_OUT_4::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TForteInt16 FORTE_A_OUT_4::scm_anEOWithIndexes[] = {-1, -1, -1};
const CStringDictionary::TStringId FORTE_A_OUT_4::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF};

const SFBInterfaceSpec FORTE_A_OUT_4::scm_stFBInterfaceSpec = {
  2,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  2,  scm_anEventOutputNames,  0, 0,  5,  scm_anDataInputNames, scm_anDataInputTypeIds,
  0,  0, 0,
  0, 0
};


const SCFB_FBInstanceData FORTE_A_OUT_4::scm_astInternalFBs[] = {
  {g_nStringIdPUBLISH_4, g_nStringIdPUBLISH_4},
  {g_nStringIdOUT1, g_nStringIdINT2INT},
  {g_nStringIdOUT2, g_nStringIdINT2INT},
  {g_nStringIdOUT3, g_nStringIdINT2INT},
  {g_nStringIdOUT4, g_nStringIdINT2INT},
};

const SCFB_FBConnectionData FORTE_A_OUT_4::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_4, g_nStringIdINITO), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_4, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCNF), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_4, g_nStringIdINIT), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdREQ), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdOUT1, g_nStringIdREQ), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdOUT1, g_nStringIdCNF), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_4, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdOUT2, g_nStringIdCNF), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_4, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdOUT3, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_4, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdOUT4, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_4, g_nStringIdREQ), 0},
};

const SCFB_FBFannedOutConnectionData FORTE_A_OUT_4::scm_astFannedOutEventConnections[] = {
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdOUT2, g_nStringIdREQ), 2},
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdOUT3, g_nStringIdREQ), 3},
  {3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdOUT4, g_nStringIdREQ), 4},
};

const SCFB_FBConnectionData FORTE_A_OUT_4::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdID), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_4, g_nStringIdID), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdOUT1, g_nStringIdOUT), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_4, g_nStringIdSD_1), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdOUT1), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdOUT1, g_nStringIdIN), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdOUT2, g_nStringIdOUT), 2, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_4, g_nStringIdSD_2), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdOUT2), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdOUT2, g_nStringIdIN), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdOUT3), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdOUT3, g_nStringIdIN), 3},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdOUT4), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdOUT4, g_nStringIdIN), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdOUT3, g_nStringIdOUT), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_4, g_nStringIdSD_3), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdOUT4, g_nStringIdOUT), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdPUBLISH_4, g_nStringIdSD_4), 0},
};

const SCFB_FBNData FORTE_A_OUT_4::scm_stFBNData = {
  5, scm_astInternalFBs,
  8, scm_astEventConnections,
  3, scm_astFannedOutEventConnections,
  9, scm_astDataConnections,
  0, 0,
  0, 0
};


