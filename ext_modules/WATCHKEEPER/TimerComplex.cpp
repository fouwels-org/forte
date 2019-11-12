/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: TimerComplex
 *** Description: Template for a simple Basic Function Block Type
 *** Version: 
 ***     1.0: 2019-11-11/thomasolsen - null - 
 *************************************************************************/

#include "TimerComplex.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "TimerComplex_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_TimerComplex, g_nStringIdTimerComplex)

const CStringDictionary::TStringId FORTE_TimerComplex::scm_anDataInputNames[] = {g_nStringIdP_in, g_nStringIdsecs};

const CStringDictionary::TStringId FORTE_TimerComplex::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdINT};

const CStringDictionary::TStringId FORTE_TimerComplex::scm_anDataOutputNames[] = {g_nStringIdP_out, g_nStringIdTimOP};

const CStringDictionary::TStringId FORTE_TimerComplex::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdTIME};

const TForteInt16 FORTE_TimerComplex::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_TimerComplex::scm_anEIWith[] = {0, 1, 255};
const CStringDictionary::TStringId FORTE_TimerComplex::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_TimerComplex::scm_anEOWith[] = {0, 1, 255};
const TForteInt16 FORTE_TimerComplex::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_TimerComplex::scm_anEventOutputNames[] = {g_nStringIdCNF};

const CStringDictionary::TStringId FORTE_TimerComplex::scm_anInternalsNames[] = {g_nStringIdIn_Progress};

const CStringDictionary::TStringId FORTE_TimerComplex::scm_anInternalsTypeIds[] = {g_nStringIdBOOL};

const SAdapterInstanceDef FORTE_TimerComplex::scm_astAdapterInstances[] = {
{g_nStringIdARTimeOut, g_nStringIddelay_tmr, true }};

const SFBInterfaceSpec FORTE_TimerComplex::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  2,  scm_anDataInputNames, scm_anDataInputTypeIds,
  2,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  1,scm_astAdapterInstances};


const SInternalVarsInformation FORTE_TimerComplex::scm_stInternalVars = {1, scm_anInternalsNames, scm_anInternalsTypeIds};


void FORTE_TimerComplex::setInitialValues(){
  In_Progress() = false;
}

void FORTE_TimerComplex::alg_initialize(void){
if((!In_Progress())){
	if((P_in())){
		delay_tmr().DT() = CIEC_TIME("T#7000ms");
		In_Progress() = true;
		P_out() = true;
	}
else{
		P_out() = false;		
	};
}
else{
	TimOP() = delay_tmr();
};


}

void FORTE_TimerComplex::alg_outputAfterDelay(void){
P_out() = false;
In_Progress() = false;
/*  RESET THE TIME*/
delay_tmr().DT() = CIEC_TIME("T#5000ms");

}


void FORTE_TimerComplex::enterStateSTART(void){
  m_nECCState = scm_nStateSTART;
}

void FORTE_TimerComplex::enterStateStart(void){
  m_nECCState = scm_nStateStart;
  alg_initialize();
  sendAdapterEvent(scm_ndelay_tmrAdpNum, FORTE_ARTimeOut::scm_nEventSTARTID);
}

void FORTE_TimerComplex::enterStateDelayComplete(void){
  m_nECCState = scm_nStateDelayComplete;
  sendAdapterEvent(scm_ndelay_tmrAdpNum, FORTE_ARTimeOut::scm_nEventSTOPID);
}

void FORTE_TimerComplex::enterStateSet_output(void){
  m_nECCState = scm_nStateSet_output;
  alg_outputAfterDelay();
  sendOutputEvent( scm_nEventCNFID);
}

void FORTE_TimerComplex::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do{
    bTransitionCleared = true;
    switch(m_nECCState){
      case scm_nStateSTART:
        if(scm_nEventREQID == pa_nEIID)
          enterStateStart();
        else
        if(delay_tmr().TimeOut() == pa_nEIID)
          enterStateDelayComplete();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateStart:
        if((1))
          enterStateSTART();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateDelayComplete:
        if((1))
          enterStateSet_output();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateSet_output:
        if((1))
          enterStateSTART();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      default:
      DEVLOG_ERROR("The state is not in the valid range! The state value is: %d. The max value can be: 3.", m_nECCState.operator TForteUInt16 ());
        m_nECCState = 0; //0 is always the initial state
        break;
    }
    pa_nEIID = cg_nInvalidEventID;  // we have to clear the event after the first check in order to ensure correct behavior
  }while(bTransitionCleared);
}


