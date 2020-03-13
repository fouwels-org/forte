/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: OPCUA_READ
 *** Description: Template for an empty basic function block
 *** Version: 
 ***     1.0: 2020-03-11/root - null - 
 *************************************************************************/

#ifndef _OPCUA_READ_H_
#define _OPCUA_READ_H_

#include <basicfb.h>
#include <forte_bool.h>
#include <forte_time.h>
#include <forte_wstring.h>
#include <forte_int.h>
#include "ATimeOut.h"

class FORTE_OPCUA_READ: public CBasicFB{
  DECLARE_FIRMWARE_FB(FORTE_OPCUA_READ)

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
  CIEC_BOOL &Data_Fetch_Enable() {
    return *static_cast<CIEC_BOOL*>(getDO(0));
  };

  CIEC_WSTRING &ID_OUT() {
    return *static_cast<CIEC_WSTRING*>(getDO(1));
  };

  CIEC_INT &Current_Tag_Read() {
    return *static_cast<CIEC_INT*>(getDO(2));
  };

  CIEC_BOOL &Tag1_Data() {
    return *static_cast<CIEC_BOOL*>(getDO(3));
  };

  CIEC_BOOL &Tag2_Data() {
    return *static_cast<CIEC_BOOL*>(getDO(4));
  };

  CIEC_BOOL &Tag3_Data() {
    return *static_cast<CIEC_BOOL*>(getDO(5));
  };

  CIEC_BOOL &Tag4_Data() {
    return *static_cast<CIEC_BOOL*>(getDO(6));
  };

  CIEC_WSTRING &Status() {
    return *static_cast<CIEC_WSTRING*>(getDO(7));
  };

  static const TEventID scm_nEventREQID = 0;
  static const TEventID scm_nEventINITID = 1;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventCNFID = 0;
  static const TEventID scm_nEventINITOID = 1;
  static const TEventID scm_nEventTrigger_ClientID = 2;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const CStringDictionary::TStringId scm_anInternalsNames[];
  static const CStringDictionary::TStringId scm_anInternalsTypeIds[];
  CIEC_WSTRING &tag1_connection_string() {
    return *static_cast<CIEC_WSTRING*>(getVarInternal(0));
  };

  CIEC_WSTRING &tag2_connection_string() {
    return *static_cast<CIEC_WSTRING*>(getVarInternal(1));
  };

  CIEC_WSTRING &tag3_connection_string() {
    return *static_cast<CIEC_WSTRING*>(getVarInternal(2));
  };

  CIEC_WSTRING &tag4_connection_string() {
    return *static_cast<CIEC_WSTRING*>(getVarInternal(3));
  };

  static const SAdapterInstanceDef scm_astAdapterInstances[];

  FORTE_ATimeOut& Poll_Timer() {
    return (*static_cast<FORTE_ATimeOut*>(m_apoAdapters[0]));
  };
  static const int scm_nPoll_TimerAdpNum = 0;
  static const SFBInterfaceSpec scm_stFBInterfaceSpec;


  static const SInternalVarsInformation scm_stInternalVars;

   FORTE_BASIC_FB_DATA_ARRAY(3, 11, 8, 4, 1);
  void alg_INIT(void);
  void alg_Prepare_Tag1(void);
  void alg_Read_Tag1(void);
  void alg_Prepare_Tag2(void);
  void alg_Read_Tag2(void);
  void alg_Send_Tag1_ID(void);
  void alg_Send_Tag2_ID(void);
  void alg_Dud_Tag1_Data(void);
  static const TForteInt16 scm_nStateSTART = 0;
  static const TForteInt16 scm_nStateINIT = 1;
  static const TForteInt16 scm_nStateState = 2;
  static const TForteInt16 scm_nStateState_1 = 3;
  static const TForteInt16 scm_nStateState_2 = 4;
  static const TForteInt16 scm_nStateState_3 = 5;
  static const TForteInt16 scm_nStateState_4 = 6;
  static const TForteInt16 scm_nStateState_5 = 7;
  static const TForteInt16 scm_nStateState_6 = 8;
  static const TForteInt16 scm_nStateState_7 = 9;
  static const TForteInt16 scm_nStateState_8 = 10;

  void enterStateSTART(void);
  void enterStateINIT(void);
  void enterStateState(void);
  void enterStateState_1(void);
  void enterStateState_2(void);
  void enterStateState_3(void);
  void enterStateState_4(void);
  void enterStateState_5(void);
  void enterStateState_6(void);
  void enterStateState_7(void);
  void enterStateState_8(void);

  virtual void executeEvent(int pa_nEIID);

public:
  FORTE_OPCUA_READ(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) : 
       CBasicFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId,
           &scm_stInternalVars, m_anFBConnData, m_anFBVarsData){
  };

  virtual ~FORTE_OPCUA_READ(){};

};

#endif //close the ifdef sequence from the beginning of the file

