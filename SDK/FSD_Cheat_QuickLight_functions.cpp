// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_QuickLight_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cheat_QuickLight.Cheat_QuickLight_C.BndEvt__Button_67_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCheat_QuickLight_C::BndEvt__Button_67_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_QuickLight.Cheat_QuickLight_C.BndEvt__Button_67_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UCheat_QuickLight_C_BndEvt__Button_67_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_QuickLight.Cheat_QuickLight_C.Spawn Lights
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Owning_character               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_QuickLight_C::Spawn_Lights(class APlayerCharacter** Owning_character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_QuickLight.Cheat_QuickLight_C.Spawn Lights");

	UCheat_QuickLight_C_Spawn_Lights_Params params;
	params.Owning_character = Owning_character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_QuickLight.Cheat_QuickLight_C.ExecuteUbergraph_Cheat_QuickLight
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_QuickLight_C::ExecuteUbergraph_Cheat_QuickLight(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_QuickLight.Cheat_QuickLight_C.ExecuteUbergraph_Cheat_QuickLight");

	UCheat_QuickLight_C_ExecuteUbergraph_Cheat_QuickLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
