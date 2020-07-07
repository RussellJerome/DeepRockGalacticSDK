// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_Ctrl_InvertMouse_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_Ctrl_InvertMouse.Options_Ctrl_InvertMouse_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_Ctrl_InvertMouse_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Ctrl_InvertMouse.Options_Ctrl_InvertMouse_C.Construct");

	UOptions_Ctrl_InvertMouse_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Ctrl_InvertMouse.Options_Ctrl_InvertMouse_C.UINeedsUpdate
// (BlueprintCallable, BlueprintEvent)

void UOptions_Ctrl_InvertMouse_C::UINeedsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Ctrl_InvertMouse.Options_Ctrl_InvertMouse_C.UINeedsUpdate");

	UOptions_Ctrl_InvertMouse_C_UINeedsUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Ctrl_InvertMouse.Options_Ctrl_InvertMouse_C.ShowOptions
// (BlueprintCallable, BlueprintEvent)

void UOptions_Ctrl_InvertMouse_C::ShowOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Ctrl_InvertMouse.Options_Ctrl_InvertMouse_C.ShowOptions");

	UOptions_Ctrl_InvertMouse_C_ShowOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Ctrl_InvertMouse.Options_Ctrl_InvertMouse_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Ctrl_InvertMouse_C::BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool* IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Ctrl_InvertMouse.Options_Ctrl_InvertMouse_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");

	UOptions_Ctrl_InvertMouse_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Ctrl_InvertMouse.Options_Ctrl_InvertMouse_C.ExecuteUbergraph_Options_Ctrl_InvertMouse
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Ctrl_InvertMouse_C::ExecuteUbergraph_Options_Ctrl_InvertMouse(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Ctrl_InvertMouse.Options_Ctrl_InvertMouse_C.ExecuteUbergraph_Options_Ctrl_InvertMouse");

	UOptions_Ctrl_InvertMouse_C_ExecuteUbergraph_Options_Ctrl_InvertMouse_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
