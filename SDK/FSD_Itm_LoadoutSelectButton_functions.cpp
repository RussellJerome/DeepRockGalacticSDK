// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Itm_LoadoutSelectButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.GetToolTipWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UITM_LoadoutSelectButton_C::GetToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.GetToolTipWidget");

	UITM_LoadoutSelectButton_C_GetToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_LoadoutSelectButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UITM_LoadoutSelectButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.SetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_LoadoutSelectButton_C::SetSelected(bool* InSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.SetSelected");

	UITM_LoadoutSelectButton_C_SetSelected_Params params;
	params.InSelected = InSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_LoadoutSelectButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.PreConstruct");

	UITM_LoadoutSelectButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.SetIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_LoadoutSelectButton_C::SetIcon(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.SetIcon");

	UITM_LoadoutSelectButton_C_SetIcon_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_LoadoutSelectButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UITM_LoadoutSelectButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_LoadoutSelectButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UITM_LoadoutSelectButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.ExecuteUbergraph_ITM_LoadoutSelectButton
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_LoadoutSelectButton_C::ExecuteUbergraph_ITM_LoadoutSelectButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.ExecuteUbergraph_ITM_LoadoutSelectButton");

	UITM_LoadoutSelectButton_C_ExecuteUbergraph_ITM_LoadoutSelectButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_LoadoutSelectButton_C** Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_LoadoutSelectButton_C::OnClicked__DelegateSignature(class UITM_LoadoutSelectButton_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function Itm_LoadoutSelectButton.ITM_LoadoutSelectButton_C.OnClicked__DelegateSignature");

	UITM_LoadoutSelectButton_C_OnClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
