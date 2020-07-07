// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Widget_DropPod_AltitudeMeter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C.TriggerCountdown
// (BlueprintCallable, BlueprintEvent)

void ABP_Widget_DropPod_AltitudeMeter_C::TriggerCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C.TriggerCountdown");

	ABP_Widget_DropPod_AltitudeMeter_C_TriggerCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Widget_DropPod_AltitudeMeter_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C.ReceiveTick");

	ABP_Widget_DropPod_AltitudeMeter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Widget_DropPod_AltitudeMeter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C.ReceiveBeginPlay");

	ABP_Widget_DropPod_AltitudeMeter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C.OnMissionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      OutGeneratedMission            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Widget_DropPod_AltitudeMeter_C::OnMissionChanged(class UGeneratedMission** OutGeneratedMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C.OnMissionChanged");

	ABP_Widget_DropPod_AltitudeMeter_C_OnMissionChanged_Params params;
	params.OutGeneratedMission = OutGeneratedMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C.ExecuteUbergraph_BP_Widget_DropPod_AltitudeMeter
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Widget_DropPod_AltitudeMeter_C::ExecuteUbergraph_BP_Widget_DropPod_AltitudeMeter(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C.ExecuteUbergraph_BP_Widget_DropPod_AltitudeMeter");

	ABP_Widget_DropPod_AltitudeMeter_C_ExecuteUbergraph_BP_Widget_DropPod_AltitudeMeter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
