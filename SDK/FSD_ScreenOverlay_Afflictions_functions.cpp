// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ScreenOverlay_Afflictions_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.FindOverlayWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerAfflictionOverlay** OverlayData                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          CreateIfNew                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPlayerAfflictionOverlayWidget* OutWidget                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UScreenOverlay_Afflictions_C::FindOverlayWidget(class UPlayerAfflictionOverlay** OverlayData, bool* CreateIfNew, class UPlayerAfflictionOverlayWidget** OutWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.FindOverlayWidget");

	UScreenOverlay_Afflictions_C_FindOverlayWidget_Params params;
	params.OverlayData = OverlayData;
	params.CreateIfNew = CreateIfNew;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutWidget != nullptr)
		*OutWidget = params.OutWidget;
}


// Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScreenOverlay_Afflictions_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.Construct");

	UScreenOverlay_Afflictions_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.OnShowOverlay_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerAfflictionOverlay** Overlay                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenOverlay_Afflictions_C::OnShowOverlay_Event(class UPlayerAfflictionOverlay** Overlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.OnShowOverlay_Event");

	UScreenOverlay_Afflictions_C_OnShowOverlay_Event_Params params;
	params.Overlay = Overlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.OnHideOverlay_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerAfflictionOverlay** Overlay                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenOverlay_Afflictions_C::OnHideOverlay_Event(class UPlayerAfflictionOverlay** Overlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.OnHideOverlay_Event");

	UScreenOverlay_Afflictions_C_OnHideOverlay_Event_Params params;
	params.Overlay = Overlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.ExecuteUbergraph_ScreenOverlay_Afflictions
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenOverlay_Afflictions_C::ExecuteUbergraph_ScreenOverlay_Afflictions(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.ExecuteUbergraph_ScreenOverlay_Afflictions");

	UScreenOverlay_Afflictions_C_ExecuteUbergraph_ScreenOverlay_Afflictions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
