// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_SpawnSandStorm_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cheat_SpawnSandStorm.Cheat_SpawnSandStorm_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCheat_SpawnSandStorm_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SpawnSandStorm.Cheat_SpawnSandStorm_C.Construct");

	UCheat_SpawnSandStorm_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_SpawnSandStorm.Cheat_SpawnSandStorm_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCheat_SpawnSandStorm_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SpawnSandStorm.Cheat_SpawnSandStorm_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");

	UCheat_SpawnSandStorm_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_SpawnSandStorm.Cheat_SpawnSandStorm_C.ExecuteUbergraph_Cheat_SpawnSandStorm
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_SpawnSandStorm_C::ExecuteUbergraph_Cheat_SpawnSandStorm(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_SpawnSandStorm.Cheat_SpawnSandStorm_C.ExecuteUbergraph_Cheat_SpawnSandStorm");

	UCheat_SpawnSandStorm_C_ExecuteUbergraph_Cheat_SpawnSandStorm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
