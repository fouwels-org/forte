/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: Output
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-08-02/thomasolsen - null - null
 *************************************************************************/

#ifndef _OUTPUT_H_
#define _OUTPUT_H_

#include <cfb.h>
#include <typelib.h>
#include <forte_int.h>
#include <forte_wstring.h>

class FORTE_Output: public CCompositeFB{
  DECLARE_FIRMWARE_FB(FORTE_Output)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_INT &Value() {
    return *static_cast<CIEC_INT*>(getDI(0));
  };

  CIEC_WSTRING &Name() {
    return *static_cast<CIEC_WSTRING*>(getDI(1));
  };

  static const TEventID scm_nEventREQID = 0;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TForteInt16 scm_anEOWithIndexes[];
  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(0, 2, 0, 0);

  static const SCFB_FBInstanceData scm_astInternalFBs[];

  static const SCFB_FBParameter scm_astParamters[];

  static const SCFB_FBConnectionData scm_astEventConnections[];

  static const SCFB_FBFannedOutConnectionData scm_astFannedOutEventConnections[];

  static const SCFB_FBConnectionData scm_astDataConnections[];
  static const SCFB_FBNData scm_stFBNData;

public:
  COMPOSITE_FUNCTION_BLOCK_CTOR(FORTE_Output){
  };

  virtual ~FORTE_Output(){};

};

#endif //close the ifdef sequence from the beginning of the file

