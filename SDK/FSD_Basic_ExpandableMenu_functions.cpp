// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_ExpandableMenu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.InstaOpenMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Open                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ExpandableMenu_C::InstaOpenMenu(bool* Open)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.InstaOpenMenu");

	UBasic_ExpandableMenu_C_InstaOpenMenu_Params params;
	params.Open = Open;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetFixedSizeOpenHeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Item_Count                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Item_Height                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ExpandableMenu_C::SetFixedSizeOpenHeight(int* Item_Count, float* Item_Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetFixedSizeOpenHeight");

	UBasic_ExpandableMenu_C_SetFixedSizeOpenHeight_Params params;
	params.Item_Count = Item_Count;
	params.Item_Height = Item_Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetOpenHeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         OpenHeight                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ExpandableMenu_C::SetOpenHeight(float* OpenHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetOpenHeight");

	UBasic_ExpandableMenu_C_SetOpenHeight_Params params;
	params.OpenHeight = OpenHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetHovered
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InHovered                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ExpandableMenu_C::SetHovered(bool* InHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetHovered");

	UBasic_ExpandableMenu_C_SetHovered_Params params;
	params.InHovered = InHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetHeader2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBasic_ExpandableMenu_C::SetHeader2(struct FText* InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetHeader2");

	UBasic_ExpandableMenu_C_SetHeader2_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetHeader1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBasic_ExpandableMenu_C::SetHeader1(struct FText* InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetHeader1");

	UBasic_ExpandableMenu_C_SetHeader1_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetMenuOpen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsOpen                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OutIsOpen                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBasic_ExpandableMenu_C::SetMenuOpen(bool* IsOpen, bool* OutIsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetMenuOpen");

	UBasic_ExpandableMenu_C_SetMenuOpen_Params params;
	params.IsOpen = IsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIsOpen != nullptr)
		*OutIsOpen = params.OutIsOpen;
}


// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.GetButtonStyle
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ENUM_MenuColors>*  Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             SlateBrush                     (Parm, OutParm)

void UBasic_ExpandableMenu_C::GetButtonStyle(TEnumAsByte<ENUM_MenuColors>* Color, struct FSlateBrush* SlateBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.GetButtonStyle");

	UBasic_ExpandableMenu_C_GetButtonStyle_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlateBrush != nullptr)
		*SlateBrush = params.SlateBrush;
}


// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_ExpandableMenu_C::BndEvt__CategoryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBasic_ExpandableMenu_C_BndEvt__CategoryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetHeightScale
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewScale                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ExpandableMenu_C::SetHeightScale(float* NewScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetHeightScale");

	UBasic_ExpandableMenu_C_SetHeightScale_Params params;
	params.NewScale = NewScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ExpandableMenu_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.PreConstruct");

	UBasic_ExpandableMenu_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_ExpandableMenu_C::BndEvt__CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UBasic_ExpandableMenu_C_BndEvt__CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_ExpandableMenu_C::BndEvt__CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UBasic_ExpandableMenu_C_BndEvt__CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.ExecuteUbergraph_Basic_ExpandableMenu
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ExpandableMenu_C::ExecuteUbergraph_Basic_ExpandableMenu(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.ExecuteUbergraph_Basic_ExpandableMenu");

	UBasic_ExpandableMenu_C_ExecuteUbergraph_Basic_ExpandableMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
