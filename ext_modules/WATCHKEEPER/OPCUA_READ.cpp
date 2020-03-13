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

#include "OPCUA_READ.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "OPCUA_READ_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_OPCUA_READ, g_nStringIdOPCUA_READ)

const CStringDictionary::TStringId FORTE_OPCUA_READ::scm_anDataInputNames[] = {g_nStringIddns, g_nStringIdPrefix, g_nStringIdTag_Type, g_nStringIdTag_1, g_nStringIdTag_2, g_nStringIdTag_3, g_nStringIdTag_4, g_nStringIdClient_Read_Complete, g_nStringIdClient_Status, g_nStringIdData_From_Client, g_nStringIdPoll_Time};

const CStringDictionary::TStringId FORTE_OPCUA_READ::scm_anDataInputTypeIds[] = {g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdBOOL, g_nStringIdTIME};

const CStringDictionary::TStringId FORTE_OPCUA_READ::scm_anDataOutputNames[] = {g_nStringIdData_Fetch_Enable, g_nStringIdID_OUT, g_nStringIdCurrent_Tag_Read, g_nStringIdTag1_Data, g_nStringIdTag2_Data, g_nStringIdTag3_Data, g_nStringIdTag4_Data, g_nStringIdStatus};

const CStringDictionary::TStringId FORTE_OPCUA_READ::scm_anDataOutputTypeIds[] = {g_nStringIdBOOL, g_nStringIdWSTRING, g_nStringIdINT, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdBOOL, g_nStringIdWSTRING};

const TForteInt16 FORTE_OPCUA_READ::scm_anEIWithIndexes[] = {0, 12};
const TDataIOID FORTE_OPCUA_READ::scm_anEIWith[] = {0, 1, 2, 4, 3, 5, 6, 7, 8, 9, 10, 255, 0, 1, 2, 4, 3, 5, 6, 7, 8, 9, 10, 255};
const CStringDictionary::TStringId FORTE_OPCUA_READ::scm_anEventInputNames[] = {g_nStringIdREQ, g_nStringIdINIT};

const TDataIOID FORTE_OPCUA_READ::scm_anEOWith[] = {6, 5, 4, 3, 2, 1, 0, 7, 255, 0, 255};
const TForteInt16 FORTE_OPCUA_READ::scm_anEOWithIndexes[] = {0, -1, 9, -1};
const CStringDictionary::TStringId FORTE_OPCUA_READ::scm_anEventOutputNames[] = {g_nStringIdCNF, g_nStringIdINITO, g_nStringIdTrigger_Client};

const CStringDictionary::TStringId FORTE_OPCUA_READ::scm_anInternalsNames[] = {g_nStringIdtag1_connection_string, g_nStringIdtag2_connection_string, g_nStringIdtag3_connection_string, g_nStringIdtag4_connection_string};

const CStringDictionary::TStringId FORTE_OPCUA_READ::scm_anInternalsTypeIds[] = {g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING, g_nStringIdWSTRING};

const SAdapterInstanceDef FORTE_OPCUA_READ::scm_astAdapterInstances[] = {
{g_nStringIdATimeOut, g_nStringIdPoll_Timer, true }};

const SFBInterfaceSpec FORTE_OPCUA_READ::scm_stFBInterfaceSpec = {
  2,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  3,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  11,  scm_anDataInputNames, scm_anDataInputTypeIds,
  8,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  1,scm_astAdapterInstances};


const SInternalVarsInformation FORTE_OPCUA_READ::scm_stInternalVars = {4, scm_anInternalsNames, scm_anInternalsTypeIds};

void FORTE_OPCUA_READ::alg_INIT(void){
Poll_Timer().DT() = Poll_Time();
Current_Tag_Read() = 1;

/*  SET UP OPCUA connection string */
/*  EXAMPLE CONNECTION STRING          opc_ua[READ;opc.tcp://10.0.5.90:4840#;,1:s=IO.V01_1]          */
if((!((Tag_1() == "")))){
	tag1_connection_string() = "opc_ua[READ;opc.tcp://10.0.5.90:4840#;,1:s=IO.V01_1]";/* CONCAT("opc_ua[READ;opc.tcp://" , dns , ":4840#;,1:s=" , Prefix , "." , Tag_1 , "]");*/
};

if((!((Tag_2() == "")))){
	tag2_connection_string() = "opc_ua[READ;opc.tcp://10.0.5.90:4840#;,1:s=IO.V01_2]";
};
}

void FORTE_OPCUA_READ::alg_Prepare_Tag1(void){
ID_OUT() = tag1_connection_string();
Data_Fetch_Enable() = true;
}

void FORTE_OPCUA_READ::alg_Read_Tag1(void){
Tag1_Data() = Data_From_Client();
Data_Fetch_Enable() = false;
Current_Tag_Read() = 2;
}

void FORTE_OPCUA_READ::alg_Prepare_Tag2(void){
ID_OUT() = tag2_connection_string();
Data_Fetch_Enable() = true;
}

void FORTE_OPCUA_READ::alg_Read_Tag2(void){
Tag2_Data() = Data_From_Client();
Data_Fetch_Enable() = false;
Current_Tag_Read() = 1;
}

void FORTE_OPCUA_READ::alg_Send_Tag1_ID(void){
ID_OUT() = tag1_connection_string();
}

void FORTE_OPCUA_READ::alg_Send_Tag2_ID(void){
ID_OUT() = tag2_connection_string();
}

void FORTE_OPCUA_READ::alg_Dud_Tag1_Data(void){
Data_Fetch_Enable() = false;
Current_Tag_Read() = 2;
}


void FORTE_OPCUA_READ::enterStateSTART(void){
  m_nECCState = scm_nStateSTART;
}

void FORTE_OPCUA_READ::enterStateINIT(void){
  m_nECCState = scm_nStateINIT;
  alg_INIT();
  sendOutputEvent( scm_nEventINITOID);
}

void FORTE_OPCUA_READ::enterStateState(void){
  m_nECCState = scm_nStateState;
  sendOutputEvent( scm_nEventCNFID);
}

void FORTE_OPCUA_READ::enterStateState_1(void){
  m_nECCState = scm_nStateState_1;
  alg_Prepare_Tag1();
}

void FORTE_OPCUA_READ::enterStateState_2(void){
  m_nECCState = scm_nStateState_2;
  alg_Prepare_Tag2();
}

void FORTE_OPCUA_READ::enterStateState_3(void){
  m_nECCState = scm_nStateState_3;
  alg_Read_Tag2();
  sendOutputEvent( scm_nEventCNFID);
}

void FORTE_OPCUA_READ::enterStateState_4(void){
  m_nECCState = scm_nStateState_4;
  alg_Read_Tag1();
  sendOutputEvent( scm_nEventCNFID);
}

void FORTE_OPCUA_READ::enterStateState_5(void){
  m_nECCState = scm_nStateState_5;
  sendOutputEvent( scm_nEventTrigger_ClientID);
}

void FORTE_OPCUA_READ::enterStateState_6(void){
  m_nECCState = scm_nStateState_6;
  sendOutputEvent( scm_nEventTrigger_ClientID);
}

void FORTE_OPCUA_READ::enterStateState_7(void){
  m_nECCState = scm_nStateState_7;
  alg_Dud_Tag1_Data();
}

void FORTE_OPCUA_READ::enterStateState_8(void){
  m_nECCState = scm_nStateState_8;
  alg_Dud_Tag1_Data();
}

void FORTE_OPCUA_READ::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do{
    bTransitionCleared = true;
    switch(m_nECCState){
      case scm_nStateSTART:
        if(scm_nEventINITID == pa_nEIID)
          enterStateINIT();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateINIT:
        if(scm_nEventREQID == pa_nEIID)
          enterStateState();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState:
        if((((Current_Tag_Read() == 1))) && (!Data_Fetch_Enable()))
          enterStateState_1();
        else
        if((Current_Tag_Read() == 2) && (!Data_Fetch_Enable()))
          enterStateState_2();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_1:
        if((ID_OUT() == "opc_ua[READ;opc.tcp://10.0.5.90:4840#;,1:s=IO.V01_1]"))
          enterStateState_5();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_2:
        if((ID_OUT() == "opc_ua[READ;opc.tcp://10.0.5.90:4840#;,1:s=IO.V01_2]"))
          enterStateState_6();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_3:
        if((1))
          enterStateState();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_4:
        if((1))
          enterStateState();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_5:
        if((((Client_Read_Complete()))) && (((Client_Status() == "OK"))))
          enterStateState_4();
        else
        if((((!Client_Read_Complete()))) && (((Client_Status() == "DATA_TYPE_ERROR"))))
          enterStateState_7();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_6:
        if((((Client_Read_Complete()))) && (((Client_Status() == "OK"))))
          enterStateState_3();
        else
        if((((!Client_Read_Complete()))) && (((Client_Status() == "NO_SOCKET"))))
          enterStateState_8();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_7:
        if((1))
          enterStateState();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_8:
        if((1))
          enterStateState();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      default:
      DEVLOG_ERROR("The state is not in the valid range! The state value is: %d. The max value can be: 10.", m_nECCState.operator TForteUInt16 ());
        m_nECCState = 0; //0 is always the initial state
        break;
    }
    pa_nEIID = cg_nInvalidEventID;  // we have to clear the event after the first check in order to ensure correct behavior
  }while(bTransitionCleared);
}


