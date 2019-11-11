/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: In_Bool4
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-11-05/thomasolsen - null - 
 *************************************************************************/

#ifndef _IN_BOOL4_H_
#define _IN_BOOL4_H_

#include <cfb.h>
#include <typelib.h>
#include <forte_bool.h>
#include <forte_wstring.h>

class FORTE_In_Bool4: public CCompositeFB{
  DECLARE_FIRMWARE_FB(FORTE_In_Bool4)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_WSTRING &Name1() {
    return *static_cast<CIEC_WSTRING*>(getDI(0));
  };

  CIEC_WSTRING &Name2() {
    return *static_cast<CIEC_WSTRING*>(getDI(1));
  };

  CIEC_WSTRING &Name3() {
    return *static_cast<CIEC_WSTRING*>(getDI(2));
  };

  CIEC_WSTRING &Name4() {
    return *static_cast<CIEC_WSTRING*>(getDI(3));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_BOOL &IN1() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  };

  CIEC_BOOL &IN2() {
    return *static_cast<CIEC_BOOL*>(getDO(1));
  };

  CIEC_BOOL &IN3() {
    return *static_cast<CIEC_BOOL*>(getDO(2));
  };

  CIEC_BOOL &IN4() {
    return *static_cast<CIEC_BOOL*>(getDO(3));
  };

  static const TEventID scm_nEventINITID = 0;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventCNFID = 0;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(1, 4, 4, 0);

  static const SCFB_FBInstanceData scm_astInternalFBs[];

  static const SCFB_FBParameter scm_astParamters[];

  static const SCFB_FBConnectionData scm_astEventConnections[];

  static const SCFB_FBFannedOutConnectionData scm_astFannedOutEventConnections[];

  static const SCFB_FBConnectionData scm_astDataConnections[];
  static const SCFB_FBNData scm_stFBNData;

public:
  COMPOSITE_FUNCTION_BLOCK_CTOR(FORTE_In_Bool4){
  };

  virtual ~FORTE_In_Bool4(){};

};

#endif //close the ifdef sequence from the beginning of the file

