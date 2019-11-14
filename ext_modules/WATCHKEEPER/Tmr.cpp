/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: TMR
 *** Description: Template for a Simple Function Block Type
 *** Version: 
 ***     1.0: 2019-11-10/thomasolsen - null - 
 *************************************************************************/

#include "TMR.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "TMR_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_TMR, g_nStringIdTMR)

const CStringDictionary::TStringId FORTE_TMR::scm_anDataInputNames[] = {g_nStringIdIN};

const CStringDictionary::TStringId FORTE_TMR::scm_anDataInputTypeIds[] = {g_nStringIdDINT};

const CStringDictionary::TStringId FORTE_TMR::scm_anDataOutputNames[] = {g_nStringIdOUT};

const CStringDictionary::TStringId FORTE_TMR::scm_anDataOutputTypeIds[] = {g_nStringIdTIME};

const TForteInt16 FORTE_TMR::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_TMR::scm_anEIWith[] = {0, 255};
const CStringDictionary::TStringId FORTE_TMR::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_TMR::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_TMR::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_TMR::scm_anEventOutputNames[] = {g_nStringIdCNF};

const SFBInterfaceSpec FORTE_TMR::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  1,  scm_anDataInputNames, scm_anDataInputTypeIds,
  1,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};

void FORTE_TMR::alg_REQ(void){
CIEC_WSTRING timeStr;
CIEC_TIME tmr;
CIEC_WSTRING start;
CIEC_WSTRING end;


start = "T#";
end = "ms";

timeStr = DINT_TO_WSTRING((IN()));

timeStr = CONCAT((start), (timeStr), (end));

OUT() = WSTRING_TO_TIME((timeStr));

}



