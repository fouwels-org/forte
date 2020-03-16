/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: InverseCheckLogic
 *** Description: Template for a Simple Function Block Type
 *** Version: 
 ***     1.0: 2019-11-06/thomasolsen - null - 
 *************************************************************************/

#include "InverseCheckLogic.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "InverseCheckLogic_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_InverseCheckLogic, g_nStringIdInverseCheckLogic)

const CStringDictionary::TStringId FORTE_InverseCheckLogic::scm_anDataInputNames[] = {g_nStringIdIN1, g_nStringIdIN2, g_nStringIdERROR};

const CStringDictionary::TStringId FORTE_InverseCheckLogic::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL};

const CStringDictionary::TStringId FORTE_InverseCheckLogic::scm_anDataOutputNames[] = {g_nStringIdOUT};

const CStringDictionary::TStringId FORTE_InverseCheckLogic::scm_anDataOutputTypeIds[] = {g_nStringIdINT};

const TForteInt16 FORTE_InverseCheckLogic::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_InverseCheckLogic::scm_anEIWith[] = {0, 1, 2, 255};
const CStringDictionary::TStringId FORTE_InverseCheckLogic::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_InverseCheckLogic::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_InverseCheckLogic::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_InverseCheckLogic::scm_anEventOutputNames[] = {g_nStringIdCNF};

const SFBInterfaceSpec FORTE_InverseCheckLogic::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  3,  scm_anDataInputNames, scm_anDataInputTypeIds,
  1,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};

void FORTE_InverseCheckLogic::alg_REQ(void){
//  V01 States according to TS/P/INE/8

//  0 - ERROR

//  1 - SHUT

//  2 - OPEN

//  3 - TRANSIT


//  Initialise rov_pos (OUT)

OUT() = 0;

//  VALVE CHECK ( IN1 = V01_1 , IN2 = V01_2 )
if((IN1()) && (!IN2())){
	OUT() = 2;
};
	
if((!IN1()) && (IN2())){
	OUT() = 1;
};

if((IN1()) && (IN2())){
	OUT() = 3;
};

//  ERROR CHECK 
if((ERROR())){
	OUT() = 0;
};
}



