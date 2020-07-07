// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_HUD_Element_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_HUD_Element.Options_HUD_Element_C.UpdateDots
// (Public, BlueprintCallable, BlueprintEvent)

void UOptions_HUD_Element_C::UpdateDots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_HUD_Element.Options_HUD_Element_C.UpdateDots");

	UOptions_HUD_Element_C_UpdateDots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_HUD_Element.Options_HUD_Element_C.SetupOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOptions_HUD_Element_C::SetupOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_HUD_Element.Options_HUD_Element_C.SetupOptions");

	UOptions_HUD_Element_C_SetupOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_HUD_Element.Options_HUD_Element_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_HUD_Element_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_HUD_Element.Options_HUD_Element_C.PreConstruct");

	UOptions_HUD_Element_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_HUD_Element.Options_HUD_Element_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FText*                  Value                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_HUD_Element_C::BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(struct FText* Value, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_HUD_Element.Options_HUD_Element_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature");

	UOptions_HUD_Element_C_BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_HUD_Element.Options_HUD_Element_C.BndEvt__Basic_Option_K2Node_ComponentBoundEvent_1_OnHoveringBegin__DelegateSignature
// (BlueprintEvent)

void UOptions_HUD_Element_C::BndEvt__Basic_Option_K2Node_ComponentBoundEvent_1_OnHoveringBegin__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_HUD_Element.Options_HUD_Element_C.BndEvt__Basic_Option_K2Node_ComponentBoundEvent_1_OnHoveringBegin__DelegateSignature");

	UOptions_HUD_Element_C_BndEvt__Basic_Option_K2Node_ComponentBoundEvent_1_OnHoveringBegin__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_HUD_Element.Options_HUD_Element_C.BndEvt__Basic_Option_K2Node_ComponentBoundEvent_2_OnHoveringEnd__DelegateSignature
// (BlueprintEvent)

void UOptions_HUD_Element_C::BndEvt__Basic_Option_K2Node_ComponentBoundEvent_2_OnHoveringEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_HUD_Element.Options_HUD_Element_C.BndEvt__Basic_Option_K2Node_ComponentBoundEvent_2_OnHoveringEnd__DelegateSignature");

	UOptions_HUD_Element_C_BndEvt__Basic_Option_K2Node_ComponentBoundEvent_2_OnHoveringEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_HUD_Element.Options_HUD_Element_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptions_HUD_Element_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_HUD_Element.Options_HUD_Element_C.Construct");

	UOptions_HUD_Element_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_HUD_Element.Options_HUD_Element_C.OnModeChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHUDVisibilityGroup**    Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EHUDVisibilityMode*            Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_HUD_Element_C::OnModeChanged_Event(class UHUDVisibilityGroup** Group, EHUDVisibilityMode* Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_HUD_Element.Options_HUD_Element_C.OnModeChanged_Event");

	UOptions_HUD_Element_C_OnModeChanged_Event_Params params;
	params.Group = Group;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Options_HUD_Element.Options_HUD_Element_C.ExecuteUbergraph_Options_HUD_Element
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptions_HUD_Element_C::ExecuteUbergraph_Options_HUD_Element(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_HUD_Element.Options_HUD_Element_C.ExecuteUbergraph_Options_HUD_Element");

	UOptions_HUD_Element_C_ExecuteUbergraph_Options_HUD_Element_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
