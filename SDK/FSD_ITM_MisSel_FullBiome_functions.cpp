// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MisSel_FullBiome_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.UpdateMapPan
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              InPosition                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_FullBiome_C::UpdateMapPan(struct FVector2D* InPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.UpdateMapPan");

	UITM_MisSel_FullBiome_C_UpdateMapPan_Params params;
	params.InPosition = InPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.GetRandomFreeMissionSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_MisSel_MissionMapIcon_C* Output                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_MisSel_FullBiome_C::GetRandomFreeMissionSlot(class UITM_MisSel_MissionMapIcon_C** Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.GetRandomFreeMissionSlot");

	UITM_MisSel_FullBiome_C_GetRandomFreeMissionSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.ClearMissions
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_MisSel_FullBiome_C::ClearMissions()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.ClearMissions");

	UITM_MisSel_FullBiome_C_ClearMissions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.GetAllAllMissionSlots
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UITM_MisSel_MissionMapIcon_C*> Items1                         (Parm, OutParm, ZeroConstructor)

void UITM_MisSel_FullBiome_C::GetAllAllMissionSlots(TArray<class UITM_MisSel_MissionMapIcon_C*>* Items1)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.GetAllAllMissionSlots");

	UITM_MisSel_FullBiome_C_GetAllAllMissionSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items1 != nullptr)
		*Items1 = params.Items1;
}


// Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_MisSel_FullBiome_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.Construct");

	UITM_MisSel_FullBiome_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.SetData
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UGeneratedMission*>* missions                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UBiome**                 Biome                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_FullBiome_C::SetData(TArray<class UGeneratedMission*>* missions, class UBiome** Biome)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.SetData");

	UITM_MisSel_FullBiome_C_SetData_Params params;
	params.missions = missions;
	params.Biome = Biome;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.BndEvt__Button_BG_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_MisSel_FullBiome_C::BndEvt__Button_BG_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.BndEvt__Button_BG_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	UITM_MisSel_FullBiome_C_BndEvt__Button_BG_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.ExecuteUbergraph_ITM_MisSel_FullBiome
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MisSel_FullBiome_C::ExecuteUbergraph_ITM_MisSel_FullBiome(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C.ExecuteUbergraph_ITM_MisSel_FullBiome");

	UITM_MisSel_FullBiome_C_ExecuteUbergraph_ITM_MisSel_FullBiome_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
