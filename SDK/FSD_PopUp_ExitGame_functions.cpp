// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PopUp_ExitGame_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PopUp_ExitGame.Popup_ExitGame_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UPopup_ExitGame_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopUp_ExitGame.Popup_ExitGame_C.OnKeyUp");

	UPopup_ExitGame_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PopUp_ExitGame.Popup_ExitGame_C.OnShow
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Title                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText*                  Message                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPopup_ExitGame_C::OnShow(struct FText* Title, struct FText* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopUp_ExitGame.Popup_ExitGame_C.OnShow");

	UPopup_ExitGame_C_OnShow_Params params;
	params.Title = Title;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopUp_ExitGame.Popup_ExitGame_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UPopup_ExitGame_C::BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopUp_ExitGame.Popup_ExitGame_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UPopup_ExitGame_C_BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopUp_ExitGame.Popup_ExitGame_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UPopup_ExitGame_C::BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopUp_ExitGame.Popup_ExitGame_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UPopup_ExitGame_C_BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopUp_ExitGame.Popup_ExitGame_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPopup_ExitGame_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopUp_ExitGame.Popup_ExitGame_C.PreConstruct");

	UPopup_ExitGame_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopUp_ExitGame.Popup_ExitGame_C.Yes
// (BlueprintCallable, BlueprintEvent)

void UPopup_ExitGame_C::Yes()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopUp_ExitGame.Popup_ExitGame_C.Yes");

	UPopup_ExitGame_C_Yes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopUp_ExitGame.Popup_ExitGame_C.No
// (BlueprintCallable, BlueprintEvent)

void UPopup_ExitGame_C::No()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopUp_ExitGame.Popup_ExitGame_C.No");

	UPopup_ExitGame_C_No_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopUp_ExitGame.Popup_ExitGame_C.BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)

void UPopup_ExitGame_C::BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopUp_ExitGame.Popup_ExitGame_C.BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UPopup_ExitGame_C_BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopUp_ExitGame.Popup_ExitGame_C.ExecuteUbergraph_Popup_ExitGame
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPopup_ExitGame_C::ExecuteUbergraph_Popup_ExitGame(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopUp_ExitGame.Popup_ExitGame_C.ExecuteUbergraph_Popup_ExitGame");

	UPopup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopUp_ExitGame.Popup_ExitGame_C.OnYesNoClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ClickedYes                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPopup_ExitGame_C::OnYesNoClicked__DelegateSignature(bool* ClickedYes)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopUp_ExitGame.Popup_ExitGame_C.OnYesNoClicked__DelegateSignature");

	UPopup_ExitGame_C_OnYesNoClicked__DelegateSignature_Params params;
	params.ClickedYes = ClickedYes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
