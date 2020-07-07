// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_FlatButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_FlatButton.Basic_FlatButton_C.IsInteractable
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBasic_FlatButton_C::IsInteractable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_FlatButton.Basic_FlatButton_C.IsInteractable");

	UBasic_FlatButton_C_IsInteractable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic_FlatButton.Basic_FlatButton_C.SetStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>*  InBaseColor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENUM_MenuColors>*  InHoverColor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENUM_MenuColors>*  InTextColor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENUM_MenuColors>*  InTextHoverColor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_FlatButton_C::SetStyle(TEnumAsByte<ENUM_MenuColors>* InBaseColor, TEnumAsByte<ENUM_MenuColors>* InHoverColor, TEnumAsByte<ENUM_MenuColors>* InTextColor, TEnumAsByte<ENUM_MenuColors>* InTextHoverColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_FlatButton.Basic_FlatButton_C.SetStyle");

	UBasic_FlatButton_C_SetStyle_Params params;
	params.InBaseColor = InBaseColor;
	params.InHoverColor = InHoverColor;
	params.InTextColor = InTextColor;
	params.InTextHoverColor = InTextHoverColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_FlatButton.Basic_FlatButton_C.CreateMenuStyle
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>*  ColorSelector                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             SlateBrush                     (Parm, OutParm)

void UBasic_FlatButton_C::CreateMenuStyle(TEnumAsByte<ENUM_MenuColors>* ColorSelector, struct FSlateBrush* SlateBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_FlatButton.Basic_FlatButton_C.CreateMenuStyle");

	UBasic_FlatButton_C_CreateMenuStyle_Params params;
	params.ColorSelector = ColorSelector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlateBrush != nullptr)
		*SlateBrush = params.SlateBrush;
}


// Function Basic_FlatButton.Basic_FlatButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_FlatButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_FlatButton.Basic_FlatButton_C.PreConstruct");

	UBasic_FlatButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_FlatButton.Basic_FlatButton_C.Set Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          UpperCase                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_FlatButton_C::Set_Text(struct FText* Text, bool* UpperCase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_FlatButton.Basic_FlatButton_C.Set Text");

	UBasic_FlatButton_C_Set_Text_Params params;
	params.Text = Text;
	params.UpperCase = UpperCase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_FlatButton.Basic_FlatButton_C.Set Font Size
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           FontSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_FlatButton_C::Set_Font_Size(int* FontSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_FlatButton.Basic_FlatButton_C.Set Font Size");

	UBasic_FlatButton_C_Set_Font_Size_Params params;
	params.FontSize = FontSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_FlatButton.Basic_FlatButton_C.BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_FlatButton_C::BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_FlatButton.Basic_FlatButton_C.BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBasic_FlatButton_C_BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_FlatButton.Basic_FlatButton_C.BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_FlatButton_C::BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_FlatButton.Basic_FlatButton_C.BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UBasic_FlatButton_C_BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_FlatButton.Basic_FlatButton_C.BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_FlatButton_C::BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_FlatButton.Basic_FlatButton_C.BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UBasic_FlatButton_C_BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_FlatButton.Basic_FlatButton_C.ExecuteUbergraph_Basic_FlatButton
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_FlatButton_C::ExecuteUbergraph_Basic_FlatButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_FlatButton.Basic_FlatButton_C.ExecuteUbergraph_Basic_FlatButton");

	UBasic_FlatButton_C_ExecuteUbergraph_Basic_FlatButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_FlatButton.Basic_FlatButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBasic_FlatButton_C**    Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBasic_FlatButton_C::OnClicked__DelegateSignature(class UBasic_FlatButton_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_FlatButton.Basic_FlatButton_C.OnClicked__DelegateSignature");

	UBasic_FlatButton_C_OnClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
