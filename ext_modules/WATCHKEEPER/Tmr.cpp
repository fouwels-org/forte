/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: Tmr
 *** Description: Template for a Simple Function Block Type
 *** Version: 
 ***     1.0: 2019-11-10/thomasolsen - null - null
 *************************************************************************/

#include "Tmr.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Tmr_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_Tmr, g_nStringIdTmr)

const CStringDictionary::TStringId FORTE_Tmr::scm_anDataInputNames[] = {g_nStringIdIN};

const CStringDictionary::TStringId FORTE_Tmr::scm_anDataInputTypeIds[] = {g_nStringIdINT};

const CStringDictionary::TStringId FORTE_Tmr::scm_anDataOutputNames[] = {g_nStringIdOUT};

const CStringDictionary::TStringId FORTE_Tmr::scm_anDataOutputTypeIds[] = {g_nStringIdTIME};

const TForteInt16 FORTE_Tmr::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_Tmr::scm_anEIWith[] = {0, 255};
const CStringDictionary::TStringId FORTE_Tmr::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_Tmr::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_Tmr::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_Tmr::scm_anEventOutputNames[] = {g_nStringIdCNF};

const SFBInterfaceSpec FORTE_Tmr::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  1,  scm_anDataInputNames, scm_anDataInputTypeIds,
  1,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};

void FORTE_Tmr::alg_REQ(void){
CIEC_WSTRING timeStr;
CIEC_TIME tmr;
CIEC_WSTRING start;
CIEC_WSTRING end;


start = "T#";
end = "ms";

timeStr = INT_TO_WSTRING((IN()));

timeStr = CONCAT((start), (timeStr), (end));

OUT() = WSTRING_TO_TIME((timeStr));

}



