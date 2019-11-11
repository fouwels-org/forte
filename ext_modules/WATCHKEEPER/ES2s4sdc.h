/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: ES2s4sdc
 *** Description: Template for a Simple Function Block Type
 *** Version: 
 ***     1.0: 2019-11-06/thomasolsen - null - 
 *************************************************************************/

#ifndef _ES2S4SDC_H_
#define _ES2S4SDC_H_

#include <simplefb.h>
#include <forte_bool.h>

class FORTE_ES2s4sdc: public CSimpleFB{
  DECLARE_FIRMWARE_FB(FORTE_ES2s4sdc)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_BOOL &bIN_1() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_BOOL &bOUT_1() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  };

  CIEC_BOOL &bOUT_2() {
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

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(1, 1, 2, 0);
  void alg_REQ(void);

public:
  FORTE_ES2s4sdc(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) : 
       CSimpleFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId,
              0, m_anFBConnData, m_anFBVarsData){
  };

  virtual ~FORTE_ES2s4sdc(){};

};

#endif //close the ifdef sequence from the beginning of the file

