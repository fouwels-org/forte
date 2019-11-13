/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: Filter
 *** Description: Template for a simple Basic Function Block Type
 *** Version: 
 ***     1.0: 2019-11-13/thomasolsen - null - null
 *************************************************************************/

#include "Filter.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Filter_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_Filter, g_nStringIdFilter)

const CStringDictionary::TStringId FORTE_Filter::scm_anDataInputNames[] = {g_nStringIdIN};

const CStringDictionary::TStringId FORTE_Filter::scm_anDataInputTypeIds[] = {g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_Filter::scm_anDataOutputNames[] = {g_nStringIdOUT};

const CStringDictionary::TStringId FORTE_Filter::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TForteInt16 FORTE_Filter::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_Filter::scm_anEIWith[] = {0, 255};
const CStringDictionary::TStringId FORTE_Filter::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_Filter::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_Filter::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_Filter::scm_anEventOutputNames[] = {g_nStringIdCNF};

const CStringDictionary::TStringId FORTE_Filter::scm_anInternalsNames[] = {g_nStringIdPREV};

const CStringDictionary::TStringId FORTE_Filter::scm_anInternalsTypeIds[] = {g_nStringIdBOOL};

const SFBInterfaceSpec FORTE_Filter::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  1,  scm_anDataInputNames, scm_anDataInputTypeIds,
  1,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


const SInternalVarsInformation FORTE_Filter::scm_stInternalVars = {1, scm_anInternalsNames, scm_anInternalsTypeIds};


void FORTE_Filter::setInitialValues(){
  PREV() = false;
}

void FORTE_Filter::alg_initialize(void){
PREV() = false;
QO = false;
}

void FORTE_Filter::alg_deInitialize(void){

QO = false;
}

void FORTE_Filter::alg_normalOperation(void){
if((IN() == PREV())){
	/*  OUTPUT HAS NOT CHANGED - DO NOTHING*/
}
else{
	/*   only perform normal operation of QI is true*/
	OUT() = IN();
};
PREV() = IN();
}


void FORTE_Filter::enterStateSTART(void){
  m_nECCState = scm_nStateSTART;
}

void FORTE_Filter::enterStateNormalOp(void){
  m_nECCState = scm_nStateNormalOp;
  alg_normalOperation();
  sendOutputEvent( scm_nEventCNFID);
}

void FORTE_Filter::executeEvent(int pa_nEIID){
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
        if((1))
          enterStateSTART();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      default:
      DEVLOG_ERROR("The state is not in the valid range! The state value is: %d. The max value can be: 1.", m_nECCState.operator TForteUInt16 ());
        m_nECCState = 0; //0 is always the initial state
        break;
    }
    pa_nEIID = cg_nInvalidEventID;  // we have to clear the event after the first check in order to ensure correct behavior
  }while(bTransitionCleared);
}


