// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BTN_ItemCategory_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTN_ItemCategory.BTN_ItemCategory_C.CheckForNotification
// (Public, BlueprintCallable, BlueprintEvent)

void UBTN_ItemCategory_C::CheckForNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTN_ItemCategory.BTN_ItemCategory_C.CheckForNotification");

	UBTN_ItemCategory_C_CheckForNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTN_ItemCategory.BTN_ItemCategory_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTN_ItemCategory_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTN_ItemCategory.BTN_ItemCategory_C.PreConstruct");

	UBTN_ItemCategory_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTN_ItemCategory.BTN_ItemCategory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBTN_ItemCategory_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTN_ItemCategory.BTN_ItemCategory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UBTN_ItemCategory_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTN_ItemCategory.BTN_ItemCategory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBTN_ItemCategory_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTN_ItemCategory.BTN_ItemCategory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UBTN_ItemCategory_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTN_ItemCategory.BTN_ItemCategory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBTN_ItemCategory_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTN_ItemCategory.BTN_ItemCategory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UBTN_ItemCategory_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTN_ItemCategory.BTN_ItemCategory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UBTN_ItemCategory_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTN_ItemCategory.BTN_ItemCategory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");

	UBTN_ItemCategory_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTN_ItemCategory.BTN_ItemCategory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBTN_ItemCategory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTN_ItemCategory.BTN_ItemCategory_C.Construct");

	UBTN_ItemCategory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTN_ItemCategory.BTN_ItemCategory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBTN_ItemCategory_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTN_ItemCategory.BTN_ItemCategory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBTN_ItemCategory_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTN_ItemCategory.BTN_ItemCategory_C.Toggle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          on                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTN_ItemCategory_C::Toggle(bool* on)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTN_ItemCategory.BTN_ItemCategory_C.Toggle");

	UBTN_ItemCategory_C_Toggle_Params params;
	params.on = on;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTN_ItemCategory.BTN_ItemCategory_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerCharacterID**     characterID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTN_ItemCategory_C::SetData(class UPlayerCharacterID** characterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTN_ItemCategory.BTN_ItemCategory_C.SetData");

	UBTN_ItemCategory_C_SetData_Params params;
	params.characterID = characterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTN_ItemCategory.BTN_ItemCategory_C.OnClosed
// (BlueprintCallable, BlueprintEvent)

void UBTN_ItemCategory_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTN_ItemCategory.BTN_ItemCategory_C.OnClosed");

	UBTN_ItemCategory_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTN_ItemCategory.BTN_ItemCategory_C.ExecuteUbergraph_BTN_ItemCategory
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTN_ItemCategory_C::ExecuteUbergraph_BTN_ItemCategory(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTN_ItemCategory.BTN_ItemCategory_C.ExecuteUbergraph_BTN_ItemCategory");

	UBTN_ItemCategory_C_ExecuteUbergraph_BTN_ItemCategory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTN_ItemCategory.BTN_ItemCategory_C.ButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBTN_ItemCategory_C::ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTN_ItemCategory.BTN_ItemCategory_C.ButtonClicked__DelegateSignature");

	UBTN_ItemCategory_C_ButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
