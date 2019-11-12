/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: ESalmcntComplex
 *** Description: Template for an empty basic function block
 *** Version: 
 ***     1.0: 2019-08-01/az - null - 
 *************************************************************************/

#ifndef _ESALMCNTCOMPLEX_H_
#define _ESALMCNTCOMPLEX_H_

#include <basicfb.h>
#include <forte_bool.h>
#include <forte_int.h>
#include "ARTimeOut.h"

class FORTE_ESalmcntComplex: public CBasicFB{
  DECLARE_FIRMWARE_FB(FORTE_ESalmcntComplex)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_BOOL &AlmIP1() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  };

  CIEC_BOOL &AlmIP2() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  };

  CIEC_BOOL &AlmIP3() {
    return *static_cast<CIEC_BOOL*>(getDI(2));
  };

  CIEC_BOOL &AlmIP4() {
    return *static_cast<CIEC_BOOL*>(getDI(3));
  };

  CIEC_BOOL &AlmIP5() {
    return *static_cast<CIEC_BOOL*>(getDI(4));
  };

  CIEC_BOOL &AlmIP6() {
    return *static_cast<CIEC_BOOL*>(getDI(5));
  };

  CIEC_BOOL &AlmIP7() {
    return *static_cast<CIEC_BOOL*>(getDI(6));
  };

  CIEC_BOOL &AlmIP8() {
    return *static_cast<CIEC_BOOL*>(getDI(7));
  };

  CIEC_INT &NumAlms() {
    return *static_cast<CIEC_INT*>(getDI(8));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_BOOL &AlmOP() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  };

  static const TEventID scm_nEventREQID = 0;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventEOID = 0;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const CStringDictionary::TStringId scm_anInternalsNames[];
  static const CStringDictionary::TStringId scm_anInternalsTypeIds[];
  CIEC_INT &AlmCount() {
    return *static_cast<CIEC_INT*>(getVarInternal(0));
  };

  static const SAdapterInstanceDef scm_astAdapterInstances[];

  FORTE_ARTimeOut& AlmTimer() {
    return (*static_cast<FORTE_ARTimeOut*>(m_apoAdapters[0]));
  };
  static const int scm_nAlmTimerAdpNum = 0;
  static const SFBInterfaceSpec scm_stFBInterfaceSpec;


  static const SInternalVarsInformation scm_stInternalVars;

   FORTE_BASIC_FB_DATA_ARRAY(1, 9, 1, 1, 1);
  void alg_checkAlarms(void);
  void alg_setTimer(void);
  void alg_alarmOn(void);
  void alg_alarmOff(void);
  static const TForteInt16 scm_nStateSTART = 0;
  static const TForteInt16 scm_nStateState = 1;
  static const TForteInt16 scm_nStatetimeOut = 2;
  static const TForteInt16 scm_nStateState_1 = 3;
  static const TForteInt16 scm_nStatealarm = 4;
  static const TForteInt16 scm_nStatestartTimer = 5;
  static const TForteInt16 scm_nStatecheckOn = 6;
  static const TForteInt16 scm_nStatealarmOff = 7;

  void enterStateSTART(void);
  void enterStateState(void);
  void enterStatetimeOut(void);
  void enterStateState_1(void);
  void enterStatealarm(void);
  void enterStatestartTimer(void);
  void enterStatecheckOn(void);
  void enterStatealarmOff(void);

  virtual void executeEvent(int pa_nEIID);

public:
  FORTE_ESalmcntComplex(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) : 
       CBasicFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId,
           &scm_stInternalVars, m_anFBConnData, m_anFBVarsData){
  };

  virtual ~FORTE_ESalmcntComplex(){};

};

#endif //close the ifdef sequence from the beginning of the file

