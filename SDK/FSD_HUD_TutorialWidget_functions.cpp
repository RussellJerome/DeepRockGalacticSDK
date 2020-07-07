// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_TutorialWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_TutorialWidget.HUD_TutorialWidget_C.OnShow
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText*                  Title                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText*                  TaskText                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UTexture2D**             Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TutorialWidget_C::OnShow(struct FText* Text, struct FText* Title, struct FText* TaskText, class UTexture2D** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TutorialWidget.HUD_TutorialWidget_C.OnShow");

	UHUD_TutorialWidget_C_OnShow_Params params;
	params.Text = Text;
	params.Title = Title;
	params.TaskText = TaskText;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TutorialWidget.HUD_TutorialWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_TutorialWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TutorialWidget.HUD_TutorialWidget_C.Construct");

	UHUD_TutorialWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TutorialWidget.HUD_TutorialWidget_C.OnHide
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          watched                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TutorialWidget_C::OnHide(bool* watched)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TutorialWidget.HUD_TutorialWidget_C.OnHide");

	UHUD_TutorialWidget_C_OnHide_Params params;
	params.watched = watched;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TutorialWidget.HUD_TutorialWidget_C.BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_RemoveAnimationFinished__DelegateSignature
// (BlueprintEvent)

void UHUD_TutorialWidget_C::BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_RemoveAnimationFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TutorialWidget.HUD_TutorialWidget_C.BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_RemoveAnimationFinished__DelegateSignature");

	UHUD_TutorialWidget_C_BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_RemoveAnimationFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TutorialWidget.HUD_TutorialWidget_C.BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_CompleteAnimationFinished__DelegateSignature
// (BlueprintEvent)

void UHUD_TutorialWidget_C::BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_CompleteAnimationFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TutorialWidget.HUD_TutorialWidget_C.BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_CompleteAnimationFinished__DelegateSignature");

	UHUD_TutorialWidget_C_BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_CompleteAnimationFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TutorialWidget.HUD_TutorialWidget_C.ContinueChange
// (BlueprintCallable, BlueprintEvent)

void UHUD_TutorialWidget_C::ContinueChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TutorialWidget.HUD_TutorialWidget_C.ContinueChange");

	UHUD_TutorialWidget_C_ContinueChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_TutorialWidget.HUD_TutorialWidget_C.ExecuteUbergraph_HUD_TutorialWidget
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_TutorialWidget_C::ExecuteUbergraph_HUD_TutorialWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TutorialWidget.HUD_TutorialWidget_C.ExecuteUbergraph_HUD_TutorialWidget");

	UHUD_TutorialWidget_C_ExecuteUbergraph_HUD_TutorialWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
