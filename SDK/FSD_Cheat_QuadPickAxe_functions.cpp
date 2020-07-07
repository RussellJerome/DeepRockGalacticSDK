// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_QuadPickAxe_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cheat_QuadPickAxe.Cheat_QuadPickAxe_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCheat_QuadPickAxe_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_QuadPickAxe.Cheat_QuadPickAxe_C.Construct");

	UCheat_QuadPickAxe_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_QuadPickAxe.Cheat_QuadPickAxe_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_QuadPickAxe_C::BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_QuadPickAxe.Cheat_QuadPickAxe_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature");

	UCheat_QuadPickAxe_C_BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_QuadPickAxe.Cheat_QuadPickAxe_C.ExecuteUbergraph_Cheat_QuadPickAxe
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_QuadPickAxe_C::ExecuteUbergraph_Cheat_QuadPickAxe(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_QuadPickAxe.Cheat_QuadPickAxe_C.ExecuteUbergraph_Cheat_QuadPickAxe");

	UCheat_QuadPickAxe_C_ExecuteUbergraph_Cheat_QuadPickAxe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
