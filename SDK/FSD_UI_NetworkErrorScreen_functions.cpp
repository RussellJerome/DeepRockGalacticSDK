// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_NetworkErrorScreen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_NetworkErrorScreen_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.OnKeyUp");

	UUI_NetworkErrorScreen_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.FadeIt
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          FadeIn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_NetworkErrorScreen_C::FadeIt(bool* FadeIn, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.FadeIt");

	UUI_NetworkErrorScreen_C_FadeIt_Params params;
	params.FadeIn = FadeIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_NetworkErrorScreen_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.PreConstruct");

	UUI_NetworkErrorScreen_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)

void UUI_NetworkErrorScreen_C::BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UUI_NetworkErrorScreen_C_BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.Close
// (BlueprintCallable, BlueprintEvent)

void UUI_NetworkErrorScreen_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.Close");

	UUI_NetworkErrorScreen_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.ExecuteUbergraph_UI_NetworkErrorScreen
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_NetworkErrorScreen_C::ExecuteUbergraph_UI_NetworkErrorScreen(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NetworkErrorScreen.UI_NetworkErrorScreen_C.ExecuteUbergraph_UI_NetworkErrorScreen");

	UUI_NetworkErrorScreen_C_ExecuteUbergraph_UI_NetworkErrorScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
