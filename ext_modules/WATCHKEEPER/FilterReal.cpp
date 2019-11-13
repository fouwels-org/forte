/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: FilterReal
 *** Description: Template for a simple Basic Function Block Type
 *** Version: 
 ***     1.0: 2019-11-13/thomasolsen - null - 
 *************************************************************************/

#include "FilterReal.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FilterReal_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_FilterReal, g_nStringIdFilterReal)

const CStringDictionary::TStringId FORTE_FilterReal::scm_anDataInputNames[] = {g_nStringIdIN};

const CStringDictionary::TStringId FORTE_FilterReal::scm_anDataInputTypeIds[] = {g_nStringIdREAL};

const CStringDictionary::TStringId FORTE_FilterReal::scm_anDataOutputNames[] = {g_nStringIdOUT, g_nStringIdOUT_1};

const CStringDictionary::TStringId FORTE_FilterReal::scm_anDataOutputTypeIds[] = {g_nStringIdREAL, g_nStringIdREAL};

const TForteInt16 FORTE_FilterReal::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_FilterReal::scm_anEIWith[] = {0, 255};
const CStringDictionary::TStringId FORTE_FilterReal::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FilterReal::scm_anEOWith[] = {0, 1, 255};
const TForteInt16 FORTE_FilterReal::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_FilterReal::scm_anEventOutputNames[] = {g_nStringIdCNF};

const CStringDictionary::TStringId FORTE_FilterReal::scm_anInternalsNames[] = {g_nStringIdPREV, g_nStringIdEPS, g_nStringIdCHANGE, g_nStringIdRES};

const CStringDictionary::TStringId FORTE_FilterReal::scm_anInternalsTypeIds[] = {g_nStringIdREAL, g_nStringIdREAL, g_nStringIdBOOL, g_nStringIdREAL};

const SFBInterfaceSpec FORTE_FilterReal::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  1,  scm_anDataInputNames, scm_anDataInputTypeIds,
  2,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


const SInternalVarsInformation FORTE_FilterReal::scm_stInternalVars = {4, scm_anInternalsNames, scm_anInternalsTypeIds};


void FORTE_FilterReal::setInitialValues(){
  PREV() = 0;
  EPS() = 0.0001;
  CHANGE() = false;
  RES() = 0;
}

void FORTE_FilterReal::alg_normalOperation(void){
RES() = PREV()-IN();

if((RES() < 0)){
	RES() = RES()*((-1));
};

if((((RES() > EPS())))){
	CHANGE() = true;
};

OUT_1() = PREV();
PREV() = IN();


}

void FORTE_FilterReal::alg_changed(void){
OUT() = IN();

}


void FORTE_FilterReal::enterStateSTART(void){
  m_nECCState = scm_nStateSTART;
}

void FORTE_FilterReal::enterStateNormalOp(void){
  m_nECCState = scm_nStateNormalOp;
  alg_normalOperation();
}

void FORTE_FilterReal::enterStateChanged(void){
  m_nECCState = scm_nStateChanged;
  alg_changed();
  sendOutputEvent( scm_nEventCNFID);
}

void FORTE_FilterReal::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do{
    bTransitionCleared = true;
    switch(m_nECCState){
      case scm_nStateSTART:
        if(scm_nEventREQID == pa_nEIID)
          enterStateNormalOp();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateNormalOp:
        if((CHANGE() == true))
          enterStateSTART();
        else
        if((1))
          enterStateChanged();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateChanged:
        if((1))
          enterStateSTART();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      default:
      DEVLOG_ERROR("The state is not in the valid range! The state value is: %d. The max value can be: 2.", m_nECCState.operator TForteUInt16 ());
        m_nECCState = 0; //0 is always the initial state
        break;
    }
    pa_nEIID = cg_nInvalidEventID;  // we have to clear the event after the first check in order to ensure correct behavior
  }while(bTransitionCleared);
}


