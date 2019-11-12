/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: TimerTest
 *** Description: Template for a Simple Function Block Type
 *** Version: 
 ***     1.0: 2019-11-06/thomasolsen - null - 
 *************************************************************************/

#ifndef _TIMERTEST_H_
#define _TIMERTEST_H_

#include <simplefb.h>
#include <forte_time.h>
#include "ARTimeOut.h"

class FORTE_TimerTest: public CSimpleFB{
  DECLARE_FIRMWARE_FB(FORTE_TimerTest)

private:
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_TIME &oldTime() {
    return *static_cast<CIEC_TIME*>(getDO(0));
  };

  CIEC_TIME &elapsed() {
    return *static_cast<CIEC_TIME*>(getDO(1));
  };

  static const TEventID scm_nEventREQID = 0;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventCNFID = 0;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SAdapterInstanceDef scm_astAdapterInstances[];

  FORTE_ARTimeOut& tmr_delay() {
    return (*static_cast<FORTE_ARTimeOut*>(m_apoAdapters[0]));
  };
  static const int scm_ntmr_delayAdpNum = 0;
  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(1, 0, 2, 1);
  void alg_REQ(void);

public:
  FORTE_TimerTest(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) : 
       CSimpleFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId,
              0, m_anFBConnData, m_anFBVarsData){
  };

  virtual ~FORTE_TimerTest(){};

};

#endif //close the ifdef sequence from the beginning of the file

