// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_ButtonTab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_ButtonTab.Basic_ButtonTab_C.SetIconRightVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ButtonTab_C::SetIconRightVisible(bool* IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonTab.Basic_ButtonTab_C.SetIconRightVisible");

	UBasic_ButtonTab_C_SetIconRightVisible_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonTab.Basic_ButtonTab_C.SetIconRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush*            Brush                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBasic_ButtonTab_C::SetIconRight(struct FSlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonTab.Basic_ButtonTab_C.SetIconRight");

	UBasic_ButtonTab_C_SetIconRight_Params params;
	params.Brush = Brush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonTab.Basic_ButtonTab_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ButtonTab_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonTab.Basic_ButtonTab_C.PreConstruct");

	UBasic_ButtonTab_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonTab.Basic_ButtonTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_ButtonTab_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonTab.Basic_ButtonTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UBasic_ButtonTab_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonTab.Basic_ButtonTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_ButtonTab_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonTab.Basic_ButtonTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UBasic_ButtonTab_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonTab.Basic_ButtonTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_ButtonTab_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonTab.Basic_ButtonTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");

	UBasic_ButtonTab_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonTab.Basic_ButtonTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_ButtonTab_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonTab.Basic_ButtonTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature");

	UBasic_ButtonTab_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonTab.Basic_ButtonTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_ButtonTab_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonTab.Basic_ButtonTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");

	UBasic_ButtonTab_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonTab.Basic_ButtonTab_C.Toggle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          on                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ButtonTab_C::Toggle(bool* on)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonTab.Basic_ButtonTab_C.Toggle");

	UBasic_ButtonTab_C_Toggle_Params params;
	params.on = on;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonTab.Basic_ButtonTab_C.UpdateLook
// (BlueprintCallable, BlueprintEvent)

void UBasic_ButtonTab_C::UpdateLook()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonTab.Basic_ButtonTab_C.UpdateLook");

	UBasic_ButtonTab_C_UpdateLook_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonTab.Basic_ButtonTab_C.SilentToggle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          on                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ButtonTab_C::SilentToggle(bool* on)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonTab.Basic_ButtonTab_C.SilentToggle");

	UBasic_ButtonTab_C_SilentToggle_Params params;
	params.on = on;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonTab.Basic_ButtonTab_C.ExecuteUbergraph_Basic_ButtonTab
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ButtonTab_C::ExecuteUbergraph_Basic_ButtonTab(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonTab.Basic_ButtonTab_C.ExecuteUbergraph_Basic_ButtonTab");

	UBasic_ButtonTab_C_ExecuteUbergraph_Basic_ButtonTab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonTab.Basic_ButtonTab_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBasic_ButtonTab_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonTab.Basic_ButtonTab_C.OnClicked__DelegateSignature");

	UBasic_ButtonTab_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
