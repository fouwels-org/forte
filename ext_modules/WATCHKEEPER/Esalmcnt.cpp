/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: Esalmcnt
 *** Description: Produces an alarm at the output after a set number of inputs are in alarm.
 *** Version: 
 ***     1.0: 2019-11-06/thomasolsen - null - 
 *************************************************************************/

#include "Esalmcnt.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Esalmcnt_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_Esalmcnt, g_nStringIdEsalmcnt)

const CStringDictionary::TStringId FORTE_Esalmcnt::scm_anDataInputNames[] = {g_nStringIdAlmIP1, g_nStringIdAlmIP3, g_nStringIdAlmIP2, g_nStringIdAlmIP4, g_nStringIdAlmIP5, g_nStringIdAlmIP6, g_nStringIdAlmIP7, g_nStringIdAlmIP8, g_nStringIdNumAlms};

const CStringDictionary::TStringId FORTE_Esalmcnt::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdINT};

const CStringDictionary::TStringId FORTE_Esalmcnt::scm_anDataOutputNames[] = {g_nStringIdAlmOP};

const CStringDictionary::TStringId FORTE_Esalmcnt::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL};

const TForteInt16 FORTE_Esalmcnt::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_Esalmcnt::scm_anEIWith[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 255};
const CStringDictionary::TStringId FORTE_Esalmcnt::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_Esalmcnt::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_Esalmcnt::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_Esalmcnt::scm_anEventOutputNames[] = {g_nStringIdCNF};

const SFBInterfaceSpec FORTE_Esalmcnt::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  9,  scm_anDataInputNames, scm_anDataInputTypeIds,
  1,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};

void FORTE_Esalmcnt::alg_REQ(void){
CIEC_BOOL FirstTime;
CIEC_BOOL AlmOP_tmp;
CIEC_INT AlmCount;


AlmCount = 0;


/*  Check which inputs are TRUE (in alarm) ..........................................1.0 */
if((AlmIP1())){
	AlmCount = AlmCount+1;	/*  If input is TRUE, add 1 to counter */
};

if((AlmIP2())){
	AlmCount = AlmCount+1;	/*  If input is TRUE, add 1 to counter */
};

if((AlmIP3())){
	AlmCount = AlmCount+1;	/*  If input is TRUE, add 1 to counter */
};

if((AlmIP4())){
	AlmCount = AlmCount+1;	/*  If input is TRUE, add 1 to counter */
};

if((AlmIP5())){
	AlmCount = AlmCount+1;	/*  If input is TRUE, add 1 to counter */
};

if((AlmIP6())){
	AlmCount = AlmCount+1;	/*  If input is TRUE, add 1 to counter */
};

if((AlmIP7())){
	AlmCount = AlmCount+1;	/*  If input is TRUE, add 1 to counter */
};

if((AlmIP8())){
	AlmCount = AlmCount+1;	/*  If input is TRUE, add 1 to counter */
};

/*  Set output depending if the number of alarms has been reached ...................2.0 */
if((AlmCount >= NumAlms())){
	AlmOP_tmp = true;
}
else{
	AlmOP_tmp = false;
};

AlmOP() = AlmOP_tmp;

}



