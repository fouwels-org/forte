/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: Vout_Int1
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-11-05/thomasolsen - null - 
 *************************************************************************/

#ifndef _VOUT_INT1_H_
#define _VOUT_INT1_H_

#include <cfb.h>
#include <typelib.h>
#include <forte_wstring.h>
#include <forte_int.h>

class FORTE_Vout_Int1: public CCompositeFB{
  DECLARE_FIRMWARE_FB(FORTE_Vout_Int1)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_WSTRING &Name1() {
    return *static_cast<CIEC_WSTRING*>(getDI(0));
  };

  CIEC_INT &Out1() {
    return *static_cast<CIEC_INT*>(getDI(1));
  };

  static const TEventID scm_nEventINITID = 0;
  static const TEventID scm_nEventREQID = 1;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventCNFID = 0;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(1, 2, 0, 0);

  static const SCFB_FBInstanceData scm_astInternalFBs[];

  static const SCFB_FBParameter scm_astParamters[];

  static const SCFB_FBConnectionData scm_astEventConnections[];

  static const SCFB_FBConnectionData scm_astDataConnections[];
  static const SCFB_FBNData scm_stFBNData;

public:
  COMPOSITE_FUNCTION_BLOCK_CTOR(FORTE_Vout_Int1){
  };

  virtual ~FORTE_Vout_Int1(){};

};

#endif //close the ifdef sequence from the beginning of the file

