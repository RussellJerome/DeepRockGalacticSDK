// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Widget_DropPod_DangerLevel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.AdjustBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DropPod_DangerLevel_C::AdjustBar(float* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.AdjustBar");

	UWidget_DropPod_DangerLevel_C_AdjustBar_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.SetGeneratedMission
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      In_Mission                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DropPod_DangerLevel_C::SetGeneratedMission(class UGeneratedMission** In_Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.SetGeneratedMission");

	UWidget_DropPod_DangerLevel_C_SetGeneratedMission_Params params;
	params.In_Mission = In_Mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_DropPod_DangerLevel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.Construct");

	UWidget_DropPod_DangerLevel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DropPod_DangerLevel_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.Tick");

	UWidget_DropPod_DangerLevel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.OnGeneratedMissionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeneratedMission**      OutGeneratedMission            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DropPod_DangerLevel_C::OnGeneratedMissionChanged(class UGeneratedMission** OutGeneratedMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.OnGeneratedMissionChanged");

	UWidget_DropPod_DangerLevel_C_OnGeneratedMissionChanged_Params params;
	params.OutGeneratedMission = OutGeneratedMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.ExecuteUbergraph_Widget_DropPod_DangerLevel
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_DropPod_DangerLevel_C::ExecuteUbergraph_Widget_DropPod_DangerLevel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DropPod_DangerLevel.Widget_DropPod_DangerLevel_C.ExecuteUbergraph_Widget_DropPod_DangerLevel");

	UWidget_DropPod_DangerLevel_C_ExecuteUbergraph_Widget_DropPod_DangerLevel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
