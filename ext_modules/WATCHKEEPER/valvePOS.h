/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: valvePOS
 *** Description: Template for a Simple Function Block Type
 *** Version: 
 ***     1.0: 2019-11-09/thomasolsen - null - 
 *************************************************************************/

#ifndef _VALVEPOS_H_
#define _VALVEPOS_H_

#include <simplefb.h>
#include <forte_int.h>

class FORTE_valvePOS: public CSimpleFB{
  DECLARE_FIRMWARE_FB(FORTE_valvePOS)

private:
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_INT &Rov_Error() {
    return *static_cast<CIEC_INT*>(getDO(0));
  };

  CIEC_INT &Rov_Open() {
    return *static_cast<CIEC_INT*>(getDO(1));
  };

  CIEC_INT &Rov_Closed() {
    return *static_cast<CIEC_INT*>(getDO(2));
  };

  CIEC_INT &Rov_Transit() {
    return *static_cast<CIEC_INT*>(getDO(3));
  };

  static const TEventID scm_nEventREQID = 0;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventCNFID = 0;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(1, 0, 4, 0);
  void alg_REQ(void);

public:
  FORTE_valvePOS(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) : 
       CSimpleFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId,
              0, m_anFBConnData, m_anFBVarsData){
  };

  virtual ~FORTE_valvePOS(){};

};

#endif //close the ifdef sequence from the beginning of the file

