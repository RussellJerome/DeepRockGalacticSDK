// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_ButtonLargeImage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.SetTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ButtonLargeImage_C::SetTexture(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.SetTexture");

	UBasic_ButtonLargeImage_C_SetTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.IsPressed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsPressed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBasic_ButtonLargeImage_C::IsPressed(bool* IsPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.IsPressed");

	UBasic_ButtonLargeImage_C_IsPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPressed != nullptr)
		*IsPressed = params.IsPressed;
}


// Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_ButtonLargeImage_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBasic_ButtonLargeImage_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_ButtonLargeImage_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UBasic_ButtonLargeImage_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_ButtonLargeImage_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UBasic_ButtonLargeImage_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_ButtonLargeImage_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UBasic_ButtonLargeImage_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_ButtonLargeImage_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature");

	UBasic_ButtonLargeImage_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ButtonLargeImage_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.PreConstruct");

	UBasic_ButtonLargeImage_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.ExecuteUbergraph_Basic_ButtonLargeImage
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_ButtonLargeImage_C::ExecuteUbergraph_Basic_ButtonLargeImage(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.ExecuteUbergraph_Basic_ButtonLargeImage");

	UBasic_ButtonLargeImage_C_ExecuteUbergraph_Basic_ButtonLargeImage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.OnReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBasic_ButtonLargeImage_C::OnReleased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.OnReleased__DelegateSignature");

	UBasic_ButtonLargeImage_C_OnReleased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBasic_ButtonLargeImage_C::OnPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.OnPressed__DelegateSignature");

	UBasic_ButtonLargeImage_C_OnPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBasic_ButtonLargeImage_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ButtonLargeImage.Basic_ButtonLargeImage_C.OnClicked__DelegateSignature");

	UBasic_ButtonLargeImage_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
