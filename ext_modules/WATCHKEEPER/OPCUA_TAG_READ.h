/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: OPCUA_TAG_READ
 *** Description: Reads a tag value from an OPCUA server
 *** Version: 
 ***     1.0: 2020-03-10/richardatkinson - null - 
 *************************************************************************/

#ifndef _OPCUA_TAG_READ_H_
#define _OPCUA_TAG_READ_H_

#include <simplefb.h>
#include <forte_bool.h>
#include <forte_time.h>
#include <forte_wstring.h>
#include <forte_int.h>

class FORTE_OPCUA_TAG_READ: public CSimpleFB{
  DECLARE_FIRMWARE_FB(FORTE_OPCUA_TAG_READ)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_WSTRING &dns() {
    return *static_cast<CIEC_WSTRING*>(getDI(0));
  };

  CIEC_WSTRING &Prefix() {
    return *static_cast<CIEC_WSTRING*>(getDI(1));
  };

  CIEC_WSTRING &Tag_Type() {
    return *static_cast<CIEC_WSTRING*>(getDI(2));
  };

  CIEC_WSTRING &Tag_1() {
    return *static_cast<CIEC_WSTRING*>(getDI(3));
  };

  CIEC_WSTRING &Tag_2() {
    return *static_cast<CIEC_WSTRING*>(getDI(4));
  };

  CIEC_WSTRING &Tag_3() {
    return *static_cast<CIEC_WSTRING*>(getDI(5));
  };

  CIEC_WSTRING &Tag_4() {
    return *static_cast<CIEC_WSTRING*>(getDI(6));
  };

  CIEC_BOOL &Client_Read_Complete() {
    return *static_cast<CIEC_BOOL*>(getDI(7));
  };

  CIEC_WSTRING &Client_Status() {
    return *static_cast<CIEC_WSTRING*>(getDI(8));
  };

  CIEC_BOOL &Data_From_Client() {
    return *static_cast<CIEC_BOOL*>(getDI(9));
  };

  CIEC_TIME &Poll_Time() {
    return *static_cast<CIEC_TIME*>(getDI(10));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_BOOL &ENABLED() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  };

  CIEC_WSTRING &ID_OUT() {
    return *static_cast<CIEC_WSTRING*>(getDO(1));
  };

  CIEC_INT &Cur_Tag_Read() {
    return *static_cast<CIEC_INT*>(getDO(2));
  };

  CIEC_BOOL &Tag1_Value() {
    return *static_cast<CIEC_BOOL*>(getDO(3));
  };

  CIEC_BOOL &Tag2_Value() {
    return *static_cast<CIEC_BOOL*>(getDO(4));
  };

  CIEC_BOOL &Tag3_Value() {
    return *static_cast<CIEC_BOOL*>(getDO(5));
  };

  CIEC_BOOL &Tag4_Value() {
    return *static_cast<CIEC_BOOL*>(getDO(6));
  };

  CIEC_WSTRING &STATUS() {
    return *static_cast<CIEC_WSTRING*>(getDO(7));
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

   FORTE_FB_DATA_ARRAY(1, 11, 8, 0);
  void alg_REQ(void);

public:
  FORTE_OPCUA_TAG_READ(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) : 
       CSimpleFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId,
              0, m_anFBConnData, m_anFBVarsData){
  };

  virtual ~FORTE_OPCUA_TAG_READ(){};

};

#endif //close the ifdef sequence from the beginning of the file

