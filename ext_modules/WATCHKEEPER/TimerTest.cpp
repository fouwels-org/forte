/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: TimerTest
 *** Description: Template for a Simple Function Block Type
 *** Version: 
 ***     1.0: 2019-11-06/thomasolsen - null - 
 *************************************************************************/

#include "TimerTest.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "TimerTest_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_TimerTest, g_nStringIdTimerTest)

const CStringDictionary::TStringId FORTE_TimerTest::scm_anDataOutputNames[] = {g_nStringIdoldTime, g_nStringIdelapsed};

const CStringDictionary::TStringId FORTE_TimerTest::scm_anDataOutputTypeIds[] = {g_nStringIdTIME, g_nStringIdTIME};

const TForteInt16 FORTE_TimerTest::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_TimerTest::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_TimerTest::scm_anEOWith[] = {0, 1, 255};
const TForteInt16 FORTE_TimerTest::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_TimerTest::scm_anEventOutputNames[] = {g_nStringIdCNF};

const SAdapterInstanceDef FORTE_TimerTest::scm_astAdapterInstances[] = {
{g_nStringIdARTimeOut, g_nStringIdtmr_delay, true }};

const SFBInterfaceSpec FORTE_TimerTest::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  0,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  0,  0, 0, 
  2,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  1,scm_astAdapterInstances};

void FORTE_TimerTest::alg_REQ(void){
CIEC_time newtime;
CIEC_time elapsedtime;
;

newtime = time();
elapsedtime = newtime-oldtime;
oldtime = newtime
}



