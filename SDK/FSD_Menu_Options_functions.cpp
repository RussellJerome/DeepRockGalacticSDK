// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Menu_Options_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Menu_Options.Menu_Options_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMenu_Options_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.OnKeyUp");

	UMenu_Options_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Menu_Options.Menu_Options_C.DeselectTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBasic_ButtonTab_C**     Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMenu_Options_C::DeselectTab(class UBasic_ButtonTab_C** Tab)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.DeselectTab");

	UMenu_Options_C_DeselectTab_Params params;
	params.Tab = Tab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Options.Menu_Options_C.SelectTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          WithSound                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_Options_C::SelectTab(int* Index, bool* WithSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.SelectTab");

	UMenu_Options_C_SelectTab_Params params;
	params.Index = Index;
	params.WithSound = WithSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Options.Menu_Options_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMenu_Options_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.Construct");

	UMenu_Options_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Options.Menu_Options_C.SelectFirstTab
// (BlueprintCallable, BlueprintEvent)

void UMenu_Options_C::SelectFirstTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.SelectFirstTab");

	UMenu_Options_C_SelectFirstTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Options.Menu_Options_C.BndEvt__Button_Apply_K2Node_ComponentBoundEvent_340_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenu_Options_C::BndEvt__Button_Apply_K2Node_ComponentBoundEvent_340_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.BndEvt__Button_Apply_K2Node_ComponentBoundEvent_340_OnButtonClickedEvent__DelegateSignature");

	UMenu_Options_C_BndEvt__Button_Apply_K2Node_ComponentBoundEvent_340_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Options.Menu_Options_C.BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMenu_Options_C::BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UMenu_Options_C_BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Options.Menu_Options_C.BndEvt__BTN_Audio_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMenu_Options_C::BndEvt__BTN_Audio_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.BndEvt__BTN_Audio_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UMenu_Options_C_BndEvt__BTN_Audio_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Options.Menu_Options_C.BndEvt__BTN_Graphics_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMenu_Options_C::BndEvt__BTN_Graphics_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.BndEvt__BTN_Graphics_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UMenu_Options_C_BndEvt__BTN_Graphics_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Options.Menu_Options_C.BndEvt__BTN_UI_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMenu_Options_C::BndEvt__BTN_UI_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.BndEvt__BTN_UI_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UMenu_Options_C_BndEvt__BTN_UI_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Options.Menu_Options_C.BndEvt__BTN_Gameplay_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMenu_Options_C::BndEvt__BTN_Gameplay_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.BndEvt__BTN_Gameplay_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature");

	UMenu_Options_C_BndEvt__BTN_Gameplay_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Options.Menu_Options_C.BndEvt__BTN_Privacy_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMenu_Options_C::BndEvt__BTN_Privacy_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.BndEvt__BTN_Privacy_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature");

	UMenu_Options_C_BndEvt__BTN_Privacy_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Options.Menu_Options_C.OnClosed
// (Event, Public, BlueprintEvent)

void UMenu_Options_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.OnClosed");

	UMenu_Options_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Options.Menu_Options_C.OnShown
// (Event, Public, BlueprintEvent)

void UMenu_Options_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.OnShown");

	UMenu_Options_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Options.Menu_Options_C.BndEvt__BTN_Layout_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMenu_Options_C::BndEvt__BTN_Layout_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.BndEvt__BTN_Layout_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UMenu_Options_C_BndEvt__BTN_Layout_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Options.Menu_Options_C.UpdateTabs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputSource*                  InputSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_Options_C::UpdateTabs(EInputSource* InputSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.UpdateTabs");

	UMenu_Options_C_UpdateTabs_Params params;
	params.InputSource = InputSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Options.Menu_Options_C.BndEvt__BTN_Credits_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMenu_Options_C::BndEvt__BTN_Credits_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.BndEvt__BTN_Credits_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UMenu_Options_C_BndEvt__BTN_Credits_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Options.Menu_Options_C.ExecuteUbergraph_Menu_Options
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_Options_C::ExecuteUbergraph_Menu_Options(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.ExecuteUbergraph_Menu_Options");

	UMenu_Options_C_ExecuteUbergraph_Menu_Options_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Options.Menu_Options_C.CreditsClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMenu_Options_C::CreditsClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Options.Menu_Options_C.CreditsClicked__DelegateSignature");

	UMenu_Options_C_CreditsClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
