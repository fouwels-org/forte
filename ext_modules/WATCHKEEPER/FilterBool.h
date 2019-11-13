/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: FilterBool
 *** Description: Template for a simple Basic Function Block Type
 *** Version: 
 ***     1.0: 2019-11-13/thomasolsen - null - null
 *************************************************************************/

#ifndef _FILTERBOOL_H_
#define _FILTERBOOL_H_

#include <basicfb.h>
#include <forte_bool.h>

class FORTE_FilterBool: public CBasicFB{
  DECLARE_FIRMWARE_FB(FORTE_FilterBool)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_BOOL &IN() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_BOOL &OUT() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  };

  CIEC_BOOL &OUT_1() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
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
  CIEC_BOOL &PREV() {
    return *static_cast<CIEC_BOOL*>(getVarInternal(0));
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
  FORTE_FilterBool(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) : 
       CBasicFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId,
           &scm_stInternalVars, m_anFBConnData, m_anFBVarsData){
  };

  virtual ~FORTE_FilterBool(){};

};

#endif //close the ifdef sequence from the beginning of the file

