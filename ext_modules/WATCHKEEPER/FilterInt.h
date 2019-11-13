/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: FilterInt
 *** Description: Template for a simple Basic Function Block Type
 *** Version: 
 ***     1.0: 2019-11-13/thomasolsen - null - 
 *************************************************************************/

#ifndef _FILTERINT_H_
#define _FILTERINT_H_

#include <basicfb.h>
#include <forte_int.h>

class FORTE_FilterInt: public CBasicFB{
  DECLARE_FIRMWARE_FB(FORTE_FilterInt)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_INT &IN() {
    return *static_cast<CIEC_INT*>(getDI(0));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_INT &OUT() {
    return *static_cast<CIEC_INT*>(getDO(0));
  };

  CIEC_INT &OUT_1() {
    return *static_cast<CIEC_INT*>(getDO(1));
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
  CIEC_INT &PREV() {
    return *static_cast<CIEC_INT*>(getVarInternal(0));
  };

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;


  static const SInternalVarsInformation scm_stInternalVars;

   FORTE_BASIC_FB_DATA_ARRAY(1, 1, 2, 1, 0);

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
  FORTE_FilterInt(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) : 
       CBasicFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId,
           &scm_stInternalVars, m_anFBConnData, m_anFBVarsData){
  };

  virtual ~FORTE_FilterInt(){};

};

#endif //close the ifdef sequence from the beginning of the file

