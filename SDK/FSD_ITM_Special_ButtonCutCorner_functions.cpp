// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Special_ButtonCutCorner_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.IsPressed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsPressed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UITM_Special_ButtonCutCorner_C::IsPressed(bool* IsPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.IsPressed");

	UITM_Special_ButtonCutCorner_C_IsPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPressed != nullptr)
		*IsPressed = params.IsPressed;
}


// Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.SetButtonText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_Special_ButtonCutCorner_C::SetButtonText(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.SetButtonText");

	UITM_Special_ButtonCutCorner_C_SetButtonText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.SetFontSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           FontSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Special_ButtonCutCorner_C::SetFontSize(int* FontSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.SetFontSize");

	UITM_Special_ButtonCutCorner_C_SetFontSize_Params params;
	params.FontSize = FontSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Special_ButtonCutCorner_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.PreConstruct");

	UITM_Special_ButtonCutCorner_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_Special_ButtonCutCorner_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UITM_Special_ButtonCutCorner_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_Special_ButtonCutCorner_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UITM_Special_ButtonCutCorner_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_Special_ButtonCutCorner_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UITM_Special_ButtonCutCorner_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_Special_ButtonCutCorner_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UITM_Special_ButtonCutCorner_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_Special_ButtonCutCorner_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature");

	UITM_Special_ButtonCutCorner_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.SetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Special_ButtonCutCorner_C::SetSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.SetSelected");

	UITM_Special_ButtonCutCorner_C_SetSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.Update Look
// (BlueprintCallable, BlueprintEvent)

void UITM_Special_ButtonCutCorner_C::Update_Look()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.Update Look");

	UITM_Special_ButtonCutCorner_C_Update_Look_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.Click
// (BlueprintCallable, BlueprintEvent)

void UITM_Special_ButtonCutCorner_C::Click()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.Click");

	UITM_Special_ButtonCutCorner_C_Click_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.ExecuteUbergraph_ITM_Special_ButtonCutCorner
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_Special_ButtonCutCorner_C::ExecuteUbergraph_ITM_Special_ButtonCutCorner(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.ExecuteUbergraph_ITM_Special_ButtonCutCorner");

	UITM_Special_ButtonCutCorner_C_ExecuteUbergraph_ITM_Special_ButtonCutCorner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.OnReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_Special_ButtonCutCorner_C::OnReleased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.OnReleased__DelegateSignature");

	UITM_Special_ButtonCutCorner_C_OnReleased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_Special_ButtonCutCorner_C::OnPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.OnPressed__DelegateSignature");

	UITM_Special_ButtonCutCorner_C_OnPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_Special_ButtonCutCorner_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Special_ButtonCutCorner.ITM_Special_ButtonCutCorner_C.OnClicked__DelegateSignature");

	UITM_Special_ButtonCutCorner_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
