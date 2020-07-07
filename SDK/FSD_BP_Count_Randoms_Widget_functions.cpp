// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Count_Randoms_Widget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Count_Randoms_Widget.BP_Count_Randoms_Widget_C.UpdateDepthText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_Count_Randoms_Widget_C::UpdateDepthText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Count_Randoms_Widget.BP_Count_Randoms_Widget_C.UpdateDepthText");

	UBP_Count_Randoms_Widget_C_UpdateDepthText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Count_Randoms_Widget.BP_Count_Randoms_Widget_C.SetProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Count_Randoms_Widget_C::SetProgress(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Count_Randoms_Widget.BP_Count_Randoms_Widget_C.SetProgress");

	UBP_Count_Randoms_Widget_C_SetProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Count_Randoms_Widget.BP_Count_Randoms_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_Count_Randoms_Widget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Count_Randoms_Widget.BP_Count_Randoms_Widget_C.Construct");

	UBP_Count_Randoms_Widget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Count_Randoms_Widget.BP_Count_Randoms_Widget_C.ExecuteUbergraph_BP_Count_Randoms_Widget
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Count_Randoms_Widget_C::ExecuteUbergraph_BP_Count_Randoms_Widget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Count_Randoms_Widget.BP_Count_Randoms_Widget_C.ExecuteUbergraph_BP_Count_Randoms_Widget");

	UBP_Count_Randoms_Widget_C_ExecuteUbergraph_BP_Count_Randoms_Widget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
