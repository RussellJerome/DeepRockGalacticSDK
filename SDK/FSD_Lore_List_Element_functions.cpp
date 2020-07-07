// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Lore_List_Element_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lore_List_Element.Lore_List_Element_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Header                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  SubText                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D**             BackgroundImage                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           BackgroundColor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D**             FrontImage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FObjectiveMissionIcon*  MissionIcon                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          ShowArrow                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_MM_ButtonStyle>* IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_List_Element_C::SetData(struct FText* Header, struct FText* SubText, class UTexture2D** BackgroundImage, struct FLinearColor* BackgroundColor, class UTexture2D** FrontImage, int* Index, struct FObjectiveMissionIcon* MissionIcon, bool* ShowArrow, TEnumAsByte<E_MM_ButtonStyle>* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_List_Element.Lore_List_Element_C.SetData");

	ULore_List_Element_C_SetData_Params params;
	params.Header = Header;
	params.SubText = SubText;
	params.BackgroundImage = BackgroundImage;
	params.BackgroundColor = BackgroundColor;
	params.FrontImage = FrontImage;
	params.Index = Index;
	params.MissionIcon = MissionIcon;
	params.ShowArrow = ShowArrow;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_List_Element.Lore_List_Element_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULore_List_Element_C::BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_List_Element.Lore_List_Element_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	ULore_List_Element_C_BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_List_Element.Lore_List_Element_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void ULore_List_Element_C::BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_List_Element.Lore_List_Element_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	ULore_List_Element_C_BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_List_Element.Lore_List_Element_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void ULore_List_Element_C::BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_List_Element.Lore_List_Element_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	ULore_List_Element_C_BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_List_Element.Lore_List_Element_C.SetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_List_Element_C::SetSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_List_Element.Lore_List_Element_C.SetSelected");

	ULore_List_Element_C_SetSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_List_Element.Lore_List_Element_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULore_List_Element_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_List_Element.Lore_List_Element_C.Construct");

	ULore_List_Element_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_List_Element.Lore_List_Element_C.UpdateBorder
// (BlueprintCallable, BlueprintEvent)

void ULore_List_Element_C::UpdateBorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_List_Element.Lore_List_Element_C.UpdateBorder");

	ULore_List_Element_C_UpdateBorder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_List_Element.Lore_List_Element_C.PlayIntroAnim
// (BlueprintCallable, BlueprintEvent)

void ULore_List_Element_C::PlayIntroAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_List_Element.Lore_List_Element_C.PlayIntroAnim");

	ULore_List_Element_C_PlayIntroAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_List_Element.Lore_List_Element_C.InputSourceChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputSource*                  InputSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_List_Element_C::InputSourceChanged(EInputSource* InputSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_List_Element.Lore_List_Element_C.InputSourceChanged");

	ULore_List_Element_C_InputSourceChanged_Params params;
	params.InputSource = InputSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_List_Element.Lore_List_Element_C.HideNavIcon
// (BlueprintCallable, BlueprintEvent)

void ULore_List_Element_C::HideNavIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_List_Element.Lore_List_Element_C.HideNavIcon");

	ULore_List_Element_C_HideNavIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_List_Element.Lore_List_Element_C.ExecuteUbergraph_Lore_List_Element
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_List_Element_C::ExecuteUbergraph_Lore_List_Element(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_List_Element.Lore_List_Element_C.ExecuteUbergraph_Lore_List_Element");

	ULore_List_Element_C_ExecuteUbergraph_Lore_List_Element_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_List_Element.Lore_List_Element_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_List_Element_C::OnClicked__DelegateSignature(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_List_Element.Lore_List_Element_C.OnClicked__DelegateSignature");

	ULore_List_Element_C_OnClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
