// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_RestoreSave_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_RestoreSave.ITM_RestoreSave_C.ShowWindow
// (BlueprintCallable, BlueprintEvent)

void UITM_RestoreSave_C::ShowWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.ShowWindow");

	UITM_RestoreSave_C_ShowWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_RestoreSave.ITM_RestoreSave_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
// (BlueprintEvent)

void UITM_RestoreSave_C::BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature");

	UITM_RestoreSave_C_BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_RestoreSave.ITM_RestoreSave_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature
// (BlueprintEvent)

void UITM_RestoreSave_C::BndEvt__BTN_No_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature");

	UITM_RestoreSave_C_BndEvt__BTN_No_K2Node_ComponentBoundEvent_28_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_RestoreSave.ITM_RestoreSave_C.HideUIDelayed
// (BlueprintCallable, BlueprintEvent)

void UITM_RestoreSave_C::HideUIDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.HideUIDelayed");

	UITM_RestoreSave_C_HideUIDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_RestoreSave.ITM_RestoreSave_C.Check Savegame
// (BlueprintCallable, BlueprintEvent)

void UITM_RestoreSave_C::Check_Savegame()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.Check Savegame");

	UITM_RestoreSave_C_Check_Savegame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_RestoreSave.ITM_RestoreSave_C.ExecuteUbergraph_ITM_RestoreSave
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_RestoreSave_C::ExecuteUbergraph_ITM_RestoreSave(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.ExecuteUbergraph_ITM_RestoreSave");

	UITM_RestoreSave_C_ExecuteUbergraph_ITM_RestoreSave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_RestoreSave.ITM_RestoreSave_C.ImageReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 URL                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UITM_RestoreSave_C::ImageReady__DelegateSignature(class FString* URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSave.ITM_RestoreSave_C.ImageReady__DelegateSignature");

	UITM_RestoreSave_C_ImageReady__DelegateSignature_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
