// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_MENU_EscapeMenu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnMinersManualOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                IdentifyingObject              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Open_Specific_Page             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMinersManualSinglePage*       Page                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_EscapeMenu_C::OnMinersManualOpen(class UObject** IdentifyingObject, bool* Open_Specific_Page, EMinersManualSinglePage* Page)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnMinersManualOpen");

	UMENU_EscapeMenu_C_OnMinersManualOpen_Params params;
	params.IdentifyingObject = IdentifyingObject;
	params.Open_Specific_Page = Open_Specific_Page;
	params.Page = Page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnMinersManualNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMinersManualSection*          PendingSection                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid*                  Pending_ID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UMENU_EscapeMenu_C::OnMinersManualNotification(EMinersManualSection* PendingSection, struct FGuid* Pending_ID, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnMinersManualNotification");

	UMENU_EscapeMenu_C_OnMinersManualNotification_Params params;
	params.PendingSection = PendingSection;
	params.Pending_ID = Pending_ID;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.ToggleButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHeader_ButtonCutCorner_C** InButton                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMENU_EscapeMenu_C::ToggleButton(class UHeader_ButtonCutCorner_C** InButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.ToggleButton");

	UMENU_EscapeMenu_C_ToggleButton_Params params;
	params.InButton = InButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OpenSection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWindowWidget**          InSection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          AddToWindowManager             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_EscapeMenu_C::OpenSection(class UWindowWidget** InSection, bool* AddToWindowManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OpenSection");

	UMENU_EscapeMenu_C_OpenSection_Params params;
	params.InSection = InSection;
	params.AddToWindowManager = AddToWindowManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMENU_EscapeMenu_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnMouseButtonUp");

	UMENU_EscapeMenu_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetHUDVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_EscapeMenu_C::SetHUDVisible(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetHUDVisible");

	UMENU_EscapeMenu_C_SetHUDVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.NotInParty
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMENU_EscapeMenu_C::NotInParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.NotInParty");

	UMENU_EscapeMenu_C_NotInParty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.UpdateDebugTerrainHash
// (Public, BlueprintCallable, BlueprintEvent)

void UMENU_EscapeMenu_C::UpdateDebugTerrainHash()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.UpdateDebugTerrainHash");

	UMENU_EscapeMenu_C_UpdateDebugTerrainHash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetupLeaveButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMENU_EscapeMenu_C::SetupLeaveButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetupLeaveButton");

	UMENU_EscapeMenu_C_SetupLeaveButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMENU_EscapeMenu_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnKeyUp");

	UMENU_EscapeMenu_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_B9B49EC34D71CFDC07BF12AA58CE1ADE
// (BlueprintCallable, BlueprintEvent)

void UMENU_EscapeMenu_C::OnFailure_B9B49EC34D71CFDC07BF12AA58CE1ADE()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_B9B49EC34D71CFDC07BF12AA58CE1ADE");

	UMENU_EscapeMenu_C_OnFailure_B9B49EC34D71CFDC07BF12AA58CE1ADE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_B9B49EC34D71CFDC07BF12AA58CE1ADE
// (BlueprintCallable, BlueprintEvent)

void UMENU_EscapeMenu_C::OnSuccess_B9B49EC34D71CFDC07BF12AA58CE1ADE()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_B9B49EC34D71CFDC07BF12AA58CE1ADE");

	UMENU_EscapeMenu_C_OnSuccess_B9B49EC34D71CFDC07BF12AA58CE1ADE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_2723501B4F5B15367D2461B5F901451A
// (BlueprintCallable, BlueprintEvent)

void UMENU_EscapeMenu_C::OnFailure_2723501B4F5B15367D2461B5F901451A()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_2723501B4F5B15367D2461B5F901451A");

	UMENU_EscapeMenu_C_OnFailure_2723501B4F5B15367D2461B5F901451A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_2723501B4F5B15367D2461B5F901451A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult* Result                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UMENU_EscapeMenu_C::OnSuccess_2723501B4F5B15367D2461B5F901451A(struct FBlueprintSessionResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_2723501B4F5B15367D2461B5F901451A");

	UMENU_EscapeMenu_C_OnSuccess_2723501B4F5B15367D2461B5F901451A_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_2445084B4952F2116D9957A0465D5CFB
// (BlueprintCallable, BlueprintEvent)

void UMENU_EscapeMenu_C::OnFailure_2445084B4952F2116D9957A0465D5CFB()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_2445084B4952F2116D9957A0465D5CFB");

	UMENU_EscapeMenu_C_OnFailure_2445084B4952F2116D9957A0465D5CFB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_2445084B4952F2116D9957A0465D5CFB
// (BlueprintCallable, BlueprintEvent)

void UMENU_EscapeMenu_C::OnSuccess_2445084B4952F2116D9957A0465D5CFB()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_2445084B4952F2116D9957A0465D5CFB");

	UMENU_EscapeMenu_C_OnSuccess_2445084B4952F2116D9957A0465D5CFB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_D3AC1B41459DE7C179341F9A3024CEE9
// (BlueprintCallable, BlueprintEvent)

void UMENU_EscapeMenu_C::OnFailure_D3AC1B41459DE7C179341F9A3024CEE9()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_D3AC1B41459DE7C179341F9A3024CEE9");

	UMENU_EscapeMenu_C_OnFailure_D3AC1B41459DE7C179341F9A3024CEE9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_D3AC1B41459DE7C179341F9A3024CEE9
// (BlueprintCallable, BlueprintEvent)

void UMENU_EscapeMenu_C::OnSuccess_D3AC1B41459DE7C179341F9A3024CEE9()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_D3AC1B41459DE7C179341F9A3024CEE9");

	UMENU_EscapeMenu_C_OnSuccess_D3AC1B41459DE7C179341F9A3024CEE9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMENU_EscapeMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.Construct");

	UMENU_EscapeMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetFocus
// (BlueprintCallable, BlueprintEvent)

void UMENU_EscapeMenu_C::SetFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetFocus");

	UMENU_EscapeMenu_C_SetFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnQuitGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Yes                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_EscapeMenu_C::OnQuitGame(bool* Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnQuitGame");

	UMENU_EscapeMenu_C_OnQuitGame_Params params;
	params.Yes = Yes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnLeaveTeam
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Yes                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_EscapeMenu_C::OnLeaveTeam(bool* Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnLeaveTeam");

	UMENU_EscapeMenu_C_OnLeaveTeam_Params params;
	params.Yes = Yes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Discord_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_EscapeMenu_C::BndEvt__BTN_Discord_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Discord_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UMENU_EscapeMenu_C_BndEvt__BTN_Discord_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_EscapeMenu_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.PreConstruct");

	UMENU_EscapeMenu_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnShown
// (Event, Public, BlueprintEvent)

void UMENU_EscapeMenu_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnShown");

	UMENU_EscapeMenu_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnClosed
// (Event, Public, BlueprintEvent)

void UMENU_EscapeMenu_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnClosed");

	UMENU_EscapeMenu_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Resume2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_EscapeMenu_C::BndEvt__BTN_Resume2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Resume2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UMENU_EscapeMenu_C_BndEvt__BTN_Resume2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.Answer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Yes                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_EscapeMenu_C::Answer(bool* Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.Answer");

	UMENU_EscapeMenu_C_Answer_Params params;
	params.Yes = Yes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Reconnect_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_EscapeMenu_C::BndEvt__BTN_Reconnect_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Reconnect_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");

	UMENU_EscapeMenu_C_BndEvt__BTN_Reconnect_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_CallToAction2_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_EscapeMenu_C::BndEvt__BTN_CallToAction2_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_CallToAction2_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");

	UMENU_EscapeMenu_C_BndEvt__BTN_CallToAction2_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_EscapeMenu_C::BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature");

	UMENU_EscapeMenu_C_BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OpenMinersManualSection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                IdentifyingObject              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_EscapeMenu_C::OpenMinersManualSection(class UObject** IdentifyingObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OpenMinersManualSection");

	UMENU_EscapeMenu_C_OpenMinersManualSection_Params params;
	params.IdentifyingObject = IdentifyingObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__Basic_ButtonCutCorner_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UHeader_ButtonCutCorner_C** Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMENU_EscapeMenu_C::BndEvt__Basic_ButtonCutCorner_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__Basic_ButtonCutCorner_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature");

	UMENU_EscapeMenu_C_BndEvt__Basic_ButtonCutCorner_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Statuss_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UHeader_ButtonCutCorner_C** Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMENU_EscapeMenu_C::BndEvt__BTN_Statuss_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Statuss_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature");

	UMENU_EscapeMenu_C_BndEvt__BTN_Statuss_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Options_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UHeader_ButtonCutCorner_C** Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMENU_EscapeMenu_C::BndEvt__BTN_Options_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Options_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature");

	UMENU_EscapeMenu_C_BndEvt__BTN_Options_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OpenMinersManualPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMinersManualSinglePage*       Page                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_EscapeMenu_C::OpenMinersManualPage(EMinersManualSinglePage* Page)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OpenMinersManualPage");

	UMENU_EscapeMenu_C_OpenMinersManualPage_Params params;
	params.Page = Page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.SelectNextButton
// (BlueprintCallable, BlueprintEvent)

void UMENU_EscapeMenu_C::SelectNextButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.SelectNextButton");

	UMENU_EscapeMenu_C_SelectNextButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.SelectPrevButton
// (BlueprintCallable, BlueprintEvent)

void UMENU_EscapeMenu_C::SelectPrevButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.SelectPrevButton");

	UMENU_EscapeMenu_C_SelectPrevButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnInputSourceChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputSource*                  InputSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_EscapeMenu_C::OnInputSourceChanged(EInputSource* InputSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnInputSourceChanged");

	UMENU_EscapeMenu_C_OnInputSourceChanged_Params params;
	params.InputSource = InputSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__B_Exit_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBasic_ButtonCutCorner_C** Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMENU_EscapeMenu_C::BndEvt__B_Exit_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__B_Exit_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UMENU_EscapeMenu_C_BndEvt__B_Exit_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__B_Leave_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_EscapeMenu_C::BndEvt__B_Leave_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__B_Leave_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	UMENU_EscapeMenu_C_BndEvt__B_Leave_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_ChangeProfile_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UBasic_ButtonCutCorner_C** Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMENU_EscapeMenu_C::BndEvt__BTN_ChangeProfile_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_ChangeProfile_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UMENU_EscapeMenu_C_BndEvt__BTN_ChangeProfile_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OpenMinersManualFromID
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMinersManualSection*          Section                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid*                  ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_EscapeMenu_C::OpenMinersManualFromID(EMinersManualSection* Section, struct FGuid* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OpenMinersManualFromID");

	UMENU_EscapeMenu_C_OpenMinersManualFromID_Params params;
	params.Section = Section;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnNewTopWindow
// (Event, Public, BlueprintEvent)

void UMENU_EscapeMenu_C::OnNewTopWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnNewTopWindow");

	UMENU_EscapeMenu_C_OnNewTopWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnCreditsClicked
// (BlueprintCallable, BlueprintEvent)

void UMENU_EscapeMenu_C::OnCreditsClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnCreditsClicked");

	UMENU_EscapeMenu_C_OnCreditsClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_PatchNotes_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UHeader_ButtonCutCorner_C** Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMENU_EscapeMenu_C::BndEvt__BTN_PatchNotes_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UHeader_ButtonCutCorner_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_PatchNotes_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UMENU_EscapeMenu_C_BndEvt__BTN_PatchNotes_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_EscapeMenu.MENU_EscapeMenu_C.ExecuteUbergraph_MENU_EscapeMenu
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_EscapeMenu_C::ExecuteUbergraph_MENU_EscapeMenu(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_EscapeMenu.MENU_EscapeMenu_C.ExecuteUbergraph_MENU_EscapeMenu");

	UMENU_EscapeMenu_C_ExecuteUbergraph_MENU_EscapeMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
