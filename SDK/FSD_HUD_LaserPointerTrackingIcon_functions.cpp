// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_LaserPointerTrackingIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_LaserPointerTrackingIcon_C::UpdateVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.UpdateVisibility");

	UHUD_LaserPointerTrackingIcon_C_UpdateVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.UpdatePixelOffset
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_LaserPointerTrackingIcon_C::UpdatePixelOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.UpdatePixelOffset");

	UHUD_LaserPointerTrackingIcon_C_UpdatePixelOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.OnInViewChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          inView                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_LaserPointerTrackingIcon_C::OnInViewChanged(bool* inView, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.OnInViewChanged");

	UHUD_LaserPointerTrackingIcon_C_OnInViewChanged_Params params;
	params.inView = inView;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_LaserPointerTrackingIcon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.PreConstruct");

	UHUD_LaserPointerTrackingIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.UpdateArrow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          inView                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_LaserPointerTrackingIcon_C::UpdateArrow(bool* inView, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.UpdateArrow");

	UHUD_LaserPointerTrackingIcon_C_UpdateArrow_Params params;
	params.inView = inView;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.OnShow
// (Event, Public, BlueprintEvent)

void UHUD_LaserPointerTrackingIcon_C::OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.OnShow");

	UHUD_LaserPointerTrackingIcon_C_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.OnTargetDistanceChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_LaserPointerTrackingIcon_C::OnTargetDistanceChanged(float* distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.OnTargetDistanceChanged");

	UHUD_LaserPointerTrackingIcon_C_OnTargetDistanceChanged_Params params;
	params.distance = distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.OnTargetSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 NewTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_LaserPointerTrackingIcon_C::OnTargetSet(class AActor** NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.OnTargetSet");

	UHUD_LaserPointerTrackingIcon_C_OnTargetSet_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.ExecuteUbergraph_HUD_LaserPointerTrackingIcon
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_LaserPointerTrackingIcon_C::ExecuteUbergraph_HUD_LaserPointerTrackingIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.ExecuteUbergraph_HUD_LaserPointerTrackingIcon");

	UHUD_LaserPointerTrackingIcon_C_ExecuteUbergraph_HUD_LaserPointerTrackingIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
