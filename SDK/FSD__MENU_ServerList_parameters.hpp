#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD__MENU_ServerList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function _MENU_ServerList._MENU_ServerList_C.UpdateFromWorkEnvironment
struct U_MENU_ServerList_C_UpdateFromWorkEnvironment_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.UpdateSearchOptionsFromSearchField
struct U_MENU_ServerList_C_UpdateSearchOptionsFromSearchField_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.UpdateSearchOptionsFromRestrictedMission
struct U_MENU_ServerList_C_UpdateSearchOptionsFromRestrictedMission_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.GetActiveDifficulties
struct U_MENU_ServerList_C_GetActiveDifficulties_Params
{
	TArray<class UDifficultySetting*>                  Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function _MENU_ServerList._MENU_ServerList_C.SetSortFunction
struct U_MENU_ServerList_C_SetSortFunction_Params
{
	EServerSortOrder*                                  NewSortingMethod;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_ServerList._MENU_ServerList_C.GetColumnWidths
struct U_MENU_ServerList_C_GetColumnWidths_Params
{
	TArray<float>                                      OutWidths;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function _MENU_ServerList._MENU_ServerList_C.SetSelectedServerType
struct U_MENU_ServerList_C_SetSelectedServerType_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.SetServerType
struct U_MENU_ServerList_C_SetServerType_Params
{
	ESteamServerJoinStatus*                            ServerType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_ServerList._MENU_ServerList_C.SetSearchDistance
struct U_MENU_ServerList_C_SetSearchDistance_Params
{
	ESteamSearchRegion*                                distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_ServerList._MENU_ServerList_C.CacheUnusedEntries
struct U_MENU_ServerList_C_CacheUnusedEntries_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.GetCachedEntry
struct U_MENU_ServerList_C_GetCachedEntry_Params
{
	class UITM_ServerList_Entry_C*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function _MENU_ServerList._MENU_ServerList_C.AddOrUpdateEntry
struct U_MENU_ServerList_C_AddOrUpdateEntry_Params
{
	struct FBlueprintSessionResult*                    Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function _MENU_ServerList._MENU_ServerList_C.ShowSpinner
struct U_MENU_ServerList_C_ShowSpinner_Params
{
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_ServerList._MENU_ServerList_C.SetSelectedSearchDistance
struct U_MENU_ServerList_C_SetSelectedSearchDistance_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.OnKeyUp
struct U_MENU_ServerList_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function _MENU_ServerList._MENU_ServerList_C.PopulateServerList
struct U_MENU_ServerList_C_PopulateServerList_Params
{
	TArray<struct FBlueprintSessionResult>             servers;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function _MENU_ServerList._MENU_ServerList_C.CreateSubMenus
struct U_MENU_ServerList_C_CreateSubMenus_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.OnFailure_155E2CBD4AAE55F9B2CDDA92CC1C4D5F
struct U_MENU_ServerList_C_OnFailure_155E2CBD4AAE55F9B2CDDA92CC1C4D5F_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_155E2CBD4AAE55F9B2CDDA92CC1C4D5F
struct U_MENU_ServerList_C_OnSuccess_155E2CBD4AAE55F9B2CDDA92CC1C4D5F_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.OnFailure_0624A35A4162400123C5FFB790E37726
struct U_MENU_ServerList_C_OnFailure_0624A35A4162400123C5FFB790E37726_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_0624A35A4162400123C5FFB790E37726
struct U_MENU_ServerList_C_OnSuccess_0624A35A4162400123C5FFB790E37726_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.OnFailure_2F44709544BBB762D8D1EDB23AB84A38
struct U_MENU_ServerList_C_OnFailure_2F44709544BBB762D8D1EDB23AB84A38_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_2F44709544BBB762D8D1EDB23AB84A38
struct U_MENU_ServerList_C_OnSuccess_2F44709544BBB762D8D1EDB23AB84A38_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.OnFailure_155E2CBD4AAE55F9B2CDDA92DDA08471
struct U_MENU_ServerList_C_OnFailure_155E2CBD4AAE55F9B2CDDA92DDA08471_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_155E2CBD4AAE55F9B2CDDA92DDA08471
struct U_MENU_ServerList_C_OnSuccess_155E2CBD4AAE55F9B2CDDA92DDA08471_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.Construct
struct U_MENU_ServerList_C_Construct_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.JoinServer
struct U_MENU_ServerList_C_JoinServer_Params
{
	struct FBlueprintSessionResult*                    Session;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function _MENU_ServerList._MENU_ServerList_C.BindServerListEntry
struct U_MENU_ServerList_C_BindServerListEntry_Params
{
	class UITM_ServerList_Entry_C**                    entry;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function _MENU_ServerList._MENU_ServerList_C.JoinServerWithoutPassword
struct U_MENU_ServerList_C_JoinServerWithoutPassword_Params
{
	struct FBlueprintSessionResult*                    Session;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function _MENU_ServerList._MENU_ServerList_C.JoinServerWithPassword
struct U_MENU_ServerList_C_JoinServerWithPassword_Params
{
	struct FBlueprintSessionResult*                    Session;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class FString*                                     Password;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function _MENU_ServerList._MENU_ServerList_C.Back Pressed
struct U_MENU_ServerList_C_Back_Pressed_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__FilterComboBox_K2Node_ComponentBoundEvent_137_OnSelectionChangedEvent__DelegateSignature
struct U_MENU_ServerList_C_BndEvt__FilterComboBox_K2Node_ComponentBoundEvent_137_OnSelectionChangedEvent__DelegateSignature_Params
{
	class FString*                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>*                          SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_ServerList._MENU_ServerList_C.ServelistChanged
struct U_MENU_ServerList_C_ServelistChanged_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.RestrictToMission
struct U_MENU_ServerList_C_RestrictToMission_Params
{
	class UGeneratedMission**                          mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_ServerList._MENU_ServerList_C.ClearRestricted
struct U_MENU_ServerList_C_ClearRestricted_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature
struct U_MENU_ServerList_C_BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function _MENU_ServerList._MENU_ServerList_C.PreConstruct
struct U_MENU_ServerList_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct U_MENU_ServerList_C_BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__BTN_Back2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct U_MENU_ServerList_C_BndEvt__BTN_Back2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.OnJoiningSession
struct U_MENU_ServerList_C_OnJoiningSession_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__BTN_QuickJoin_K2Node_ComponentBoundEvent_35_OnClicked__DelegateSignature
struct U_MENU_ServerList_C_BndEvt__BTN_QuickJoin_K2Node_ComponentBoundEvent_35_OnClicked__DelegateSignature_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.OnShown
struct U_MENU_ServerList_C_OnShown_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_SD_Close_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
struct U_MENU_ServerList_C_BndEvt__Basic_RadioButton_SD_Close_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params
{
	bool*                                              IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_SD_Medium_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature
struct U_MENU_ServerList_C_BndEvt__Basic_RadioButton_SD_Medium_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature_Params
{
	bool*                                              IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_SD_Far_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature
struct U_MENU_ServerList_C_BndEvt__Basic_RadioButton_SD_Far_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature_Params
{
	bool*                                              IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_SD_World_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature
struct U_MENU_ServerList_C_BndEvt__Basic_RadioButton_SD_World_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature_Params
{
	bool*                                              IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_Password_K2Node_ComponentBoundEvent_69_OnCheckStateChanged__DelegateSignature
struct U_MENU_ServerList_C_BndEvt__Basic_RadioButton_Password_K2Node_ComponentBoundEvent_69_OnCheckStateChanged__DelegateSignature_Params
{
	bool*                                              IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_Open_K2Node_ComponentBoundEvent_81_OnCheckStateChanged__DelegateSignature
struct U_MENU_ServerList_C_BndEvt__Basic_RadioButton_Open_K2Node_ComponentBoundEvent_81_OnCheckStateChanged__DelegateSignature_Params
{
	bool*                                              IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__AutoRefresh_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
struct U_MENU_ServerList_C_BndEvt__AutoRefresh_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params
{
	bool*                                              IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__BTN_Refresh_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct U_MENU_ServerList_C_BndEvt__BTN_Refresh_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.RefreshServerList
struct U_MENU_ServerList_C_RefreshServerList_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.OnClosed
struct U_MENU_ServerList_C_OnClosed_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Filter_ServerWorkEnvironment_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature
struct U_MENU_ServerList_C_BndEvt__Filter_ServerWorkEnvironment_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Mission_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct U_MENU_ServerList_C_BndEvt__Button_Mission_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Time_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct U_MENU_ServerList_C_BndEvt__Button_Time_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Hazard_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
struct U_MENU_ServerList_C_BndEvt__Button_Hazard_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Complexity_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
struct U_MENU_ServerList_C_BndEvt__Button_Complexity_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Length_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
struct U_MENU_ServerList_C_BndEvt__Button_Length_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Team_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct U_MENU_ServerList_C_BndEvt__Button_Team_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Button_Distance_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
struct U_MENU_ServerList_C_BndEvt__Button_Distance_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function _MENU_ServerList._MENU_ServerList_C.ExecuteUbergraph__MENU_ServerList
struct U_MENU_ServerList_C_ExecuteUbergraph__MENU_ServerList_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
