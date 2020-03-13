/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: ES1oo2
 *** Description: Template for a Simple Function Block Type
 *** Version: 
 ***     1.0: 2019-11-06/thomasolsen - null - 
 *************************************************************************/

#include "ES1oo2.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ES1oo2_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_ES1oo2, g_nStringIdES1oo2)

const CStringDictionary::TStringId FORTE_ES1oo2::scm_anDataInputNames[] = {g_nStringIdinst_1, g_nStringIdinst_2, g_nStringIddev_lim, g_nStringIddev_db};

const CStringDictionary::TStringId FORTE_ES1oo2::scm_anDataInputTypeIds[] = {g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL};

const CStringDictionary::TStringId FORTE_ES1oo2::scm_anDataOutputNames[] = {g_nStringIdtInstDev, g_nStringIdinst_ave, g_nStringIdinst_dev, g_nStringIddev_alm};

const CStringDictionary::TStringId FORTE_ES1oo2::scm_anDataOutputTypeIds[] = {g_nStringIdREAL, g_nStringIdREAL, g_nStringIdREAL, g_nStringIdBOOL};

const TForteInt16 FORTE_ES1oo2::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_ES1oo2::scm_anEIWith[] = {0, 1, 2, 3, 255};
const CStringDictionary::TStringId FORTE_ES1oo2::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_ES1oo2::scm_anEOWith[] = {0, 1, 2, 3, 255};
const TForteInt16 FORTE_ES1oo2::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_ES1oo2::scm_anEventOutputNames[] = {g_nStringIdCNF};

const SFBInterfaceSpec FORTE_ES1oo2::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  4,  scm_anDataInputNames, scm_anDataInputTypeIds,
  4,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};

void FORTE_ES1oo2::alg_REQ(void){
/*  Start of executable code ............................................................ */

CIEC_REAL int_inst_ave;
CIEC_REAL int_inst_dev;
CIEC_BOOL int_dev_alm;


/*  Calculate the average value of the instruments .................................. 1.0 */
int_inst_ave = ((((inst_1()+inst_2()))/2.0));

/*  Calculate the deviation between the instruments ................................. 2.0 */

//  ABS function implemented with an IF
if((((inst_1()-inst_2())) < 0)){
	int_inst_dev = ((inst_1()-inst_2()))*((-1));
}
else{
	int_inst_dev = ((inst_1()-inst_2()));
};

/*  Instrument deviation exceeded limit ............................................. 3.0 */
if((((int_inst_dev > dev_lim())))){
	int_dev_alm = true;
};

/*  Instrument deviation below reset limit ......................................... 4.0 */
if((((int_inst_dev < ((dev_lim()-dev_db())))))){
	
	int_dev_alm = false;

};

inst_dev() = int_inst_dev;
inst_ave() = int_inst_ave;
dev_alm() = int_dev_alm;
tInstDev() = int_inst_dev;

/*  End of executable code ............................................................. */

}



