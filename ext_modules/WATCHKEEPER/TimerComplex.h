/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: TimerComplex
 *** Description: Template for a simple Basic Function Block Type
 *** Version: 
 ***     1.0: 2019-11-11/thomasolsen - null - 
 *************************************************************************/

#ifndef _TIMERCOMPLEX_H_
#define _TIMERCOMPLEX_H_

#include <basicfb.h>
#include <forte_bool.h>
#include <forte_time.h>
#include <forte_int.h>
#include "ARTimeOut.h"

class FORTE_TimerComplex: public CBasicFB{
  DECLARE_FIRMWARE_FB(FORTE_TimerComplex)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_BOOL &P_in() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  };

  CIEC_INT &secs() {
    return *static_cast<CIEC_INT*>(getDI(1));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_BOOL &P_out() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  };

  CIEC_TIME &TimOP() {
    return *static_cast<CIEC_TIME*>(getDO(1));
  };

  static const TEventID scm_nEventREQID = 0;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventCNFID = 0;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const CStringDictionary::TStringId scm_anInternalsNames[];
  static const CStringDictionary::TStringId scm_anInternalsTypeIds[];
  CIEC_BOOL &In_Progress() {
    return *static_cast<CIEC_BOOL*>(getVarInternal(0));
  };

  static const SAdapterInstanceDef scm_astAdapterInstances[];

  FORTE_ARTimeOut& delay_tmr() {
    return (*static_cast<FORTE_ARTimeOut*>(m_apoAdapters[0]));
  };
  static const int scm_ndelay_tmrAdpNum = 0;
  static const SFBInterfaceSpec scm_stFBInterfaceSpec;


  static const SInternalVarsInformation scm_stInternalVars;

   FORTE_BASIC_FB_DATA_ARRAY(1, 2, 2, 1, 1);

virtual void setInitialValues();
  void alg_initialize(void);
  void alg_outputAfterDelay(void);
  static const TForteInt16 scm_nStateSTART = 0;
  static const TForteInt16 scm_nStateStart = 1;
  static const TForteInt16 scm_nStateDelayComplete = 2;
  static const TForteInt16 scm_nStateSet_output = 3;

  void enterStateSTART(void);
  void enterStateStart(void);
  void enterStateDelayComplete(void);
  void enterStateSet_output(void);

  virtual void executeEvent(int pa_nEIID);

public:
  FORTE_TimerComplex(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) : 
       CBasicFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId,
           &scm_stInternalVars, m_anFBConnData, m_anFBVarsData){
  };

  virtual ~FORTE_TimerComplex(){};

};

#endif //close the ifdef sequence from the beginning of the file

