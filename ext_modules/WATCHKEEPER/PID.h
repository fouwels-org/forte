/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: PID
 *** Description: Basic FB with empty ECC
 *** Version:
***     1.0: 2021-07-10/to -  - 
 *************************************************************************/

#ifndef _PID_H_
#define _PID_H_

#include "basicfb.h"
#include "forte_bool.h"
#include "forte_real.h"
#include "forte_uint.h"
#include "forte_array_at.h"


class FORTE_PID: public CBasicFB {
  DECLARE_FIRMWARE_FB(FORTE_PID)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventINITID = 0;
  static const TEventID scm_nEventREQID = 1;
  static const TEventID scm_nEventRSTID = 2;
  
   static const TDataIOID scm_anEIWith[];
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventINITOID = 0;
  static const TEventID scm_nEventCNFID = 1;
  
   static const TDataIOID scm_anEOWith[]; 
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];
  

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

static const CStringDictionary::TStringId scm_anInternalsNames[];
static const CStringDictionary::TStringId scm_anInternalsTypeIds[];
static const SInternalVarsInformation scm_stInternalVars;
virtual void setInitialValues();
  CIEC_REAL &st_InError() {
    return *static_cast<CIEC_REAL*>(getDI(0));
  }
  
  CIEC_UINT &st_Noise() {
    return *static_cast<CIEC_UINT*>(getDI(1));
  }
  
  CIEC_REAL &st_Kp() {
    return *static_cast<CIEC_REAL*>(getDI(2));
  }
  
  CIEC_REAL &st_Ki() {
    return *static_cast<CIEC_REAL*>(getDI(3));
  }
  
  CIEC_REAL &st_Kd() {
    return *static_cast<CIEC_REAL*>(getDI(4));
  }
  
  CIEC_REAL &st_Interval() {
    return *static_cast<CIEC_REAL*>(getDI(5));
  }
  
  CIEC_REAL &st_LIM_H() {
    return *static_cast<CIEC_REAL*>(getDI(6));
  }
  
  CIEC_REAL &st_LIM_L() {
    return *static_cast<CIEC_REAL*>(getDI(7));
  }
  
  CIEC_REAL &st_Y() {
    return *static_cast<CIEC_REAL*>(getDO(0));
  }
  
  CIEC_BOOL &st_LIM() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
  }
  
  CIEC_REAL &st_LAST_ERROR() {
    return *static_cast<CIEC_REAL*>(getVarInternal(0));
  }
  
  CIEC_REAL &st_INTEGRATION_ACCUM() {
    return *static_cast<CIEC_REAL*>(getVarInternal(1));
  }
  

  void alg_REQ(void);
  void alg_RESET(void);

  static const TForteInt16 scm_nStateSTART = 0;
  static const TForteInt16 scm_nStateREQ = 1;
  static const TForteInt16 scm_nStateINIT = 2;
  static const TForteInt16 scm_nStateRST = 3;
  
  void enterStateSTART(void);
  void enterStateREQ(void);
  void enterStateINIT(void);
  void enterStateRST(void);

  virtual void executeEvent(int pa_nEIID);

  FORTE_BASIC_FB_DATA_ARRAY(2, 8, 2, 2, 0);

public:
  FORTE_PID(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CBasicFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stInternalVars, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_PID() = default;
};

#endif // _PID_H_


