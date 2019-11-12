/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: ESalmcntComplex
 *** Description: Template for an empty basic function block
 *** Version: 
 ***     1.0: 2019-08-01/az - null - 
 *************************************************************************/

#include "ESalmcntComplex.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ESalmcntComplex_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_ESalmcntComplex, g_nStringIdESalmcntComplex)

const CStringDictionary::TStringId FORTE_ESalmcntComplex::scm_anDataInputNames[] = {g_nStringIdAlmIP1, g_nStringIdAlmIP2, g_nStringIdAlmIP3, g_nStringIdAlmIP4, g_nStringIdAlmIP5, g_nStringIdAlmIP6, g_nStringIdAlmIP7, g_nStringIdAlmIP8, g_nStringIdNumAlms};

const CStringDictionary::TStringId FORTE_ESalmcntComplex::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdINT};

const CStringDictionary::TStringId FORTE_ESalmcntComplex::scm_anDataOutputNames[] = {g_nStringIdAlmOP};

const CStringDictionary::TStringId FORTE_ESalmcntComplex::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TForteInt16 FORTE_ESalmcntComplex::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_ESalmcntComplex::scm_anEIWith[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 255};
const CStringDictionary::TStringId FORTE_ESalmcntComplex::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_ESalmcntComplex::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_ESalmcntComplex::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_ESalmcntComplex::scm_anEventOutputNames[] = {g_nStringIdEO};

const CStringDictionary::TStringId FORTE_ESalmcntComplex::scm_anInternalsNames[] = {g_nStringIdAlmCount};

const CStringDictionary::TStringId FORTE_ESalmcntComplex::scm_anInternalsTypeIds[] = {g_nStringIdINT};

const SAdapterInstanceDef FORTE_ESalmcntComplex::scm_astAdapterInstances[] = {
{g_nStringIdARTimeOut, g_nStringIdAlmTimer, true }};

const SFBInterfaceSpec FORTE_ESalmcntComplex::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  9,  scm_anDataInputNames, scm_anDataInputTypeIds,
  1,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  1,scm_astAdapterInstances};


const SInternalVarsInformation FORTE_ESalmcntComplex::scm_stInternalVars = {1, scm_anInternalsNames, scm_anInternalsTypeIds};

void FORTE_ESalmcntComplex::alg_checkAlarms(void){
if((AlmIP1() == true)){
	AlmCount() = AlmCount()+1;	/*  If input is TRUE, add 1 to counter */
};

if((AlmIP2() == true)){
	AlmCount() = AlmCount()+1;	/*  If input is TRUE, add 1 to counter */
};

if((AlmIP3() == true)){
	AlmCount() = AlmCount()+1;	/*  If input is TRUE, add 1 to counter */
};

if((AlmIP4() == true)){
	AlmCount() = AlmCount()+1;	/*  If input is TRUE, add 1 to counter */
};

if((AlmIP5() == true)){
	AlmCount() = AlmCount()+1;	/*  If input is TRUE, add 1 to counter */
};

if((AlmIP6() == true)){
	AlmCount() = AlmCount()+1;	/*  If input is TRUE, add 1 to counter */
};

if((AlmIP7() == true)){
	AlmCount() = AlmCount()+1;	/*  If input is TRUE, add 1 to counter */
};

if((AlmIP8() == true)){
	AlmCount() = AlmCount()+1;	/*  If input is TRUE, add 1 to counter */
};

}

void FORTE_ESalmcntComplex::alg_setTimer(void){
AlmTimer().DT() = CIEC_TIME("T#5ms");

}

void FORTE_ESalmcntComplex::alg_alarmOn(void){

}

void FORTE_ESalmcntComplex::alg_alarmOff(void){

}


void FORTE_ESalmcntComplex::enterStateSTART(void){
  m_nECCState = scm_nStateSTART;
}

void FORTE_ESalmcntComplex::enterStateState(void){
  m_nECCState = scm_nStateState;
  alg_checkAlarms();
}

void FORTE_ESalmcntComplex::enterStatetimeOut(void){
  m_nECCState = scm_nStatetimeOut;
  alg_alarmOn();
  sendOutputEvent( scm_nEventEOID);
}

void FORTE_ESalmcntComplex::enterStateState_1(void){
  m_nECCState = scm_nStateState_1;
  sendAdapterEvent(scm_nAlmTimerAdpNum, FORTE_ARTimeOut::scm_nEventSTOPID);
}

void FORTE_ESalmcntComplex::enterStatealarm(void){
  m_nECCState = scm_nStatealarm;
}

void FORTE_ESalmcntComplex::enterStatestartTimer(void){
  m_nECCState = scm_nStatestartTimer;
  alg_alarmOff();
  sendAdapterEvent(scm_nAlmTimerAdpNum, FORTE_ARTimeOut::scm_nEventSTARTID);
}

void FORTE_ESalmcntComplex::enterStatecheckOn(void){
  m_nECCState = scm_nStatecheckOn;
  alg_checkAlarms();
}

void FORTE_ESalmcntComplex::enterStatealarmOff(void){
  m_nECCState = scm_nStatealarmOff;
  alg_alarmOff();
  sendOutputEvent( scm_nEventEOID);
}

void FORTE_ESalmcntComplex::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do{
    bTransitionCleared = true;
    switch(m_nECCState){
      case scm_nStateSTART:
        if(scm_nEventREQID == pa_nEIID)
          enterStateState();
        else
        if(AlmTimer().TimeOut() == pa_nEIID)
          enterStatetimeOut();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState:
        if((AlmCount() >= NumAlms()))
          enterStatestartTimer();
        else
        if((1))
          enterStateState_1();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStatetimeOut:
        if((1))
          enterStatealarm();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_1:
        if((1))
          enterStateSTART();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStatealarm:
        if(scm_nEventREQID == pa_nEIID)
          enterStatecheckOn();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStatestartTimer:
        if((1))
          enterStateSTART();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStatecheckOn:
        if((AlmCount() >= NumAlms()))
          enterStatealarm();
        else
        if((1))
          enterStatealarmOff();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStatealarmOff:
        if((1))
          enterStateSTART();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      default:
      DEVLOG_ERROR("The state is not in the valid range! The state value is: %d. The max value can be: 7.", m_nECCState.operator TForteUInt16 ());
        m_nECCState = 0; //0 is always the initial state
        break;
    }
    pa_nEIID = cg_nInvalidEventID;  // we have to clear the event after the first check in order to ensure correct behavior
  }while(bTransitionCleared);
}


