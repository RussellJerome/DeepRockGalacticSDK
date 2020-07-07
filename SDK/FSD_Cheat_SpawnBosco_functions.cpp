// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_SpawnBosco_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cheat_SpawnBosco.Cheat_SpawnBosco_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCheat_SpawnBosco_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SpawnBosco.Cheat_SpawnBosco_C.Construct");

	UCheat_SpawnBosco_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_SpawnBosco.Cheat_SpawnBosco_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCheat_SpawnBosco_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SpawnBosco.Cheat_SpawnBosco_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");

	UCheat_SpawnBosco_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_SpawnBosco.Cheat_SpawnBosco_C.OnBoscoChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABosco**                 Bosco                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_SpawnBosco_C::OnBoscoChanged_Event(class ABosco** Bosco)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SpawnBosco.Cheat_SpawnBosco_C.OnBoscoChanged_Event");

	UCheat_SpawnBosco_C_OnBoscoChanged_Event_Params params;
	params.Bosco = Bosco;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_SpawnBosco.Cheat_SpawnBosco_C.ExecuteUbergraph_Cheat_SpawnBosco
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_SpawnBosco_C::ExecuteUbergraph_Cheat_SpawnBosco(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SpawnBosco.Cheat_SpawnBosco_C.ExecuteUbergraph_Cheat_SpawnBosco");

	UCheat_SpawnBosco_C_ExecuteUbergraph_Cheat_SpawnBosco_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_SpawnBosco.Cheat_SpawnBosco_C.Bosco spawn requested__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCheat_SpawnBosco_C::Bosco_spawn_requested__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SpawnBosco.Cheat_SpawnBosco_C.Bosco spawn requested__DelegateSignature");

	UCheat_SpawnBosco_C_Bosco_spawn_requested__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
