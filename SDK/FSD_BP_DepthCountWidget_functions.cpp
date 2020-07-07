// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_DepthCountWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DepthCountWidget.BP_DepthCountWidget_C.UpdateDepthText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_DepthCountWidget_C::UpdateDepthText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DepthCountWidget.BP_DepthCountWidget_C.UpdateDepthText");

	UBP_DepthCountWidget_C_UpdateDepthText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DepthCountWidget.BP_DepthCountWidget_C.SetProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DepthCountWidget_C::SetProgress(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DepthCountWidget.BP_DepthCountWidget_C.SetProgress");

	UBP_DepthCountWidget_C_SetProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DepthCountWidget.BP_DepthCountWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_DepthCountWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DepthCountWidget.BP_DepthCountWidget_C.Construct");

	UBP_DepthCountWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DepthCountWidget.BP_DepthCountWidget_C.ExecuteUbergraph_BP_DepthCountWidget
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DepthCountWidget_C::ExecuteUbergraph_BP_DepthCountWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DepthCountWidget.BP_DepthCountWidget_C.ExecuteUbergraph_BP_DepthCountWidget");

	UBP_DepthCountWidget_C_ExecuteUbergraph_BP_DepthCountWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
