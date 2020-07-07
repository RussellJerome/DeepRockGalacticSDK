#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MisSel_MissionMapIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.SetWarning
struct UITM_MisSel_MissionMapIcon_C_SetWarning_Params
{
	class UMissionWarning**                            Warning;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGeneratedMission**                          mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.SetMutator
struct UITM_MisSel_MissionMapIcon_C_SetMutator_Params
{
	class UMissionMutator**                            Mutator;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGeneratedMission**                          mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.SetButtonState
struct UITM_MisSel_MissionMapIcon_C_SetButtonState_Params
{
	class UBasic_ButtonScalable2_C**                   Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMissionSelection_Mode>*               Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ShouldEnableSoloButton
struct UITM_MisSel_MissionMapIcon_C_ShouldEnableSoloButton_Params
{
	bool                                               Show;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ShouldEnableHostButton
struct UITM_MisSel_MissionMapIcon_C_ShouldEnableHostButton_Params
{
	bool                                               Show;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ShouldEnableJoinButton
struct UITM_MisSel_MissionMapIcon_C_ShouldEnableJoinButton_Params
{
	bool                                               Show;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.GetPlayerController
struct UITM_MisSel_MissionMapIcon_C_GetPlayerController_Params
{
	class ABP_PlayerController_SpaceRig_C*             AsBP_Player_Controller_Space_Rig;                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.SelectOptions
struct UITM_MisSel_MissionMapIcon_C_SelectOptions_Params
{
};

// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.GetActiveSelectionMode
struct UITM_MisSel_MissionMapIcon_C_GetActiveSelectionMode_Params
{
	TEnumAsByte<EMissionSelection_Mode>                NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.GetNumberOfActiveMissions
struct UITM_MisSel_MissionMapIcon_C_GetNumberOfActiveMissions_Params
{
	TArray<struct FBlueprintSessionResult>             Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                sessions;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.HasMission
struct UITM_MisSel_MissionMapIcon_C_HasMission_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.SetData
struct UITM_MisSel_MissionMapIcon_C_SetData_Params
{
	class UGeneratedMission**                          mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UITM_MisSel_FullBiome_C**                    BiomeController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.Reset
struct UITM_MisSel_MissionMapIcon_C_Reset_Params
{
};

// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.Unselect
struct UITM_MisSel_MissionMapIcon_C_Unselect_Params
{
};

// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.Construct
struct UITM_MisSel_MissionMapIcon_C_Construct_Params
{
};

// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ServerUpdate
struct UITM_MisSel_MissionMapIcon_C_ServerUpdate_Params
{
};

// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__Button_Selection_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
struct UITM_MisSel_MissionMapIcon_C_BndEvt__Button_Selection_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__Button_Selection_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UITM_MisSel_MissionMapIcon_C_BndEvt__Button_Selection_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UITM_MisSel_MissionMapIcon_C_BndEvt__Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__BTN_Join_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UITM_MisSel_MissionMapIcon_C_BndEvt__BTN_Join_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__BTN_Host_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UITM_MisSel_MissionMapIcon_C_BndEvt__BTN_Host_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__BTN_Solo_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UITM_MisSel_MissionMapIcon_C_BndEvt__BTN_Solo_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.PreConstruct
struct UITM_MisSel_MissionMapIcon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__BTN_HostPublic_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature
struct UITM_MisSel_MissionMapIcon_C_BndEvt__BTN_HostPublic_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature_Params
{
};

// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.OnTeamMemberCampaignMissionChangedEvent
struct UITM_MisSel_MissionMapIcon_C_OnTeamMemberCampaignMissionChangedEvent_Params
{
};

// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ExecuteUbergraph_ITM_MisSel_MissionMapIcon
struct UITM_MisSel_MissionMapIcon_C_ExecuteUbergraph_ITM_MisSel_MissionMapIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
