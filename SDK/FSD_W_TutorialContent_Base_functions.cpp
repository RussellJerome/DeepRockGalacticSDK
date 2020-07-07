// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_W_TutorialContent_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_TutorialContent_Base.W_TutorialContent_Base_C.CompleteWithAnim
// (BlueprintCallable, BlueprintEvent)

void UW_TutorialContent_Base_C::CompleteWithAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TutorialContent_Base.W_TutorialContent_Base_C.CompleteWithAnim");

	UW_TutorialContent_Base_C_CompleteWithAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_TutorialContent_Base.W_TutorialContent_Base_C.OnShown
// (Event, Public, BlueprintEvent)

void UW_TutorialContent_Base_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TutorialContent_Base.W_TutorialContent_Base_C.OnShown");

	UW_TutorialContent_Base_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_TutorialContent_Base.W_TutorialContent_Base_C.SetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  TaskHeader                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  TaskText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  CheckBoxText                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_TutorialContent_Base_C::SetText(struct FText* TaskHeader, struct FText* TaskText, struct FText* CheckBoxText)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TutorialContent_Base.W_TutorialContent_Base_C.SetText");

	UW_TutorialContent_Base_C_SetText_Params params;
	params.TaskHeader = TaskHeader;
	params.TaskText = TaskText;
	params.CheckBoxText = CheckBoxText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_TutorialContent_Base.W_TutorialContent_Base_C.SetImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_TutorialContent_Base_C::SetImage(class UTexture2D** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TutorialContent_Base.W_TutorialContent_Base_C.SetImage");

	UW_TutorialContent_Base_C_SetImage_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_TutorialContent_Base.W_TutorialContent_Base_C.BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_CompleteAnimationFinished__DelegateSignature
// (BlueprintEvent)

void UW_TutorialContent_Base_C::BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_CompleteAnimationFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TutorialContent_Base.W_TutorialContent_Base_C.BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_CompleteAnimationFinished__DelegateSignature");

	UW_TutorialContent_Base_C_BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_CompleteAnimationFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_TutorialContent_Base.W_TutorialContent_Base_C.BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_RemoveAnimationFinished__DelegateSignature
// (BlueprintEvent)

void UW_TutorialContent_Base_C::BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_RemoveAnimationFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TutorialContent_Base.W_TutorialContent_Base_C.BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_RemoveAnimationFinished__DelegateSignature");

	UW_TutorialContent_Base_C_BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_RemoveAnimationFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_TutorialContent_Base.W_TutorialContent_Base_C.PlayTaskProgress
// (BlueprintCallable, BlueprintEvent)

void UW_TutorialContent_Base_C::PlayTaskProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TutorialContent_Base.W_TutorialContent_Base_C.PlayTaskProgress");

	UW_TutorialContent_Base_C_PlayTaskProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_TutorialContent_Base.W_TutorialContent_Base_C.OnRemoveWidget
// (Event, Public, BlueprintEvent)

void UW_TutorialContent_Base_C::OnRemoveWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TutorialContent_Base.W_TutorialContent_Base_C.OnRemoveWidget");

	UW_TutorialContent_Base_C_OnRemoveWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_TutorialContent_Base.W_TutorialContent_Base_C.SetTaskCounter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Counter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Denominator                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_TutorialContent_Base_C::SetTaskCounter(int* Counter, int* Denominator)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TutorialContent_Base.W_TutorialContent_Base_C.SetTaskCounter");

	UW_TutorialContent_Base_C_SetTaskCounter_Params params;
	params.Counter = Counter;
	params.Denominator = Denominator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_TutorialContent_Base.W_TutorialContent_Base_C.ExecuteUbergraph_W_TutorialContent_Base
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UW_TutorialContent_Base_C::ExecuteUbergraph_W_TutorialContent_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_TutorialContent_Base.W_TutorialContent_Base_C.ExecuteUbergraph_W_TutorialContent_Base");

	UW_TutorialContent_Base_C_ExecuteUbergraph_W_TutorialContent_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
