/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Var_Path_OPC_READ_1
 *** Description: Template for a Simple Function Block Type
 *** Version:
***     1.0: 2019-11-08/thomasolsen -  - 
 *************************************************************************/

#ifndef _VAR_PATH_OPC_READ_1_H_
#define _VAR_PATH_OPC_READ_1_H_

#include "simplefb.h"
#include "forte_bool.h"
#include "forte_wstring.h"
#include "forte_array_at.h"


class FORTE_Var_Path_OPC_READ_1: public CSimpleFB {
  DECLARE_FIRMWARE_FB(FORTE_Var_Path_OPC_READ_1)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventREQID = 0;
  
   static const TDataIOID scm_anEIWith[];
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventCNFID = 0;
  
   static const TDataIOID scm_anEOWith[]; 
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];
  

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

virtual void setInitialValues();
          CIEC_WSTRING &st_dns() {
            return *static_cast<CIEC_WSTRING*>(getDI(0));
          }
          
          CIEC_WSTRING &st_Prefix() {
            return *static_cast<CIEC_WSTRING*>(getDI(1));
          }
          
          CIEC_WSTRING &st_NodeId_1() {
            return *static_cast<CIEC_WSTRING*>(getDI(2));
          }
          
  CIEC_BOOL &st_ENABLED() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  }
  
  CIEC_WSTRING &st_OUT() {
    return *static_cast<CIEC_WSTRING*>(getDO(1));
  }
  

  void alg_REQ(void);

  FORTE_BASIC_FB_DATA_ARRAY(1, 3, 2, 0, 0);

public:
  FORTE_Var_Path_OPC_READ_1(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) : 
       CSimpleFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, nullptr, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_Var_Path_OPC_READ_1() = default;
};

#endif // _VAR_PATH_OPC_READ_1_H_


