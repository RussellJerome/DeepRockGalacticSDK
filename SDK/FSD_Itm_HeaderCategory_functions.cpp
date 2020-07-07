// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Itm_HeaderCategory_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Itm_HeaderCategory.Itm_HeaderCategory_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItm_HeaderCategory_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Itm_HeaderCategory.Itm_HeaderCategory_C.PreConstruct");

	UItm_HeaderCategory_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Itm_HeaderCategory.Itm_HeaderCategory_C.SetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItm_HeaderCategory_C::SetSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Itm_HeaderCategory.Itm_HeaderCategory_C.SetSelected");

	UItm_HeaderCategory_C_SetSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Itm_HeaderCategory.Itm_HeaderCategory_C.SetColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor*            Filled                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor*            Outline                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor*            Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UItm_HeaderCategory_C::SetColor(struct FSlateColor* Filled, struct FSlateColor* Outline, struct FSlateColor* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Itm_HeaderCategory.Itm_HeaderCategory_C.SetColor");

	UItm_HeaderCategory_C_SetColor_Params params;
	params.Filled = Filled;
	params.Outline = Outline;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Itm_HeaderCategory.Itm_HeaderCategory_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UItm_HeaderCategory_C::BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Itm_HeaderCategory.Itm_HeaderCategory_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UItm_HeaderCategory_C_BndEvt__Button_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Itm_HeaderCategory.Itm_HeaderCategory_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UItm_HeaderCategory_C::BndEvt__Button_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Itm_HeaderCategory.Itm_HeaderCategory_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UItm_HeaderCategory_C_BndEvt__Button_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Itm_HeaderCategory.Itm_HeaderCategory_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UItm_HeaderCategory_C::BndEvt__Button_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Itm_HeaderCategory.Itm_HeaderCategory_C.BndEvt__Button_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UItm_HeaderCategory_C_BndEvt__Button_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Itm_HeaderCategory.Itm_HeaderCategory_C.SetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UItm_HeaderCategory_C::SetText(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Itm_HeaderCategory.Itm_HeaderCategory_C.SetText");

	UItm_HeaderCategory_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Itm_HeaderCategory.Itm_HeaderCategory_C.ExecuteUbergraph_Itm_HeaderCategory
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItm_HeaderCategory_C::ExecuteUbergraph_Itm_HeaderCategory(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Itm_HeaderCategory.Itm_HeaderCategory_C.ExecuteUbergraph_Itm_HeaderCategory");

	UItm_HeaderCategory_C_ExecuteUbergraph_Itm_HeaderCategory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Itm_HeaderCategory.Itm_HeaderCategory_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UItm_HeaderCategory_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Itm_HeaderCategory.Itm_HeaderCategory_C.OnClicked__DelegateSignature");

	UItm_HeaderCategory_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
