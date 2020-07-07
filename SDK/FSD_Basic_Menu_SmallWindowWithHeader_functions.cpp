// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_Menu_SmallWindowWithHeader_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.SetHeaderText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  NewHeaderText                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UBasic_Menu_SmallWindowWithHeader_C::SetHeaderText(struct FText* NewHeaderText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.SetHeaderText");

	UBasic_Menu_SmallWindowWithHeader_C_SetHeaderText_Params params;
	params.NewHeaderText = NewHeaderText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.IsHovering
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBasic_Menu_SmallWindowWithHeader_C::IsHovering()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.IsHovering");

	UBasic_Menu_SmallWindowWithHeader_C_IsHovering_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_Menu_SmallWindowWithHeader_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UBasic_Menu_SmallWindowWithHeader_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_Menu_SmallWindowWithHeader_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UBasic_Menu_SmallWindowWithHeader_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBasic_Menu_SmallWindowWithHeader_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UBasic_Menu_SmallWindowWithHeader_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_Menu_SmallWindowWithHeader_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.PreConstruct");

	UBasic_Menu_SmallWindowWithHeader_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.SetCounterText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBasic_Menu_SmallWindowWithHeader_C::SetCounterText(struct FText* InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.SetCounterText");

	UBasic_Menu_SmallWindowWithHeader_C_SetCounterText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.ExecuteUbergraph_Basic_Menu_SmallWindowWithHeader
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasic_Menu_SmallWindowWithHeader_C::ExecuteUbergraph_Basic_Menu_SmallWindowWithHeader(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.ExecuteUbergraph_Basic_Menu_SmallWindowWithHeader");

	UBasic_Menu_SmallWindowWithHeader_C_ExecuteUbergraph_Basic_Menu_SmallWindowWithHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.On Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBasic_Menu_SmallWindowWithHeader_C::On_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_SmallWindowWithHeader.Basic_Menu_SmallWindowWithHeader_C.On Clicked__DelegateSignature");

	UBasic_Menu_SmallWindowWithHeader_C_On_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
