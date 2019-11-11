/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: ES2s4sdc
 *** Description: Template for a Simple Function Block Type
 *** Version: 
 ***     1.0: 2019-11-06/thomasolsen - null - 
 *************************************************************************/

#include "ES2s4sdc.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ES2s4sdc_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_ES2s4sdc, g_nStringIdES2s4sdc)

const CStringDictionary::TStringId FORTE_ES2s4sdc::scm_anDataInputNames[] = {g_nStringIdbIN_1};

const CStringDictionary::TStringId FORTE_ES2s4sdc::scm_anDataInputTypeIds[] = {g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_ES2s4sdc::scm_anDataOutputNames[] = {g_nStringIdbOUT_1, g_nStringIdbOUT_2};

const CStringDictionary::TStringId FORTE_ES2s4sdc::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL};

const TForteInt16 FORTE_ES2s4sdc::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_ES2s4sdc::scm_anEIWith[] = {0, 255};
const CStringDictionary::TStringId FORTE_ES2s4sdc::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_ES2s4sdc::scm_anEOWith[] = {0, 1, 255};
const TForteInt16 FORTE_ES2s4sdc::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_ES2s4sdc::scm_anEventOutputNames[] = {g_nStringIdCNF};

const SFBInterfaceSpec FORTE_ES2s4sdc::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  1,  scm_anDataInputNames, scm_anDataInputTypeIds,
  2,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};

void FORTE_ES2s4sdc::alg_REQ(void){
/*  Start of executable code ........................................................................... */

/*  An input signal set ...............……………………………………………………………………………………………………………………………………………………..... 1.0 */
if((((bIN_1() == true)))){
	bOUT_1() = true;
	bOUT_2() = false;
}
else{
	bOUT_1() = false;
	bOUT_2() = true;
};

/*  End of executable code ............................................................................. */

}



