// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD__SCREEN_MissionSelectionMK3_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ClearServerListMissionRestrictions
// (Public, BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::ClearServerListMissionRestrictions()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ClearServerListMissionRestrictions");

	U_SCREEN_MissionSelectionMK3_C_ClearServerListMissionRestrictions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply U_SCREEN_MissionSelectionMK3_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnMouseButtonUp");

	U_SCREEN_MissionSelectionMK3_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.UpdateMapPan
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          SnapToMouse                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::UpdateMapPan(bool* SnapToMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.UpdateMapPan");

	U_SCREEN_MissionSelectionMK3_C_UpdateMapPan_Params params;
	params.SnapToMouse = SnapToMouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.CheckForNewZones
// (Public, BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::CheckForNewZones()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.CheckForNewZones");

	U_SCREEN_MissionSelectionMK3_C_CheckForNewZones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetAvailableBiomes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UITM_MisSel_Biome_C*> AvailableBiomes1               (Parm, OutParm, ZeroConstructor)

void U_SCREEN_MissionSelectionMK3_C::GetAvailableBiomes(TArray<class UITM_MisSel_Biome_C*>* AvailableBiomes1)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetAvailableBiomes");

	U_SCREEN_MissionSelectionMK3_C_GetAvailableBiomes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AvailableBiomes1 != nullptr)
		*AvailableBiomes1 = params.AvailableBiomes1;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EMissionSelection_Mode> Mode                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::GetMode(TEnumAsByte<EMissionSelection_Mode>* Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMode");

	U_SCREEN_MissionSelectionMK3_C_GetMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mode != nullptr)
		*Mode = params.Mode;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShouldEnableQuickJoin
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Show                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::ShouldEnableQuickJoin(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShouldEnableQuickJoin");

	U_SCREEN_MissionSelectionMK3_C_ShouldEnableQuickJoin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Show != nullptr)
		*Show = params.Show;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.CreateWindows
// (Public, BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::CreateWindows()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.CreateWindows");

	U_SCREEN_MissionSelectionMK3_C_CreateWindows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.HandleButtonVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::HandleButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.HandleButtonVisibility");

	U_SCREEN_MissionSelectionMK3_C_HandleButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMission_CheckBiome
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGeneratedMission*       mission                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::GetMission_CheckBiome(class UGeneratedMission** mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMission_CheckBiome");

	U_SCREEN_MissionSelectionMK3_C_GetMission_CheckBiome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (mission != nullptr)
		*mission = params.mission;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply U_SCREEN_MissionSelectionMK3_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnKeyUp");

	U_SCREEN_MissionSelectionMK3_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMission
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGeneratedMission*       mission                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::GetMission(class UGeneratedMission** mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMission");

	U_SCREEN_MissionSelectionMK3_C_GetMission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (mission != nullptr)
		*mission = params.mission;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.IsMissionLocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGeneratedMission**      mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool U_SCREEN_MissionSelectionMK3_C::IsMissionLocked(class UGeneratedMission** mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.IsMissionLocked");

	U_SCREEN_MissionSelectionMK3_C_IsMissionLocked_Params params;
	params.mission = mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetActiveSelectionMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionSelection_Mode> NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::GetActiveSelectionMode(TEnumAsByte<EMissionSelection_Mode>* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetActiveSelectionMode");

	U_SCREEN_MissionSelectionMK3_C_GetActiveSelectionMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_PlayerController_SpaceRig_C* AsBP_Player_Controller_Space_Rig (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::GetController(class ABP_PlayerController_SpaceRig_C** AsBP_Player_Controller_Space_Rig)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetController");

	U_SCREEN_MissionSelectionMK3_C_GetController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsBP_Player_Controller_Space_Rig != nullptr)
		*AsBP_Player_Controller_Space_Rig = params.AsBP_Player_Controller_Space_Rig;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetSRGameMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_SpaceRig_Gamemode_C* AsBP_Space_Rig_Gamemode        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::GetSRGameMode(class ABP_SpaceRig_Gamemode_C** AsBP_Space_Rig_Gamemode)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetSRGameMode");

	U_SCREEN_MissionSelectionMK3_C_GetSRGameMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsBP_Space_Rig_Gamemode != nullptr)
		*AsBP_Space_Rig_Gamemode = params.AsBP_Space_Rig_Gamemode;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMissionBiome
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBiome**                 Biome                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UITM_MisSel_Biome_C*     Array_Element                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::GetMissionBiome(class UBiome** Biome, class UITM_MisSel_Biome_C** Array_Element)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMissionBiome");

	U_SCREEN_MissionSelectionMK3_C_GetMissionBiome_Params params;
	params.Biome = Biome;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array_Element != nullptr)
		*Array_Element = params.Array_Element;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnFailure_ED6FBDF64F71976389535788275C482E
// (BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::OnFailure_ED6FBDF64F71976389535788275C482E()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnFailure_ED6FBDF64F71976389535788275C482E");

	U_SCREEN_MissionSelectionMK3_C_OnFailure_ED6FBDF64F71976389535788275C482E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnSuccess_ED6FBDF64F71976389535788275C482E
// (BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::OnSuccess_ED6FBDF64F71976389535788275C482E()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnSuccess_ED6FBDF64F71976389535788275C482E");

	U_SCREEN_MissionSelectionMK3_C_OnSuccess_ED6FBDF64F71976389535788275C482E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.PreConstruct");

	U_SCREEN_MissionSelectionMK3_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Construct");

	U_SCREEN_MissionSelectionMK3_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__CheckBox_Solo_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::BndEvt__CheckBox_Solo_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__CheckBox_Solo_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature");

	U_SCREEN_MissionSelectionMK3_C_BndEvt__CheckBox_Solo_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BiomeHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_MisSel_Biome_C**    Biome                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::BiomeHovered(class UITM_MisSel_Biome_C** Biome)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BiomeHovered");

	U_SCREEN_MissionSelectionMK3_C_BiomeHovered_Params params;
	params.Biome = Biome;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BiomeSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_MisSel_Biome_C**    Biome                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::BiomeSelected(class UITM_MisSel_Biome_C** Biome)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BiomeSelected");

	U_SCREEN_MissionSelectionMK3_C_BiomeSelected_Params params;
	params.Biome = Biome;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowMission
// (BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::ShowMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowMission");

	U_SCREEN_MissionSelectionMK3_C_ShowMission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowPlanet
// (BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::ShowPlanet()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowPlanet");

	U_SCREEN_MissionSelectionMK3_C_ShowPlanet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.MissionHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsHovering                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::MissionHover(class UGeneratedMission** mission, bool* IsHovering)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.MissionHover");

	U_SCREEN_MissionSelectionMK3_C_MissionHover_Params params;
	params.mission = mission;
	params.IsHovering = IsHovering;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.StartMission
// (BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::StartMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.StartMission");

	U_SCREEN_MissionSelectionMK3_C_StartMission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnStartMission_Event_1
// (BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::OnStartMission_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnStartMission_Event_1");

	U_SCREEN_MissionSelectionMK3_C_OnStartMission_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionSelection_Mode>* Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::ShowMode(TEnumAsByte<EMissionSelection_Mode>* Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowMode");

	U_SCREEN_MissionSelectionMK3_C_ShowMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Back
// (BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::Back()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Back");

	U_SCREEN_MissionSelectionMK3_C_Back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowServerBrowser
// (BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::ShowServerBrowser()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowServerBrowser");

	U_SCREEN_MissionSelectionMK3_C_ShowServerBrowser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	U_SCREEN_MissionSelectionMK3_C_BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__BTN_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::BndEvt__BTN_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__BTN_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	U_SCREEN_MissionSelectionMK3_C_BndEvt__BTN_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.InputSourceChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputSource*                  InputSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::InputSourceChanged(EInputSource* InputSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.InputSourceChanged");

	U_SCREEN_MissionSelectionMK3_C_InputSourceChanged_Params params;
	params.InputSource = InputSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__BTN_Join_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::BndEvt__BTN_Join_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__BTN_Join_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	U_SCREEN_MissionSelectionMK3_C_BndEvt__BTN_Join_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Join
// (BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::Join()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Join");

	U_SCREEN_MissionSelectionMK3_C_Join_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnJoinMission
// (BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::OnJoinMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnJoinMission");

	U_SCREEN_MissionSelectionMK3_C_OnJoinMission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.JoinMission
// (BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::JoinMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.JoinMission");

	U_SCREEN_MissionSelectionMK3_C_JoinMission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnShown
// (Event, Public, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnShown");

	U_SCREEN_MissionSelectionMK3_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Tick");

	U_SCREEN_MissionSelectionMK3_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.MissionSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_MisSel_MissionMapIcon_C** mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::MissionSelected(class UITM_MisSel_MissionMapIcon_C** mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.MissionSelected");

	U_SCREEN_MissionSelectionMK3_C_MissionSelected_Params params;
	params.mission = mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__BTN_Twitch_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::BndEvt__BTN_Twitch_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__BTN_Twitch_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	U_SCREEN_MissionSelectionMK3_C_BndEvt__BTN_Twitch_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.StartSoloMission
// (BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::StartSoloMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.StartSoloMission");

	U_SCREEN_MissionSelectionMK3_C_StartSoloMission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnClosed
// (Event, Public, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnClosed");

	U_SCREEN_MissionSelectionMK3_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.DifficultyChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDifficultySetting**     NewDifficulty                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGeneratedMission**      mission                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::DifficultyChanged(class UDifficultySetting** NewDifficulty, class UGeneratedMission** mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.DifficultyChanged");

	U_SCREEN_MissionSelectionMK3_C_DifficultyChanged_Params params;
	params.NewDifficulty = NewDifficulty;
	params.mission = mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.StartupCameraPan
// (BlueprintCallable, BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::StartupCameraPan()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.StartupCameraPan");

	U_SCREEN_MissionSelectionMK3_C_StartupCameraPan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ExecuteUbergraph__SCREEN_MissionSelectionMK3
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::ExecuteUbergraph__SCREEN_MissionSelectionMK3(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ExecuteUbergraph__SCREEN_MissionSelectionMK3");

	U_SCREEN_MissionSelectionMK3_C_ExecuteUbergraph__SCREEN_MissionSelectionMK3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
