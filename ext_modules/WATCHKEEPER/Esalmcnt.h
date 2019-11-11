/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: Esalmcnt
 *** Description: Produces an alarm at the output after a set number of inputs are in alarm.
 *** Version: 
 ***     1.0: 2019-11-06/thomasolsen - null - 
 *************************************************************************/

#ifndef _ESALMCNT_H_
#define _ESALMCNT_H_

#include <simplefb.h>
#include <forte_bool.h>
#include <forte_int.h>

class FORTE_Esalmcnt: public CSimpleFB{
  DECLARE_FIRMWARE_FB(FORTE_Esalmcnt)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_BOOL &AlmIP1() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  };

  CIEC_BOOL &AlmIP3() {
    return *static_cast<CIEC_BOOL*>(getDI(1));
  };

  CIEC_BOOL &AlmIP2() {
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

  static const TEventID scm_nEventCNFID = 0;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(1, 9, 1, 0);
  void alg_REQ(void);

public:
  FORTE_Esalmcnt(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) : 
       CSimpleFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId,
              0, m_anFBConnData, m_anFBVarsData){
  };

  virtual ~FORTE_Esalmcnt(){};

};

#endif //close the ifdef sequence from the beginning of the file

