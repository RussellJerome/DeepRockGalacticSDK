// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Widget_DropPod_SeatMonitor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_DropPod_SeatMonitor.Widget_DropPod_SeatMonitor_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_DropPod_SeatMonitor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_SeatMonitor.Widget_DropPod_SeatMonitor_C.Construct");

	UWidget_DropPod_SeatMonitor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_SeatMonitor.Widget_DropPod_SeatMonitor_C.OnGeneratedMissionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      OutGeneratedMission            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DropPod_SeatMonitor_C::OnGeneratedMissionChanged(class UGeneratedMission** OutGeneratedMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_SeatMonitor.Widget_DropPod_SeatMonitor_C.OnGeneratedMissionChanged");

	UWidget_DropPod_SeatMonitor_C_OnGeneratedMissionChanged_Params params;
	params.OutGeneratedMission = OutGeneratedMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_SeatMonitor.Widget_DropPod_SeatMonitor_C.ExecuteUbergraph_Widget_DropPod_SeatMonitor
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DropPod_SeatMonitor_C::ExecuteUbergraph_Widget_DropPod_SeatMonitor(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_SeatMonitor.Widget_DropPod_SeatMonitor_C.ExecuteUbergraph_Widget_DropPod_SeatMonitor");

	UWidget_DropPod_SeatMonitor_C_ExecuteUbergraph_Widget_DropPod_SeatMonitor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
