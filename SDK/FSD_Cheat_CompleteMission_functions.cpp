// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_CompleteMission_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cheat_CompleteMission.Cheat_CompleteMission_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCheat_CompleteMission_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_CompleteMission.Cheat_CompleteMission_C.Construct");

	UCheat_CompleteMission_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_CompleteMission.Cheat_CompleteMission_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCheat_CompleteMission_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_CompleteMission.Cheat_CompleteMission_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");

	UCheat_CompleteMission_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_CompleteMission.Cheat_CompleteMission_C.ExecuteUbergraph_Cheat_CompleteMission
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_CompleteMission_C::ExecuteUbergraph_Cheat_CompleteMission(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_CompleteMission.Cheat_CompleteMission_C.ExecuteUbergraph_Cheat_CompleteMission");

	UCheat_CompleteMission_C_ExecuteUbergraph_Cheat_CompleteMission_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
