// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Widget_DropPod_AltitudeMeter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.UpdateHeader
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_DropPod_AltitudeMeter_C::UpdateHeader(struct FText* InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.UpdateHeader");

	UWidget_DropPod_AltitudeMeter_C_UpdateHeader_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.UpdateDepthText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_DropPod_AltitudeMeter_C::UpdateDepthText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.UpdateDepthText");

	UWidget_DropPod_AltitudeMeter_C_UpdateDepthText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.SetProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DropPod_AltitudeMeter_C::SetProgress(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.SetProgress");

	UWidget_DropPod_AltitudeMeter_C_SetProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_DropPod_AltitudeMeter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.Construct");

	UWidget_DropPod_AltitudeMeter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.OnGeneratedMissionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      OutGeneratedMission            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DropPod_AltitudeMeter_C::OnGeneratedMissionChanged(class UGeneratedMission** OutGeneratedMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.OnGeneratedMissionChanged");

	UWidget_DropPod_AltitudeMeter_C_OnGeneratedMissionChanged_Params params;
	params.OutGeneratedMission = OutGeneratedMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.ExecuteUbergraph_Widget_DropPod_AltitudeMeter
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DropPod_AltitudeMeter_C::ExecuteUbergraph_Widget_DropPod_AltitudeMeter(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_AltitudeMeter.Widget_DropPod_AltitudeMeter_C.ExecuteUbergraph_Widget_DropPod_AltitudeMeter");

	UWidget_DropPod_AltitudeMeter_C_ExecuteUbergraph_Widget_DropPod_AltitudeMeter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
