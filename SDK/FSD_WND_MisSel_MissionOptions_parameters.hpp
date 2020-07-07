#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_MisSel_MissionOptions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.GetSelectedDifficulty
struct UWND_MisSel_MissionOptions_C_GetSelectedDifficulty_Params
{
	class UDifficultySetting*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.UpdateConfirmButton
struct UWND_MisSel_MissionOptions_C_UpdateConfirmButton_Params
{
};

// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.SetMissionLocked
struct UWND_MisSel_MissionOptions_C_SetMissionLocked_Params
{
	bool*                                              IsLocked;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Explanation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.HandleModeChange
struct UWND_MisSel_MissionOptions_C_HandleModeChange_Params
{
	TEnumAsByte<EMissionSelection_Mode>*               Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.GetPassword
struct UWND_MisSel_MissionOptions_C_GetPassword_Params
{
	struct FText                                       Password;                                                 // (Parm, OutParm)
	bool                                               HasPassword;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.IsFriendsOnly
struct UWND_MisSel_MissionOptions_C_IsFriendsOnly_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.UpdateHazardBonus
struct UWND_MisSel_MissionOptions_C_UpdateHazardBonus_Params
{
};

// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnFailure_E07C54DA4555FCCB80821BA994BEDE78
struct UWND_MisSel_MissionOptions_C_OnFailure_E07C54DA4555FCCB80821BA994BEDE78_Params
{
};

// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnSuccess_E07C54DA4555FCCB80821BA994BEDE78
struct UWND_MisSel_MissionOptions_C_OnSuccess_E07C54DA4555FCCB80821BA994BEDE78_Params
{
};

// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnFailure_E07C54DA4555FCCB80821BA9DC34619D
struct UWND_MisSel_MissionOptions_C_OnFailure_E07C54DA4555FCCB80821BA9DC34619D_Params
{
};

// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnSuccess_E07C54DA4555FCCB80821BA9DC34619D
struct UWND_MisSel_MissionOptions_C_OnSuccess_E07C54DA4555FCCB80821BA9DC34619D_Params
{
};

// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.PreConstruct
struct UWND_MisSel_MissionOptions_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.Construct
struct UWND_MisSel_MissionOptions_C_Construct_Params
{
};

// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.ShowMode
struct UWND_MisSel_MissionOptions_C_ShowMode_Params
{
	TEnumAsByte<EMissionSelection_Mode>*               Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.SetMission
struct UWND_MisSel_MissionOptions_C_SetMission_Params
{
	class UGeneratedMission**                          mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_13_OnTextChanged__DelegateSignature
struct UWND_MisSel_MissionOptions_C_BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_13_OnTextChanged__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_14_OnTextCommitted__DelegateSignature
struct UWND_MisSel_MissionOptions_C_BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_14_OnTextCommitted__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	unsigned char*                                     CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_27_OnSelectionChanged__DelegateSignature
struct UWND_MisSel_MissionOptions_C_BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_27_OnSelectionChanged__DelegateSignature_Params
{
	struct FText*                                      Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.ResetSelectedDifficulty
struct UWND_MisSel_MissionOptions_C_ResetSelectedDifficulty_Params
{
};

// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__BTN_ConfirmMission2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWND_MisSel_MissionOptions_C_BndEvt__BTN_ConfirmMission2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.ExecuteUbergraph_WND_MisSel_MissionOptions
struct UWND_MisSel_MissionOptions_C_ExecuteUbergraph_WND_MisSel_MissionOptions_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnDifficultyChanged__DelegateSignature
struct UWND_MisSel_MissionOptions_C_OnDifficultyChanged__DelegateSignature_Params
{
	class UDifficultySetting**                         NewDifficulty;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGeneratedMission**                          mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnJoinMission__DelegateSignature
struct UWND_MisSel_MissionOptions_C_OnJoinMission__DelegateSignature_Params
{
};

// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnStartMission__DelegateSignature
struct UWND_MisSel_MissionOptions_C_OnStartMission__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
