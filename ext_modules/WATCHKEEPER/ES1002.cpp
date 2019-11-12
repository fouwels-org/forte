/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: ES1002
 *** Description: Template for an empty basic function block
 *** Version: 
 ***     1.0: 2019-08-01/az - null - 
 *************************************************************************/

#include "ES1002.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ES1002_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_ES1002, g_nStringIdES1002)

const CStringDictionary::TStringId FORTE_ES1002::scm_anDataInputNames[] = {g_nStringIdinst_1, g_nStringIdinst_2, g_nStringIddev_lim, g_nStringIddev_db};

const CStringDictionary::TStringId FORTE_ES1002::scm_anDataInputTypeIds[] = {g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL};

const CStringDictionary::TStringId FORTE_ES1002::scm_anDataOutputNames[] = {g_nStringIdinst_ave, g_nStringIdinst_dev, g_nStringIddev_alm};

const CStringDictionary::TStringId FORTE_ES1002::scm_anDataOutputTypeIds[] = {g_nStringIdREAL, g_nStringIdREAL, g_nStringIdBOOL};

const TForteInt16 FORTE_ES1002::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_ES1002::scm_anEIWith[] = {0, 1, 2, 3, 255};
const CStringDictionary::TStringId FORTE_ES1002::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_ES1002::scm_anEOWith[] = {0, 1, 255, 2, 255};
const TForteInt16 FORTE_ES1002::scm_anEOWithIndexes[] = {0, 3, -1};
const CStringDictionary::TStringId FORTE_ES1002::scm_anEventOutputNames[] = {g_nStringIdCNF, g_nStringIdAlarmChange};

const SFBInterfaceSpec FORTE_ES1002::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  2,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  4,  scm_anDataInputNames, scm_anDataInputTypeIds,
  3,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};

void FORTE_ES1002::alg_calc(void){
/*  Calculate the average value of the instruments .................................. 1.0 */
inst_ave() = ((((inst_1()+inst_2()))/2.0));

/*  Calculate the deviation between the instruments ................................. 2.0 */
inst_dev() = ABS((inst_1()-inst_2()));
}

void FORTE_ES1002::alg_alarmOn(void){
dev_alm() = true;
}

void FORTE_ES1002::alg_alarmOff(void){
dev_alm() = false;
}


void FORTE_ES1002::enterStateSTART(void){
  m_nECCState = scm_nStateSTART;
}

void FORTE_ES1002::enterStateState(void){
  m_nECCState = scm_nStateState;
  alg_calc();
  sendOutputEvent( scm_nEventCNFID);
}

void FORTE_ES1002::enterStateturnAlarmOn(void){
  m_nECCState = scm_nStateturnAlarmOn;
  alg_alarmOn();
  sendOutputEvent( scm_nEventAlarmChangeID);
}

void FORTE_ES1002::enterStateturnAlarmOff(void){
  m_nECCState = scm_nStateturnAlarmOff;
  alg_alarmOff();
  sendOutputEvent( scm_nEventAlarmChangeID);
}

void FORTE_ES1002::enterStatealarm(void){
  m_nECCState = scm_nStatealarm;
}

void FORTE_ES1002::enterStatereCheck(void){
  m_nECCState = scm_nStatereCheck;
  alg_calc();
  sendOutputEvent( scm_nEventCNFID);
}

void FORTE_ES1002::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do{
    bTransitionCleared = true;
    switch(m_nECCState){
      case scm_nStateSTART:
        if(scm_nEventREQID == pa_nEIID)
          enterStateState();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState:
        if((inst_dev() < ((dev_lim()-dev_db()))))
          enterStateSTART();
        else
        if((inst_dev() > dev_lim()))
          enterStateturnAlarmOn();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateturnAlarmOn:
        if((1))
          enterStatealarm();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateturnAlarmOff:
        if((1))
          enterStateSTART();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStatealarm:
        if(scm_nEventREQID == pa_nEIID)
          enterStatereCheck();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStatereCheck:
        if((inst_dev() < ((dev_lim()-dev_db()))) || (inst_dev() < dev_lim()))
          enterStateturnAlarmOff();
        else
        if((1))
          enterStatealarm();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      default:
      DEVLOG_ERROR("The state is not in the valid range! The state value is: %d. The max value can be: 5.", m_nECCState.operator TForteUInt16 ());
        m_nECCState = 0; //0 is always the initial state
        break;
    }
    pa_nEIID = cg_nInvalidEventID;  // we have to clear the event after the first check in order to ensure correct behavior
  }while(bTransitionCleared);
}


