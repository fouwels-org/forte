/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: ES1002
 *** Description: Template for an empty basic function block
 *** Version: 
 ***     1.0: 2019-08-01/az - null - 
 *************************************************************************/

#ifndef _ES1002_H_
#define _ES1002_H_

#include <basicfb.h>
#include <forte_bool.h>
#include <forte_real.h>

class FORTE_ES1002: public CBasicFB{
  DECLARE_FIRMWARE_FB(FORTE_ES1002)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_REAL &inst_1() {
    return *static_cast<CIEC_REAL*>(getDI(0));
  };

  CIEC_REAL &inst_2() {
    return *static_cast<CIEC_REAL*>(getDI(1));
  };

  CIEC_REAL &dev_lim() {
    return *static_cast<CIEC_REAL*>(getDI(2));
  };

  CIEC_REAL &dev_db() {
    return *static_cast<CIEC_REAL*>(getDI(3));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_REAL &inst_ave() {
    return *static_cast<CIEC_REAL*>(getDO(0));
  };

  CIEC_REAL &inst_dev() {
    return *static_cast<CIEC_REAL*>(getDO(1));
  };

  CIEC_BOOL &dev_alm() {
    return *static_cast<CIEC_BOOL*>(getDO(2));
  };

  static const TEventID scm_nEventREQID = 0;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventCNFID = 0;
  static const TEventID scm_nEventAlarmChangeID = 1;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_BASIC_FB_DATA_ARRAY(2, 4, 3, 0, 0);
  void alg_calc(void);
  void alg_alarmOn(void);
  void alg_alarmOff(void);
  static const TForteInt16 scm_nStateSTART = 0;
  static const TForteInt16 scm_nStateState = 1;
  static const TForteInt16 scm_nStateturnAlarmOn = 2;
  static const TForteInt16 scm_nStateturnAlarmOff = 3;
  static const TForteInt16 scm_nStatealarm = 4;
  static const TForteInt16 scm_nStatereCheck = 5;

  void enterStateSTART(void);
  void enterStateState(void);
  void enterStateturnAlarmOn(void);
  void enterStateturnAlarmOff(void);
  void enterStatealarm(void);
  void enterStatereCheck(void);

  virtual void executeEvent(int pa_nEIID);

public:
  FORTE_ES1002(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) : 
       CBasicFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId,
              0, m_anFBConnData, m_anFBVarsData){
  };

  virtual ~FORTE_ES1002(){};

};

#endif //close the ifdef sequence from the beginning of the file

