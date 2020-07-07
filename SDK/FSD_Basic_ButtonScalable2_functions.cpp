// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_ButtonScalable2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.HideCountDown
// (Public, BlueprintCallable, BlueprintEvent)

void UBasic_ButtonScalable2_C::HideCountDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.HideCountDown");

	UBasic_ButtonScalable2_C_HideCountDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetCountDown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SecondsRemaining               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MinimumIntegralDigits          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ButtonScalable2_C::SetCountDown(int* SecondsRemaining, int* MinimumIntegralDigits)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetCountDown");

	UBasic_ButtonScalable2_C_SetCountDown_Params params;
	params.SecondsRemaining = SecondsRemaining;
	params.MinimumIntegralDigits = MinimumIntegralDigits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetBackgroundColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>*  ColorSelector                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ButtonScalable2_C::SetBackgroundColor(TEnumAsByte<ENUM_MenuColors>* ColorSelector)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetBackgroundColor");

	UBasic_ButtonScalable2_C_SetBackgroundColor_Params params;
	params.ColorSelector = ColorSelector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetIconBrush
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// struct FSlateBrush*            InBrush                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FMargin*                InPadding                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ButtonScalable2_C::SetIconBrush(struct FSlateBrush* InBrush, struct FMargin* InPadding, class UImage** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetIconBrush");

	UBasic_ButtonScalable2_C_SetIconBrush_Params params;
	params.InBrush = InBrush;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetTints
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           PC__Icon_Tint                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Controller_Icon_Tint           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ButtonScalable2_C::SetTints(struct FLinearColor* PC__Icon_Tint, struct FLinearColor* Controller_Icon_Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetTints");

	UBasic_ButtonScalable2_C_SetTints_Params params;
	params.PC__Icon_Tint = PC__Icon_Tint;
	params.Controller_Icon_Tint = Controller_Icon_Tint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetIconTint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           PC__Icon_Tint                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Controller_Icon_Tint           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ButtonScalable2_C::SetIconTint(struct FLinearColor* PC__Icon_Tint, struct FLinearColor* Controller_Icon_Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetIconTint");

	UBasic_ButtonScalable2_C_SetIconTint_Params params;
	params.PC__Icon_Tint = PC__Icon_Tint;
	params.Controller_Icon_Tint = Controller_Icon_Tint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnNewLine
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ButtonScalable2_C::OnNewLine(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnNewLine");

	UBasic_ButtonScalable2_C_OnNewLine_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnAddIcon
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// class FString*                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FActionIconMapping*     Icon                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBasic_ButtonScalable2_C::OnAddIcon(class FString* Name, struct FActionIconMapping* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnAddIcon");

	UBasic_ButtonScalable2_C_OnAddIcon_Params params;
	params.Name = Name;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnAddKeyName
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString*                 Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBasic_ButtonScalable2_C::OnAddKeyName(class FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnAddKeyName");

	UBasic_ButtonScalable2_C_OnAddKeyName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ButtonScalable2_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.PreConstruct");

	UBasic_ButtonScalable2_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_ButtonScalable2_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBasic_ButtonScalable2_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_ButtonScalable2_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UBasic_ButtonScalable2_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_ButtonScalable2_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UBasic_ButtonScalable2_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnAddString
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString*                 Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBasic_ButtonScalable2_C::OnAddString(class FString* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnAddString");

	UBasic_ButtonScalable2_C_OnAddString_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnReset
// (Event, Protected, BlueprintEvent)

void UBasic_ButtonScalable2_C::OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnReset");

	UBasic_ButtonScalable2_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.Toggle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsToggledOn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ButtonScalable2_C::Toggle(bool* IsToggledOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.Toggle");

	UBasic_ButtonScalable2_C_Toggle_Params params;
	params.IsToggledOn = IsToggledOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetToggled
// (BlueprintCallable, BlueprintEvent)

void UBasic_ButtonScalable2_C::SetToggled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetToggled");

	UBasic_ButtonScalable2_C_SetToggled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetUntoggled
// (BlueprintCallable, BlueprintEvent)

void UBasic_ButtonScalable2_C::SetUntoggled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.SetUntoggled");

	UBasic_ButtonScalable2_C_SetUntoggled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.Click
// (BlueprintCallable, BlueprintEvent)

void UBasic_ButtonScalable2_C::Click()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.Click");

	UBasic_ButtonScalable2_C_Click_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.ExecuteUbergraph_Basic_ButtonScalable2
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ButtonScalable2_C::ExecuteUbergraph_Basic_ButtonScalable2(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.ExecuteUbergraph_Basic_ButtonScalable2");

	UBasic_ButtonScalable2_C_ExecuteUbergraph_Basic_ButtonScalable2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBasic_ButtonScalable2_C::OnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnUnhovered__DelegateSignature");

	UBasic_ButtonScalable2_C_OnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBasic_ButtonScalable2_C::OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnHovered__DelegateSignature");

	UBasic_ButtonScalable2_C_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBasic_ButtonScalable2_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonScalable2.Basic_ButtonScalable2_C.OnClicked__DelegateSignature");

	UBasic_ButtonScalable2_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
