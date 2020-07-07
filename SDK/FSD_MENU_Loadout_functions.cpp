// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_MENU_Loadout_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MENU_Loadout.MENU_Loadout_C.PlayIntroAnimations
// (Public, BlueprintCallable, BlueprintEvent)

void UMENU_Loadout_C::PlayIntroAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.PlayIntroAnimations");

	UMENU_Loadout_C_PlayIntroAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Loadout.MENU_Loadout_C.CheckForNotification
// (Public, BlueprintCallable, BlueprintEvent)

void UMENU_Loadout_C::CheckForNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.CheckForNotification");

	UMENU_Loadout_C_CheckForNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Loadout.MENU_Loadout_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMENU_Loadout_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.OnKeyUp");

	UMENU_Loadout_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MENU_Loadout.MENU_Loadout_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMENU_Loadout_C::OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.OnMouseWheel");

	UMENU_Loadout_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MENU_Loadout.MENU_Loadout_C.GetClassFromPlayerState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  SelectedCharacter              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMENU_Loadout_C::GetClassFromPlayerState(class UClass** SelectedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.GetClassFromPlayerState");

	UMENU_Loadout_C_GetClassFromPlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedCharacter != nullptr)
		*SelectedCharacter = params.SelectedCharacter;
}


// Function MENU_Loadout.MENU_Loadout_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_Loadout_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.PreConstruct");

	UMENU_Loadout_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Loadout.MENU_Loadout_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMENU_Loadout_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.Construct");

	UMENU_Loadout_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Loadout.MENU_Loadout_C.OnShown
// (Event, Public, BlueprintEvent)

void UMENU_Loadout_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.OnShown");

	UMENU_Loadout_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Loadout.MENU_Loadout_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void UMENU_Loadout_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.Refresh");

	UMENU_Loadout_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Loadout.MENU_Loadout_C.BndEvt__ITM_Loadout_CharSelect_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UClass**                 Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_Loadout_C::BndEvt__ITM_Loadout_CharSelect_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature(class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.BndEvt__ITM_Loadout_CharSelect_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature");

	UMENU_Loadout_C_BndEvt__ITM_Loadout_CharSelect_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Loadout.MENU_Loadout_C.Stop Ansel
// (BlueprintCallable, BlueprintEvent)

void UMENU_Loadout_C::Stop_Ansel()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.Stop Ansel");

	UMENU_Loadout_C_Stop_Ansel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Loadout.MENU_Loadout_C.Start Ansel
// (BlueprintCallable, BlueprintEvent)

void UMENU_Loadout_C::Start_Ansel()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.Start Ansel");

	UMENU_Loadout_C_Start_Ansel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Loadout.MENU_Loadout_C.OnClosed
// (Event, Public, BlueprintEvent)

void UMENU_Loadout_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.OnClosed");

	UMENU_Loadout_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Loadout.MENU_Loadout_C.Refresh Loadout Items
// (BlueprintCallable, BlueprintEvent)

void UMENU_Loadout_C::Refresh_Loadout_Items()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.Refresh Loadout Items");

	UMENU_Loadout_C_Refresh_Loadout_Items_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Loadout.MENU_Loadout_C.Setup Loadout Items
// (BlueprintCallable, BlueprintEvent)

void UMENU_Loadout_C::Setup_Loadout_Items()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.Setup Loadout Items");

	UMENU_Loadout_C_Setup_Loadout_Items_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Loadout.MENU_Loadout_C.OnNewTopWindow
// (Event, Public, BlueprintEvent)

void UMENU_Loadout_C::OnNewTopWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.OnNewTopWindow");

	UMENU_Loadout_C_OnNewTopWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Loadout.MENU_Loadout_C.ReceiveSelectCharacterCommand
// (Event, Protected, BlueprintEvent)

void UMENU_Loadout_C::ReceiveSelectCharacterCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.ReceiveSelectCharacterCommand");

	UMENU_Loadout_C_ReceiveSelectCharacterCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Loadout.MENU_Loadout_C.ReceiveSelectNextCommand
// (Event, Protected, BlueprintEvent)

void UMENU_Loadout_C::ReceiveSelectNextCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.ReceiveSelectNextCommand");

	UMENU_Loadout_C_ReceiveSelectNextCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Loadout.MENU_Loadout_C.ReceiveSelectPreviousCommand
// (Event, Protected, BlueprintEvent)

void UMENU_Loadout_C::ReceiveSelectPreviousCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.ReceiveSelectPreviousCommand");

	UMENU_Loadout_C_ReceiveSelectPreviousCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Loadout.MENU_Loadout_C.BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_1_NewLoadoutSelected__DelegateSignature
// (BlueprintEvent)

void UMENU_Loadout_C::BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_1_NewLoadoutSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_1_NewLoadoutSelected__DelegateSignature");

	UMENU_Loadout_C_BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_1_NewLoadoutSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Loadout.MENU_Loadout_C.On Unhovered_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_Loadout_ItemWindow_C** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMENU_Loadout_C::On_Unhovered_Event(class UITM_Loadout_ItemWindow_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.On Unhovered_Event");

	UMENU_Loadout_C_On_Unhovered_Event_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Loadout.MENU_Loadout_C.On Hovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_Loadout_ItemWindow_C** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMENU_Loadout_C::On_Hovered(class UITM_Loadout_ItemWindow_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.On Hovered");

	UMENU_Loadout_C_On_Hovered_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Loadout.MENU_Loadout_C.Open Item Window
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UITM_Loadout_ItemWindow_C** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMENU_Loadout_C::Open_Item_Window(class UITM_Loadout_ItemWindow_C** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.Open Item Window");

	UMENU_Loadout_C_Open_Item_Window_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Loadout.MENU_Loadout_C.ExecuteUbergraph_MENU_Loadout
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_Loadout_C::ExecuteUbergraph_MENU_Loadout(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.ExecuteUbergraph_MENU_Loadout");

	UMENU_Loadout_C_ExecuteUbergraph_MENU_Loadout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_Loadout.MENU_Loadout_C.CharacterSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMENU_Loadout_C::CharacterSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.CharacterSelected__DelegateSignature");

	UMENU_Loadout_C_CharacterSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
