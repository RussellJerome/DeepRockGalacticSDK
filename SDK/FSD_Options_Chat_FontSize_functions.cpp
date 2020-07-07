// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_Chat_FontSize_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_Chat_FontSize.Options_Chat_FontSize_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_Chat_FontSize_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Chat_FontSize.Options_Chat_FontSize_C.Construct");

	UOptions_Chat_FontSize_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Chat_FontSize.Options_Chat_FontSize_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Chat_FontSize_C::BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Chat_FontSize.Options_Chat_FontSize_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature");

	UOptions_Chat_FontSize_C_BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Chat_FontSize.Options_Chat_FontSize_C.ExecuteUbergraph_Options_Chat_FontSize
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Chat_FontSize_C::ExecuteUbergraph_Options_Chat_FontSize(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Chat_FontSize.Options_Chat_FontSize_C.ExecuteUbergraph_Options_Chat_FontSize");

	UOptions_Chat_FontSize_C_ExecuteUbergraph_Options_Chat_FontSize_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_Chat_FontSize.Options_Chat_FontSize_C.OnVolumeChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_Chat_FontSize_C::OnVolumeChanged__DelegateSignature(float* Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_Chat_FontSize.Options_Chat_FontSize_C.OnVolumeChanged__DelegateSignature");

	UOptions_Chat_FontSize_C_OnVolumeChanged__DelegateSignature_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
