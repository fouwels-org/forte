/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: FilterBool
 *** Description: Template for a simple Basic Function Block Type
 *** Version: 
 ***     1.0: 2019-11-13/thomasolsen - null - null
 *************************************************************************/

#include "FilterBool.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FilterBool_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_FilterBool, g_nStringIdFilterBool)

const CStringDictionary::TStringId FORTE_FilterBool::scm_anDataInputNames[] = {g_nStringIdIN};

const CStringDictionary::TStringId FORTE_FilterBool::scm_anDataInputTypeIds[] = {g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_FilterBool::scm_anDataOutputNames[] = {g_nStringIdOUT, g_nStringIdOUT_1};

const CStringDictionary::TStringId FORTE_FilterBool::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_FilterBool::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_FilterBool::scm_anEIWith[] = {0, 255};
const CStringDictionary::TStringId FORTE_FilterBool::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FilterBool::scm_anEOWith[] = {0, 1, 255};
const TForteInt16 FORTE_FilterBool::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_FilterBool::scm_anEventOutputNames[] = {g_nStringIdCNF};

const CStringDictionary::TStringId FORTE_FilterBool::scm_anInternalsNames[] = {g_nStringIdPREV};

const CStringDictionary::TStringId FORTE_FilterBool::scm_anInternalsTypeIds[] = {g_nStringIdBOOL};

const SFBInterfaceSpec FORTE_FilterBool::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  1,  scm_anDataInputNames, scm_anDataInputTypeIds,
  2,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


const SInternalVarsInformation FORTE_FilterBool::scm_stInternalVars = {1, scm_anInternalsNames, scm_anInternalsTypeIds};


void FORTE_FilterBool::setInitialValues(){
  PREV() = false;
}

void FORTE_FilterBool::alg_normalOperation(void){
OUT_1() = PREV();
PREV() = IN();

}

void FORTE_FilterBool::alg_changed(void){
OUT() = IN();

}


void FORTE_FilterBool::enterStateSTART(void){
  m_nECCState = scm_nStateSTART;
}

void FORTE_FilterBool::enterStateNormalOp(void){
  m_nECCState = scm_nStateNormalOp;
  alg_normalOperation();
}

void FORTE_FilterBool::enterStateChanged(void){
  m_nECCState = scm_nStateChanged;
  alg_changed();
  sendOutputEvent( scm_nEventCNFID);
}

void FORTE_FilterBool::executeEvent(int pa_nEIID){
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
        if((IN() == OUT_1()))
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


