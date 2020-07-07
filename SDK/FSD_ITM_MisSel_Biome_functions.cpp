// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MisSel_Biome_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.GetSoundCoordinate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 SoundWorldPos                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_Biome_C::GetSoundCoordinate(struct FVector* SoundWorldPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.GetSoundCoordinate");

	UITM_MisSel_Biome_C_GetSoundCoordinate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SoundWorldPos != nullptr)
		*SoundWorldPos = params.SoundWorldPos;
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.SetCampaignVisiblity
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_MisSel_Biome_C::SetCampaignVisiblity()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.SetCampaignVisiblity");

	UITM_MisSel_Biome_C_SetCampaignVisiblity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.IsUnlocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UITM_MisSel_Biome_C::IsUnlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.IsUnlocked");

	UITM_MisSel_Biome_C_IsUnlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.CreateMissionIcons
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UGeneratedMission*> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UITM_MisSel_Biome_C::CreateMissionIcons(TArray<class UGeneratedMission*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.CreateMissionIcons");

	UITM_MisSel_Biome_C_CreateMissionIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.HasMissions
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UITM_MisSel_Biome_C::HasMissions()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.HasMissions");

	UITM_MisSel_Biome_C_HasMissions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.GetController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_PlayerController_SpaceRig_C* AsBP_Player_Controller_Space_Rig (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_Biome_C::GetController(class ABP_PlayerController_SpaceRig_C** AsBP_Player_Controller_Space_Rig)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.GetController");

	UITM_MisSel_Biome_C_GetController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsBP_Player_Controller_Space_Rig != nullptr)
		*AsBP_Player_Controller_Space_Rig = params.AsBP_Player_Controller_Space_Rig;
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.SortMissions
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UGeneratedMission*> missions                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TMap<class UMissionTemplate*, int> MissionCount1                  (Parm, OutParm, ZeroConstructor)

void UITM_MisSel_Biome_C::SortMissions(TArray<class UGeneratedMission*>* missions, TMap<class UMissionTemplate*, int>* MissionCount1)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.SortMissions");

	UITM_MisSel_Biome_C_SortMissions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (missions != nullptr)
		*missions = params.missions;
	if (MissionCount1 != nullptr)
		*MissionCount1 = params.MissionCount1;
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.GetMissionsForBiome
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UGeneratedMission*> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UGeneratedMission*> missions                       (Parm, OutParm, ZeroConstructor)

void UITM_MisSel_Biome_C::GetMissionsForBiome(TArray<class UGeneratedMission*>* Array, TArray<class UGeneratedMission*>* missions)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.GetMissionsForBiome");

	UITM_MisSel_Biome_C_GetMissionsForBiome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (missions != nullptr)
		*missions = params.missions;
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.Unselect
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_MisSel_Biome_C::Unselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.Unselect");

	UITM_MisSel_Biome_C_Unselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.Select
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_MisSel_Biome_C::Select()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.Select");

	UITM_MisSel_Biome_C_Select_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_Biome_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.PreConstruct");

	UITM_MisSel_Biome_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BndEvt__Button_229_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_MisSel_Biome_C::BndEvt__Button_229_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BndEvt__Button_229_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	UITM_MisSel_Biome_C_BndEvt__Button_229_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BndEvt__Button_229_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_MisSel_Biome_C::BndEvt__Button_229_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BndEvt__Button_229_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature");

	UITM_MisSel_Biome_C_BndEvt__Button_229_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.SetData
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UGeneratedMission*>* missions                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          IsNewBiome                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           BiomeIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_Biome_C::SetData(TArray<class UGeneratedMission*>* missions, bool* IsNewBiome, int* BiomeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.SetData");

	UITM_MisSel_Biome_C_SetData_Params params;
	params.missions = missions;
	params.IsNewBiome = IsNewBiome;
	params.BiomeIndex = BiomeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_MisSel_Biome_C::BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UITM_MisSel_Biome_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_Biome_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.Tick");

	UITM_MisSel_Biome_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.ShowUnlockZone
// (BlueprintCallable, BlueprintEvent)

void UITM_MisSel_Biome_C::ShowUnlockZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.ShowUnlockZone");

	UITM_MisSel_Biome_C_ShowUnlockZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.ExecuteUbergraph_ITM_MisSel_Biome
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_Biome_C::ExecuteUbergraph_ITM_MisSel_Biome(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.ExecuteUbergraph_ITM_MisSel_Biome");

	UITM_MisSel_Biome_C_ExecuteUbergraph_ITM_MisSel_Biome_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BiomeSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_MisSel_Biome_C**    Biome                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_MisSel_Biome_C::BiomeSelected__DelegateSignature(class UITM_MisSel_Biome_C** Biome)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_Biome.ITM_MisSel_Biome_C.BiomeSelected__DelegateSignature");

	UITM_MisSel_Biome_C_BiomeSelected__DelegateSignature_Params params;
	params.Biome = Biome;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
