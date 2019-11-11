/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: F_NOT_AND
 *** Description: Template for a Simple Function Block Type
 *** Version: 
 ***     1.0: 2019-11-08/thomasolsen - null - 
 *************************************************************************/

#include "F_NOT_AND.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "F_NOT_AND_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_F_NOT_AND, g_nStringIdF_NOT_AND)

const CStringDictionary::TStringId FORTE_F_NOT_AND::scm_anDataInputNames[] = {g_nStringIdIN, g_nStringIdNOT_IN};

const CStringDictionary::TStringId FORTE_F_NOT_AND::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_F_NOT_AND::scm_anDataOutputNames[] = {g_nStringIdOUT};

const CStringDictionary::TStringId FORTE_F_NOT_AND::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TForteInt16 FORTE_F_NOT_AND::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_F_NOT_AND::scm_anEIWith[] = {0, 1, 255};
const CStringDictionary::TStringId FORTE_F_NOT_AND::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_F_NOT_AND::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_F_NOT_AND::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_F_NOT_AND::scm_anEventOutputNames[] = {g_nStringIdCNF};

const SFBInterfaceSpec FORTE_F_NOT_AND::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  2,  scm_anDataInputNames, scm_anDataInputTypeIds,
  1,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};

void FORTE_F_NOT_AND::alg_REQ(void){
OUT() = ((!NOT_IN()))&IN();

}



