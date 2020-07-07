// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MisSel_MissionMapIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.SetWarning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMissionWarning**        Warning                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGeneratedMission**      mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_MissionMapIcon_C::SetWarning(class UMissionWarning** Warning, class UGeneratedMission** mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.SetWarning");

	UITM_MisSel_MissionMapIcon_C_SetWarning_Params params;
	params.Warning = Warning;
	params.mission = mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.SetMutator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMissionMutator**        Mutator                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGeneratedMission**      mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_MissionMapIcon_C::SetMutator(class UMissionMutator** Mutator, class UGeneratedMission** mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.SetMutator");

	UITM_MisSel_MissionMapIcon_C_SetMutator_Params params;
	params.Mutator = Mutator;
	params.mission = mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.SetButtonState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBasic_ButtonScalable2_C** Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMissionSelection_Mode>* Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_MissionMapIcon_C::SetButtonState(class UBasic_ButtonScalable2_C** Button, bool* Enabled, TEnumAsByte<EMissionSelection_Mode>* Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.SetButtonState");

	UITM_MisSel_MissionMapIcon_C_SetButtonState_Params params;
	params.Button = Button;
	params.Enabled = Enabled;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ShouldEnableSoloButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Show                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_MissionMapIcon_C::ShouldEnableSoloButton(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ShouldEnableSoloButton");

	UITM_MisSel_MissionMapIcon_C_ShouldEnableSoloButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Show != nullptr)
		*Show = params.Show;
}


// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ShouldEnableHostButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Show                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_MissionMapIcon_C::ShouldEnableHostButton(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ShouldEnableHostButton");

	UITM_MisSel_MissionMapIcon_C_ShouldEnableHostButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Show != nullptr)
		*Show = params.Show;
}


// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ShouldEnableJoinButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Show                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_MissionMapIcon_C::ShouldEnableJoinButton(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ShouldEnableJoinButton");

	UITM_MisSel_MissionMapIcon_C_ShouldEnableJoinButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Show != nullptr)
		*Show = params.Show;
}


// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.GetPlayerController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_PlayerController_SpaceRig_C* AsBP_Player_Controller_Space_Rig (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_MissionMapIcon_C::GetPlayerController(class ABP_PlayerController_SpaceRig_C** AsBP_Player_Controller_Space_Rig)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.GetPlayerController");

	UITM_MisSel_MissionMapIcon_C_GetPlayerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsBP_Player_Controller_Space_Rig != nullptr)
		*AsBP_Player_Controller_Space_Rig = params.AsBP_Player_Controller_Space_Rig;
}


// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.SelectOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_MisSel_MissionMapIcon_C::SelectOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.SelectOptions");

	UITM_MisSel_MissionMapIcon_C_SelectOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.GetActiveSelectionMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EMissionSelection_Mode> NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_MissionMapIcon_C::GetActiveSelectionMode(TEnumAsByte<EMissionSelection_Mode>* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.GetActiveSelectionMode");

	UITM_MisSel_MissionMapIcon_C_GetActiveSelectionMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.GetNumberOfActiveMissions
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            sessions                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_MissionMapIcon_C::GetNumberOfActiveMissions(TArray<struct FBlueprintSessionResult>* Array, int* sessions)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.GetNumberOfActiveMissions");

	UITM_MisSel_MissionMapIcon_C_GetNumberOfActiveMissions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (sessions != nullptr)
		*sessions = params.sessions;
}


// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.HasMission
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UITM_MisSel_MissionMapIcon_C::HasMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.HasMission");

	UITM_MisSel_MissionMapIcon_C_HasMission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UITM_MisSel_FullBiome_C** BiomeController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_MisSel_MissionMapIcon_C::SetData(class UGeneratedMission** mission, class UITM_MisSel_FullBiome_C** BiomeController)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.SetData");

	UITM_MisSel_MissionMapIcon_C_SetData_Params params;
	params.mission = mission;
	params.BiomeController = BiomeController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.Reset
// (BlueprintCallable, BlueprintEvent)

void UITM_MisSel_MissionMapIcon_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.Reset");

	UITM_MisSel_MissionMapIcon_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.Unselect
// (BlueprintCallable, BlueprintEvent)

void UITM_MisSel_MissionMapIcon_C::Unselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.Unselect");

	UITM_MisSel_MissionMapIcon_C_Unselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_MisSel_MissionMapIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.Construct");

	UITM_MisSel_MissionMapIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ServerUpdate
// (BlueprintCallable, BlueprintEvent)

void UITM_MisSel_MissionMapIcon_C::ServerUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ServerUpdate");

	UITM_MisSel_MissionMapIcon_C_ServerUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__Button_Selection_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_MisSel_MissionMapIcon_C::BndEvt__Button_Selection_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__Button_Selection_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature");

	UITM_MisSel_MissionMapIcon_C_BndEvt__Button_Selection_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__Button_Selection_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_MisSel_MissionMapIcon_C::BndEvt__Button_Selection_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__Button_Selection_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UITM_MisSel_MissionMapIcon_C_BndEvt__Button_Selection_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_MisSel_MissionMapIcon_C::BndEvt__Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UITM_MisSel_MissionMapIcon_C_BndEvt__Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__BTN_Join_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UITM_MisSel_MissionMapIcon_C::BndEvt__BTN_Join_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__BTN_Join_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UITM_MisSel_MissionMapIcon_C_BndEvt__BTN_Join_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__BTN_Host_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UITM_MisSel_MissionMapIcon_C::BndEvt__BTN_Host_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__BTN_Host_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UITM_MisSel_MissionMapIcon_C_BndEvt__BTN_Host_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__BTN_Solo_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)

void UITM_MisSel_MissionMapIcon_C::BndEvt__BTN_Solo_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__BTN_Solo_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UITM_MisSel_MissionMapIcon_C_BndEvt__BTN_Solo_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_MissionMapIcon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.PreConstruct");

	UITM_MisSel_MissionMapIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__BTN_HostPublic_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature
// (BlueprintEvent)

void UITM_MisSel_MissionMapIcon_C::BndEvt__BTN_HostPublic_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__BTN_HostPublic_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature");

	UITM_MisSel_MissionMapIcon_C_BndEvt__BTN_HostPublic_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.OnTeamMemberCampaignMissionChangedEvent
// (BlueprintCallable, BlueprintEvent)

void UITM_MisSel_MissionMapIcon_C::OnTeamMemberCampaignMissionChangedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.OnTeamMemberCampaignMissionChangedEvent");

	UITM_MisSel_MissionMapIcon_C_OnTeamMemberCampaignMissionChangedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ExecuteUbergraph_ITM_MisSel_MissionMapIcon
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_MissionMapIcon_C::ExecuteUbergraph_ITM_MisSel_MissionMapIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ExecuteUbergraph_ITM_MisSel_MissionMapIcon");

	UITM_MisSel_MissionMapIcon_C_ExecuteUbergraph_ITM_MisSel_MissionMapIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
