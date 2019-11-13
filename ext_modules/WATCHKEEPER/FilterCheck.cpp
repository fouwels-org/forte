/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: FilterCheck
 *** Description: Template for a Simple Function Block Type
 *** Version: 
 ***     1.0: 2019-11-13/thomasolsen - null - null
 *************************************************************************/

#include "FilterCheck.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "FilterCheck_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_FilterCheck, g_nStringIdFilterCheck)

const CStringDictionary::TStringId FORTE_FilterCheck::scm_anDataInputNames[] = {g_nStringIdIN};

const CStringDictionary::TStringId FORTE_FilterCheck::scm_anDataInputTypeIds[] = {g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_FilterCheck::scm_anDataOutputNames[] = {g_nStringIdOUT};

const CStringDictionary::TStringId FORTE_FilterCheck::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TForteInt16 FORTE_FilterCheck::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_FilterCheck::scm_anEIWith[] = {0, 255};
const CStringDictionary::TStringId FORTE_FilterCheck::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_FilterCheck::scm_anEOWith[] = {0, 255, 0, 255};
const TForteInt16 FORTE_FilterCheck::scm_anEOWithIndexes[] = {0, 2, -1};
const CStringDictionary::TStringId FORTE_FilterCheck::scm_anEventOutputNames[] = {g_nStringIdCNF, g_nStringIdCHANGE};

const SFBInterfaceSpec FORTE_FilterCheck::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  2,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  1,  scm_anDataInputNames, scm_anDataInputTypeIds,
  1,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};

void FORTE_FilterCheck::alg_REQ(void){
CIEC_BOOL PREV;


if((IN() != PREV)){
/*   only perform normal operation of QI is true*/
	PREV = IN();
	OUT() = IN();
};

}



