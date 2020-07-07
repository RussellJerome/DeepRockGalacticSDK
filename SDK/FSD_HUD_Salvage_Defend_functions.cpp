// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Salvage_Defend_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.UpdateDefenderBlocks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           DefenderCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Salvage_Defend_C::UpdateDefenderBlocks(int* DefenderCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.UpdateDefenderBlocks");

	UHUD_Salvage_Defend_C_UpdateDefenderBlocks_Params params;
	params.DefenderCount = DefenderCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.AddDefendersToArray
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_Salvage_Defend_C::AddDefendersToArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.AddDefendersToArray");

	UHUD_Salvage_Defend_C_AddDefendersToArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_Salvage_Defend_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.Construct");

	UHUD_Salvage_Defend_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.ProgressUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewProgress                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Salvage_Defend_C::ProgressUpdated(float* NewProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.ProgressUpdated");

	UHUD_Salvage_Defend_C_ProgressUpdated_Params params;
	params.NewProgress = NewProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Salvage_Defend_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.PreConstruct");

	UHUD_Salvage_Defend_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.DefendersUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           DefenderCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Salvage_Defend_C::DefendersUpdated(int* DefenderCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.DefendersUpdated");

	UHUD_Salvage_Defend_C_DefendersUpdated_Params params;
	params.DefenderCount = DefenderCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.success
// (BlueprintCallable, BlueprintEvent)

void UHUD_Salvage_Defend_C::success()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.success");

	UHUD_Salvage_Defend_C_success_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.ExecuteUbergraph_HUD_Salvage_Defend
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Salvage_Defend_C::ExecuteUbergraph_HUD_Salvage_Defend(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.ExecuteUbergraph_HUD_Salvage_Defend");

	UHUD_Salvage_Defend_C_ExecuteUbergraph_HUD_Salvage_Defend_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
