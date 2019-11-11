/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: valvePOS
 *** Description: Template for a Simple Function Block Type
 *** Version: 
 ***     1.0: 2019-11-09/thomasolsen - null - 
 *************************************************************************/

#include "valvePOS.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "valvePOS_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_valvePOS, g_nStringIdvalvePOS)

const CStringDictionary::TStringId FORTE_valvePOS::scm_anDataOutputNames[] = {g_nStringIdRov_Error, g_nStringIdRov_Open, g_nStringIdRov_Closed, g_nStringIdRov_Transit};

const CStringDictionary::TStringId FORTE_valvePOS::scm_anDataOutputTypeIds[] = {g_nStringIdINT, g_nStringIdINT, g_nStringIdINT, g_nStringIdINT};

const TForteInt16 FORTE_valvePOS::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_valvePOS::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_valvePOS::scm_anEOWith[] = {0, 1, 2, 3, 255};
const TForteInt16 FORTE_valvePOS::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_valvePOS::scm_anEventOutputNames[] = {g_nStringIdCNF};

const SFBInterfaceSpec FORTE_valvePOS::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  0,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  0,  0, 0, 
  4,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};

void FORTE_valvePOS::alg_REQ(void){
Rov_Error() = 0;
Rov_Open() = 1;
Rov_Closed() = 2;
Rov_Transit() = 3;

}



