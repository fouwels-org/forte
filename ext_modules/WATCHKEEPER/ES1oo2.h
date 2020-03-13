/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: ES1oo2
 *** Description: Template for a Simple Function Block Type
 *** Version: 
 ***     1.0: 2019-11-06/thomasolsen - null - 
 *************************************************************************/

#ifndef _ES1OO2_H_
#define _ES1OO2_H_

#include <simplefb.h>
#include <forte_bool.h>
#include <forte_real.h>

class FORTE_ES1oo2: public CSimpleFB{
  DECLARE_FIRMWARE_FB(FORTE_ES1oo2)

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
  CIEC_REAL &tInstDev() {
    return *static_cast<CIEC_REAL*>(getDO(0));
  };

  CIEC_REAL &inst_ave() {
    return *static_cast<CIEC_REAL*>(getDO(1));
  };

  CIEC_REAL &inst_dev() {
    return *static_cast<CIEC_REAL*>(getDO(2));
  };

  CIEC_BOOL &dev_alm() {
    return *static_cast<CIEC_BOOL*>(getDO(3));
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

   FORTE_FB_DATA_ARRAY(1, 4, 4, 0);
  void alg_REQ(void);

public:
  FORTE_ES1oo2(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) : 
       CSimpleFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId,
              0, m_anFBConnData, m_anFBVarsData){
  };

  virtual ~FORTE_ES1oo2(){};

};

#endif //close the ifdef sequence from the beginning of the file

