// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_DamageClass_Indicator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.UpdateThisSpacer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                ThisSpacer                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPanelWidget**           ThisAfflictionBox              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPanelWidget**           OtherAfflictionBox             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          TemperatureIsVisible           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_DamageClass_Indicator_C::UpdateThisSpacer(class UWidget** ThisSpacer, class UPanelWidget** ThisAfflictionBox, class UPanelWidget** OtherAfflictionBox, bool* TemperatureIsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.UpdateThisSpacer");

	UHUD_DamageClass_Indicator_C_UpdateThisSpacer_Params params;
	params.ThisSpacer = ThisSpacer;
	params.ThisAfflictionBox = ThisAfflictionBox;
	params.OtherAfflictionBox = OtherAfflictionBox;
	params.TemperatureIsVisible = TemperatureIsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.UpdateSpacers
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_DamageClass_Indicator_C::UpdateSpacers()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.UpdateSpacers");

	UHUD_DamageClass_Indicator_C_UpdateSpacers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.ClearIcons
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_DamageClass_Indicator_C::ClearIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.ClearIcons");

	UHUD_DamageClass_Indicator_C_ClearIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.CreateIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPawnAffliction**        affliction                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UHUD_DamageClass_Item_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UHUD_DamageClass_Item_C* UHUD_DamageClass_Indicator_C::CreateIcon(class UPawnAffliction** affliction)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.CreateIcon");

	UHUD_DamageClass_Indicator_C_CreateIcon_Params params;
	params.affliction = affliction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_DamageClass_Indicator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.Construct");

	UHUD_DamageClass_Indicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.OnAfflictionActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPawnAffliction**        affliction                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_DamageClass_Indicator_C::OnAfflictionActivated(class UPawnAffliction** affliction)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.OnAfflictionActivated");

	UHUD_DamageClass_Indicator_C_OnAfflictionActivated_Params params;
	params.affliction = affliction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.OnAfflictionDeactivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPawnAffliction**        affliction                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_DamageClass_Indicator_C::OnAfflictionDeactivated(class UPawnAffliction** affliction)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.OnAfflictionDeactivated");

	UHUD_DamageClass_Indicator_C_OnAfflictionDeactivated_Params params;
	params.affliction = affliction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.Elapsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHUD_DamageClass_Item_C** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_DamageClass_Indicator_C::Elapsed(class UHUD_DamageClass_Item_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.Elapsed");

	UHUD_DamageClass_Indicator_C_Elapsed_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.BndEvt__HUD_PlayerTemperature_K2Node_ComponentBoundEvent_0_VisibilityChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget**            Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_DamageClass_Indicator_C::BndEvt__HUD_PlayerTemperature_K2Node_ComponentBoundEvent_0_VisibilityChangedDelegate__DelegateSignature(class UUserWidget** Widget, bool* IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.BndEvt__HUD_PlayerTemperature_K2Node_ComponentBoundEvent_0_VisibilityChangedDelegate__DelegateSignature");

	UHUD_DamageClass_Indicator_C_BndEvt__HUD_PlayerTemperature_K2Node_ComponentBoundEvent_0_VisibilityChangedDelegate__DelegateSignature_Params params;
	params.Widget = Widget;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.ExecuteUbergraph_HUD_DamageClass_Indicator
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_DamageClass_Indicator_C::ExecuteUbergraph_HUD_DamageClass_Indicator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.ExecuteUbergraph_HUD_DamageClass_Indicator");

	UHUD_DamageClass_Indicator_C_ExecuteUbergraph_HUD_DamageClass_Indicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
