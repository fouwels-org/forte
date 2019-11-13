/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: Filter
 *** Description: Template for a simple Basic Function Block Type
 *** Version: 
 ***     1.0: 2019-11-13/thomasolsen - null - null
 *************************************************************************/

#ifndef _FILTER_H_
#define _FILTER_H_

#include <basicfb.h>
#include <forte_bool.h>

class FORTE_Filter: public CBasicFB{
  DECLARE_FIRMWARE_FB(FORTE_Filter)

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

   FORTE_BASIC_FB_DATA_ARRAY(1, 1, 1, 1, 0);

virtual void setInitialValues();
  void alg_initialize(void);
  void alg_deInitialize(void);
  void alg_normalOperation(void);
  static const TForteInt16 scm_nStateSTART = 0;
  static const TForteInt16 scm_nStateNormalOp = 1;

  void enterStateSTART(void);
  void enterStateNormalOp(void);

  virtual void executeEvent(int pa_nEIID);

public:
  FORTE_Filter(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) : 
       CBasicFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId,
           &scm_stInternalVars, m_anFBConnData, m_anFBVarsData){
  };

  virtual ~FORTE_Filter(){};

};

#endif //close the ifdef sequence from the beginning of the file

