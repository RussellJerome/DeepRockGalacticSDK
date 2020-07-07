// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_BasicTutorialWindow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.SetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Header                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  MainText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  TaskText                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_BasicTutorialWindow_C::SetText(struct FText* Header, struct FText* MainText, struct FText* TaskText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.SetText");

	UITM_BasicTutorialWindow_C_SetText_Params params;
	params.Header = Header;
	params.MainText = MainText;
	params.TaskText = TaskText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.PlayRemove
// (BlueprintCallable, BlueprintEvent)

void UITM_BasicTutorialWindow_C::PlayRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.PlayRemove");

	UITM_BasicTutorialWindow_C_PlayRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.PlayShow
// (BlueprintCallable, BlueprintEvent)

void UITM_BasicTutorialWindow_C::PlayShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.PlayShow");

	UITM_BasicTutorialWindow_C_PlayShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.PlayComplete
// (BlueprintCallable, BlueprintEvent)

void UITM_BasicTutorialWindow_C::PlayComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.PlayComplete");

	UITM_BasicTutorialWindow_C_PlayComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.CompleteAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UITM_BasicTutorialWindow_C::CompleteAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.CompleteAnimFinished");

	UITM_BasicTutorialWindow_C_CompleteAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.SetImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_BasicTutorialWindow_C::SetImage(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.SetImage");

	UITM_BasicTutorialWindow_C_SetImage_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.PlayTaskProgress
// (BlueprintCallable, BlueprintEvent)

void UITM_BasicTutorialWindow_C::PlayTaskProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.PlayTaskProgress");

	UITM_BasicTutorialWindow_C_PlayTaskProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.SetTaskCounter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Counter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Denominator                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_BasicTutorialWindow_C::SetTaskCounter(int* Counter, int* Denominator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.SetTaskCounter");

	UITM_BasicTutorialWindow_C_SetTaskCounter_Params params;
	params.Counter = Counter;
	params.Denominator = Denominator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.ExecuteUbergraph_ITM_BasicTutorialWindow
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_BasicTutorialWindow_C::ExecuteUbergraph_ITM_BasicTutorialWindow(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.ExecuteUbergraph_ITM_BasicTutorialWindow");

	UITM_BasicTutorialWindow_C_ExecuteUbergraph_ITM_BasicTutorialWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.RemoveAnimationFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_BasicTutorialWindow_C::RemoveAnimationFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.RemoveAnimationFinished__DelegateSignature");

	UITM_BasicTutorialWindow_C_RemoveAnimationFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.CompleteAnimationFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UITM_BasicTutorialWindow_C::CompleteAnimationFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BasicTutorialWindow.ITM_BasicTutorialWindow_C.CompleteAnimationFinished__DelegateSignature");

	UITM_BasicTutorialWindow_C_CompleteAnimationFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
