/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: FilterReal
 *** Description: Template for a simple Basic Function Block Type
 *** Version: 
 ***     1.0: 2019-11-13/thomasolsen - null - 
 *************************************************************************/

#ifndef _FILTERREAL_H_
#define _FILTERREAL_H_

#include <basicfb.h>
#include <forte_bool.h>
#include <forte_real.h>

class FORTE_FilterReal: public CBasicFB{
  DECLARE_FIRMWARE_FB(FORTE_FilterReal)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_REAL &IN() {
    return *static_cast<CIEC_REAL*>(getDI(0));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_REAL &OUT() {
    return *static_cast<CIEC_REAL*>(getDO(0));
  };

  CIEC_REAL &OUT_1() {
    return *static_cast<CIEC_REAL*>(getDO(1));
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
  CIEC_REAL &PREV() {
    return *static_cast<CIEC_REAL*>(getVarInternal(0));
  };

  CIEC_REAL &EPS() {
    return *static_cast<CIEC_REAL*>(getVarInternal(1));
  };

  CIEC_BOOL &CHANGE() {
    return *static_cast<CIEC_BOOL*>(getVarInternal(2));
  };

  CIEC_REAL &RES() {
    return *static_cast<CIEC_REAL*>(getVarInternal(3));
  };

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;


  static const SInternalVarsInformation scm_stInternalVars;

   FORTE_BASIC_FB_DATA_ARRAY(1, 1, 2, 4, 0);

virtual void setInitialValues();
  void alg_normalOperation(void);
  void alg_changed(void);
  static const TForteInt16 scm_nStateSTART = 0;
  static const TForteInt16 scm_nStateNormalOp = 1;
  static const TForteInt16 scm_nStateChanged = 2;

  void enterStateSTART(void);
  void enterStateNormalOp(void);
  void enterStateChanged(void);

  virtual void executeEvent(int pa_nEIID);

public:
  FORTE_FilterReal(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) : 
       CBasicFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId,
           &scm_stInternalVars, m_anFBConnData, m_anFBVarsData){
  };

  virtual ~FORTE_FilterReal(){};

};

#endif //close the ifdef sequence from the beginning of the file

