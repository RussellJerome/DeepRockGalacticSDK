// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_InfoBox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_InfoBox.ITM_InfoBox_C.SetOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsOpen                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_InfoBox_C::SetOpen(bool* IsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_InfoBox.ITM_InfoBox_C.SetOpen");

	UITM_InfoBox_C_SetOpen_Params params;
	params.IsOpen = IsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_InfoBox.ITM_InfoBox_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<ENU_TextCase>*     InText_Case                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_InfoBox_C::SetText(struct FText* InText, TEnumAsByte<ENU_TextCase>* InText_Case)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_InfoBox.ITM_InfoBox_C.SetText");

	UITM_InfoBox_C_SetText_Params params;
	params.InText = InText;
	params.InText_Case = InText_Case;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_InfoBox.ITM_InfoBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_InfoBox_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_InfoBox.ITM_InfoBox_C.PreConstruct");

	UITM_InfoBox_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_InfoBox.ITM_InfoBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_InfoBox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_InfoBox.ITM_InfoBox_C.Construct");

	UITM_InfoBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_InfoBox.ITM_InfoBox_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UITM_InfoBox_C::BndEvt__BTN_Info_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_InfoBox.ITM_InfoBox_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UITM_InfoBox_C_BndEvt__BTN_Info_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_InfoBox.ITM_InfoBox_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_InfoBox_C::BndEvt__BTN_Info_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_InfoBox.ITM_InfoBox_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UITM_InfoBox_C_BndEvt__BTN_Info_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_InfoBox.ITM_InfoBox_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UITM_InfoBox_C::BndEvt__BTN_Info_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_InfoBox.ITM_InfoBox_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UITM_InfoBox_C_BndEvt__BTN_Info_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_InfoBox.ITM_InfoBox_C.ExecuteUbergraph_ITM_InfoBox
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_InfoBox_C::ExecuteUbergraph_ITM_InfoBox(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_InfoBox.ITM_InfoBox_C.ExecuteUbergraph_ITM_InfoBox");

	UITM_InfoBox_C_ExecuteUbergraph_ITM_InfoBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
