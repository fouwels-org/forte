/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: A_OUT_4
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-08-02/thomasolsen - null - null
 *************************************************************************/

#ifndef _A_OUT_4_H_
#define _A_OUT_4_H_

#include <cfb.h>
#include <typelib.h>
#include <forte_int.h>
#include <forte_wstring.h>

class FORTE_A_OUT_4: public CCompositeFB{
  DECLARE_FIRMWARE_FB(FORTE_A_OUT_4)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_INT &OUT1() {
    return *static_cast<CIEC_INT*>(getDI(0));
  };

  CIEC_INT &OUT2() {
    return *static_cast<CIEC_INT*>(getDI(1));
  };

  CIEC_INT &OUT3() {
    return *static_cast<CIEC_INT*>(getDI(2));
  };

  CIEC_INT &OUT4() {
    return *static_cast<CIEC_INT*>(getDI(3));
  };

  CIEC_WSTRING &ID() {
    return *static_cast<CIEC_WSTRING*>(getDI(4));
  };

  static const TEventID scm_nEventINITID = 0;
  static const TEventID scm_nEventREQID = 1;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventINITOID = 0;
  static const TEventID scm_nEventCNFID = 1;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(2, 5, 0, 0);

  static const SCFB_FBInstanceData scm_astInternalFBs[];

  static const SCFB_FBConnectionData scm_astEventConnections[];

  static const SCFB_FBFannedOutConnectionData scm_astFannedOutEventConnections[];

  static const SCFB_FBConnectionData scm_astDataConnections[];
  static const SCFB_FBNData scm_stFBNData;

public:
  COMPOSITE_FUNCTION_BLOCK_CTOR(FORTE_A_OUT_4){
  };

  virtual ~FORTE_A_OUT_4(){};

};

#endif //close the ifdef sequence from the beginning of the file

