// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ModOption_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ModOption.ModOption_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UModOption_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModOption.ModOption_C.Construct");

	UModOption_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModOption.ModOption_C.BndEvt__Button_373_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UModOption_C::BndEvt__Button_373_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModOption.ModOption_C.BndEvt__Button_373_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UModOption_C_BndEvt__Button_373_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ModOption.ModOption_C.ExecuteUbergraph_ModOption
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UModOption_C::ExecuteUbergraph_ModOption(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ModOption.ModOption_C.ExecuteUbergraph_ModOption");

	UModOption_C_ExecuteUbergraph_ModOption_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
