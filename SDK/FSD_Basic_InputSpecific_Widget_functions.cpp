// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_InputSpecific_Widget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_InputSpecific_Widget.Basic_InputSpecific_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBasic_InputSpecific_Widget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_InputSpecific_Widget.Basic_InputSpecific_Widget_C.Construct");

	UBasic_InputSpecific_Widget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_InputSpecific_Widget.Basic_InputSpecific_Widget_C.OnInputSourceChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputSource*                  InputSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_InputSpecific_Widget_C::OnInputSourceChanged(EInputSource* InputSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_InputSpecific_Widget.Basic_InputSpecific_Widget_C.OnInputSourceChanged");

	UBasic_InputSpecific_Widget_C_OnInputSourceChanged_Params params;
	params.InputSource = InputSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_InputSpecific_Widget.Basic_InputSpecific_Widget_C.ExecuteUbergraph_Basic_InputSpecific_Widget
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_InputSpecific_Widget_C::ExecuteUbergraph_Basic_InputSpecific_Widget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_InputSpecific_Widget.Basic_InputSpecific_Widget_C.ExecuteUbergraph_Basic_InputSpecific_Widget");

	UBasic_InputSpecific_Widget_C_ExecuteUbergraph_Basic_InputSpecific_Widget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
