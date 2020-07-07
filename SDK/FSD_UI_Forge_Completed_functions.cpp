// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Forge_Completed_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Forge_Completed.UI_Forge_Completed_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_Forge_Completed_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Completed.UI_Forge_Completed_C.OnKeyUp");

	UUI_Forge_Completed_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_Forge_Completed.UI_Forge_Completed_C.Show
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USchematic**             InSchematic                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_Completed_C::Show(class USchematic** InSchematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Completed.UI_Forge_Completed_C.Show");

	UUI_Forge_Completed_C_Show_Params params;
	params.InSchematic = InSchematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Completed.UI_Forge_Completed_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Forge_Completed_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Completed.UI_Forge_Completed_C.Construct");

	UUI_Forge_Completed_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Completed.UI_Forge_Completed_C.OnIntroStarted
// (BlueprintCallable, BlueprintEvent)

void UUI_Forge_Completed_C::OnIntroStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Completed.UI_Forge_Completed_C.OnIntroStarted");

	UUI_Forge_Completed_C_OnIntroStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Completed.UI_Forge_Completed_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_Forge_Completed_C::BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Completed.UI_Forge_Completed_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UUI_Forge_Completed_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Completed.UI_Forge_Completed_C.BndEvt__UI_Forge_Details_K2Node_ComponentBoundEvent_1_OnMatrixCoreOpened__DelegateSignature
// (BlueprintEvent)

void UUI_Forge_Completed_C::BndEvt__UI_Forge_Details_K2Node_ComponentBoundEvent_1_OnMatrixCoreOpened__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Completed.UI_Forge_Completed_C.BndEvt__UI_Forge_Details_K2Node_ComponentBoundEvent_1_OnMatrixCoreOpened__DelegateSignature");

	UUI_Forge_Completed_C_BndEvt__UI_Forge_Details_K2Node_ComponentBoundEvent_1_OnMatrixCoreOpened__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Completed.UI_Forge_Completed_C.ClickContinue
// (BlueprintCallable, BlueprintEvent)

void UUI_Forge_Completed_C::ClickContinue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Completed.UI_Forge_Completed_C.ClickContinue");

	UUI_Forge_Completed_C_ClickContinue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Completed.UI_Forge_Completed_C.ExecuteUbergraph_UI_Forge_Completed
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Forge_Completed_C::ExecuteUbergraph_UI_Forge_Completed(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Completed.UI_Forge_Completed_C.ExecuteUbergraph_UI_Forge_Completed");

	UUI_Forge_Completed_C_ExecuteUbergraph_UI_Forge_Completed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Forge_Completed.UI_Forge_Completed_C.OnFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Forge_Completed_C::OnFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Forge_Completed.UI_Forge_Completed_C.OnFinished__DelegateSignature");

	UUI_Forge_Completed_C_OnFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
