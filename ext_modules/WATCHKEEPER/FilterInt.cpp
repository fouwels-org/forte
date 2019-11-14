/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: FilterInt
 *** Description: Template for a simple Basic Function Block Type
 *** Version: 
 ***     1.0: 2019-11-13/thomasolsen - null - 
 *************************************************************************/

#include "FilterInt.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FilterInt_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_FilterInt, g_nStringIdFilterInt)

const CStringDictionary::TStringId FORTE_FilterInt::scm_anDataInputNames[] = {g_nStringIdIN};

const CStringDictionary::TStringId FORTE_FilterInt::scm_anDataInputTypeIds[] = {g_nStringIdINT};

const CStringDictionary::TStringId FORTE_FilterInt::scm_anDataOutputNames[] = {g_nStringIdOUT, g_nStringIdOUT_1};

const CStringDictionary::TStringId FORTE_FilterInt::scm_anDataOutputTypeIds[] = {g_nStringIdINT, g_nStringIdINT};

const TForteInt16 FORTE_FilterInt::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_FilterInt::scm_anEIWith[] = {0, 255};
const CStringDictionary::TStringId FORTE_FilterInt::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FilterInt::scm_anEOWith[] = {0, 1, 255};
const TForteInt16 FORTE_FilterInt::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_FilterInt::scm_anEventOutputNames[] = {g_nStringIdCNF};

const CStringDictionary::TStringId FORTE_FilterInt::scm_anInternalsNames[] = {g_nStringIdPREV, g_nStringIdFIRST_REQ};

const CStringDictionary::TStringId FORTE_FilterInt::scm_anInternalsTypeIds[] = {g_nStringIdINT, g_nStringIdBOOL};

const SFBInterfaceSpec FORTE_FilterInt::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  1,  scm_anDataInputNames, scm_anDataInputTypeIds,
  2,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


const SInternalVarsInformation FORTE_FilterInt::scm_stInternalVars = {2, scm_anInternalsNames, scm_anInternalsTypeIds};


void FORTE_FilterInt::setInitialValues(){
  PREV() = 0;
  FIRST_REQ() = true;
}

void FORTE_FilterInt::alg_normalOperation(void){
OUT_1() = PREV();
PREV() = IN();

}

void FORTE_FilterInt::alg_changed(void){
OUT() = IN();

}

void FORTE_FilterInt::alg_first(void){
OUT() = IN();
FIRST_REQ() = false;
}


void FORTE_FilterInt::enterStateSTART(void){
  m_nECCState = scm_nStateSTART;
}

void FORTE_FilterInt::enterStateNormalOp(void){
  m_nECCState = scm_nStateNormalOp;
  alg_normalOperation();
}

void FORTE_FilterInt::enterStateChanged(void){
  m_nECCState = scm_nStateChanged;
  alg_changed();
  sendOutputEvent( scm_nEventCNFID);
}

void FORTE_FilterInt::enterStateFIRS_REQ(void){
  m_nECCState = scm_nStateFIRS_REQ;
  alg_first();
  sendOutputEvent( scm_nEventCNFID);
}

void FORTE_FilterInt::executeEvent(int pa_nEIID){
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
        if((FIRST_REQ() == true))
          enterStateFIRS_REQ();
        else
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
      case scm_nStateFIRS_REQ:
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


