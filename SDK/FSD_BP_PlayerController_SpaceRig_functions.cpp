// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PlayerController_SpaceRig_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PreloadAssets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::PreloadAssets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PreloadAssets");

	ABP_PlayerController_SpaceRig_C_PreloadAssets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.hudVisible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PlayerController_SpaceRig_C::hudVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.hudVisible");

	ABP_PlayerController_SpaceRig_C_hudVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ChangeHUDVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsHUDVisible                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EHUDVisibilityReason*          reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::ChangeHUDVisible(bool* IsHUDVisible, EHUDVisibilityReason* reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ChangeHUDVisible");

	ABP_PlayerController_SpaceRig_C_ChangeHUDVisible_Params params;
	params.IsHUDVisible = IsHUDVisible;
	params.reason = reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SelectLastPlayedCharacter
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::SelectLastPlayedCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SelectLastPlayedCharacter");

	ABP_PlayerController_SpaceRig_C_SelectLastPlayedCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.AddWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// int*                           ZOrder                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESlateVisibility*              InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::AddWidget(int* ZOrder, ESlateVisibility* InVisibility, class UUserWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.AddWidget");

	ABP_PlayerController_SpaceRig_C_AddWidget_Params params;
	params.ZOrder = ZOrder;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ChangeCharacter
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 NewCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::ChangeCharacter(class UClass** NewCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ChangeCharacter");

	ABP_PlayerController_SpaceRig_C_ChangeCharacter_Params params;
	params.NewCharacter = NewCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.CreateUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::CreateUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.CreateUI");

	ABP_PlayerController_SpaceRig_C_CreateUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_SpaceRig_C::InpActEvt_PushToTalk_K2Node_InputActionEvent_6(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_6");

	ABP_PlayerController_SpaceRig_C_InpActEvt_PushToTalk_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_SpaceRig_C::InpActEvt_PushToTalk_K2Node_InputActionEvent_5(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_5");

	ABP_PlayerController_SpaceRig_C_InpActEvt_PushToTalk_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_O_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_SpaceRig_C::InpActEvt_O_K2Node_InputKeyEvent_7(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_O_K2Node_InputKeyEvent_7");

	ABP_PlayerController_SpaceRig_C_InpActEvt_O_K2Node_InputKeyEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_MenuButton_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_SpaceRig_C::InpActEvt_MenuButton_K2Node_InputActionEvent_4(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_MenuButton_K2Node_InputActionEvent_4");

	ABP_PlayerController_SpaceRig_C_InpActEvt_MenuButton_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Chat_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_SpaceRig_C::InpActEvt_Chat_K2Node_InputActionEvent_3(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Chat_K2Node_InputActionEvent_3");

	ABP_PlayerController_SpaceRig_C_InpActEvt_Chat_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_P_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_SpaceRig_C::InpActEvt_P_K2Node_InputKeyEvent_6(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_P_K2Node_InputKeyEvent_6");

	ABP_PlayerController_SpaceRig_C_InpActEvt_P_K2Node_InputKeyEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_CallDonkey_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_SpaceRig_C::InpActEvt_CallDonkey_K2Node_InputActionEvent_2(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_CallDonkey_K2Node_InputActionEvent_2");

	ABP_PlayerController_SpaceRig_C_InpActEvt_CallDonkey_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_MapTool_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_SpaceRig_C::InpActEvt_MapTool_K2Node_InputActionEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_MapTool_K2Node_InputActionEvent_1");

	ABP_PlayerController_SpaceRig_C_InpActEvt_MapTool_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Subtract_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_SpaceRig_C::InpActEvt_Subtract_K2Node_InputKeyEvent_5(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Subtract_K2Node_InputKeyEvent_5");

	ABP_PlayerController_SpaceRig_C_InpActEvt_Subtract_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.MixerButtonEvt_throwConfetti_Pressed_ID0
// (BlueprintEvent)
// Parameters:
// struct FMixerButtonInput*      Button                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_SpaceRig_C::MixerButtonEvt_throwConfetti_Pressed_ID0(struct FMixerButtonInput* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.MixerButtonEvt_throwConfetti_Pressed_ID0");

	ABP_PlayerController_SpaceRig_C_MixerButtonEvt_throwConfetti_Pressed_ID0_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Eight_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_SpaceRig_C::InpActEvt_Eight_K2Node_InputKeyEvent_4(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Eight_K2Node_InputKeyEvent_4");

	ABP_PlayerController_SpaceRig_C_InpActEvt_Eight_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Eight_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_SpaceRig_C::InpActEvt_Eight_K2Node_InputKeyEvent_3(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Eight_K2Node_InputKeyEvent_3");

	ABP_PlayerController_SpaceRig_C_InpActEvt_Eight_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Nine_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_SpaceRig_C::InpActEvt_Nine_K2Node_InputKeyEvent_2(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Nine_K2Node_InputKeyEvent_2");

	ABP_PlayerController_SpaceRig_C_InpActEvt_Nine_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Nine_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_SpaceRig_C::InpActEvt_Nine_K2Node_InputKeyEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Nine_K2Node_InputKeyEvent_1");

	ABP_PlayerController_SpaceRig_C_InpActEvt_Nine_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnFailure_FD5D0BC24D561288D20ABE9353DBA180
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::OnFailure_FD5D0BC24D561288D20ABE9353DBA180()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnFailure_FD5D0BC24D561288D20ABE9353DBA180");

	ABP_PlayerController_SpaceRig_C_OnFailure_FD5D0BC24D561288D20ABE9353DBA180_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnSuccess_FD5D0BC24D561288D20ABE9353DBA180
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::OnSuccess_FD5D0BC24D561288D20ABE9353DBA180()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnSuccess_FD5D0BC24D561288D20ABE9353DBA180");

	ABP_PlayerController_SpaceRig_C_OnSuccess_FD5D0BC24D561288D20ABE9353DBA180_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowServerBrowser
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowServerBrowser()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowServerBrowser");

	ABP_PlayerController_SpaceRig_C_ShowServerBrowser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowMissionSelect
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowMissionSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowMissionSelect");

	ABP_PlayerController_SpaceRig_C_ShowMissionSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Client_OpenMap
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::Client_OpenMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Client_OpenMap");

	ABP_PlayerController_SpaceRig_C_Client_OpenMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PlayerChangeCharacter
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 NewCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::PlayerChangeCharacter(class UClass** NewCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PlayerChangeCharacter");

	ABP_PlayerController_SpaceRig_C_PlayerChangeCharacter_Params params;
	params.NewCharacter = NewCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.RecievePreClientTravel
// (Event, Protected, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::RecievePreClientTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.RecievePreClientTravel");

	ABP_PlayerController_SpaceRig_C_RecievePreClientTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharacterSelect
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowCharacterSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharacterSelect");

	ABP_PlayerController_SpaceRig_C_ShowCharacterSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ControllerReady
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ControllerReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ControllerReady");

	ABP_PlayerController_SpaceRig_C_ControllerReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.RecieveOnControllerReady
// (Event, Protected, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::RecieveOnControllerReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.RecieveOnControllerReady");

	ABP_PlayerController_SpaceRig_C_RecieveOnControllerReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowBuyItemPopup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItemUpgrade**           Upgrade                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::ShowBuyItemPopup(class UClass** Item, class UItemUpgrade** Upgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowBuyItemPopup");

	ABP_PlayerController_SpaceRig_C_ShowBuyItemPopup_Params params;
	params.Item = Item;
	params.Upgrade = Upgrade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ReceiveDestroyed");

	ABP_PlayerController_SpaceRig_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnCharacterPossesd
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::OnCharacterPossesd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnCharacterPossesd");

	ABP_PlayerController_SpaceRig_C_OnCharacterPossesd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ReceiveBeginPlay");

	ABP_PlayerController_SpaceRig_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharCustomization
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowCharCustomization()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharCustomization");

	ABP_PlayerController_SpaceRig_C_ShowCharCustomization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCrafting
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowCrafting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCrafting");

	ABP_PlayerController_SpaceRig_C_ShowCrafting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharacterScreenAndWorld
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowCharacterScreenAndWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharacterScreenAndWorld");

	ABP_PlayerController_SpaceRig_C_ShowCharacterScreenAndWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCraftingAndWorld
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowCraftingAndWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCraftingAndWorld");

	ABP_PlayerController_SpaceRig_C_ShowCraftingAndWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCustomizationAndWorld
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowCustomizationAndWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCustomizationAndWorld");

	ABP_PlayerController_SpaceRig_C_ShowCustomizationAndWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SpawnPlayer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::SpawnPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SpawnPlayer");

	ABP_PlayerController_SpaceRig_C_SpawnPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowFirstCharacterSelect
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowFirstCharacterSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowFirstCharacterSelect");

	ABP_PlayerController_SpaceRig_C_ShowFirstCharacterSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowMatchMakingRandom
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowMatchMakingRandom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowMatchMakingRandom");

	ABP_PlayerController_SpaceRig_C_ShowMatchMakingRandom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OpenCharacterSelector
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          OpenVideo                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          AllowBack                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::OpenCharacterSelector(bool* OpenVideo, bool* AllowBack)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OpenCharacterSelector");

	ABP_PlayerController_SpaceRig_C_OpenCharacterSelector_Params params;
	params.OpenVideo = OpenVideo;
	params.AllowBack = AllowBack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowReconnectController
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowReconnectController()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowReconnectController");

	ABP_PlayerController_SpaceRig_C_ShowReconnectController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnFirstWindowOpened
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::OnFirstWindowOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnFirstWindowOpened");

	ABP_PlayerController_SpaceRig_C_OnFirstWindowOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnLastWindowClosed
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::OnLastWindowClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnLastWindowClosed");

	ABP_PlayerController_SpaceRig_C_OnLastWindowClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowNetworkError
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowNetworkError()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowNetworkError");

	ABP_PlayerController_SpaceRig_C_ShowNetworkError_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowTrading
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowTrading()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowTrading");

	ABP_PlayerController_SpaceRig_C_ShowTrading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowWindowByClass
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 windowClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ZOrder                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::ShowWindowByClass(class UClass** windowClass, int* ZOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowWindowByClass");

	ABP_PlayerController_SpaceRig_C_ShowWindowByClass_Params params;
	params.windowClass = windowClass;
	params.ZOrder = ZOrder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCheatMenu
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowCheatMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCheatMenu");

	ABP_PlayerController_SpaceRig_C_ShowCheatMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowBarMenu
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASpaceRigBar**           Bar                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::ShowBarMenu(class ASpaceRigBar** Bar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowBarMenu");

	ABP_PlayerController_SpaceRig_C_ShowBarMenu_Params params;
	params.Bar = Bar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnRoundSelected_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASpaceRigBar**           Bar                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDrinkableDataAsset**    RequestedDrink                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::OnRoundSelected_Event(class ASpaceRigBar** Bar, class UDrinkableDataAsset** RequestedDrink)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnRoundSelected_Event");

	ABP_PlayerController_SpaceRig_C_OnRoundSelected_Event_Params params;
	params.Bar = Bar;
	params.RequestedDrink = RequestedDrink;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OrderBarRound
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASpaceRigBar**           Bar                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDrinkableDataAsset**    Drink                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::OrderBarRound(class ASpaceRigBar** Bar, class UDrinkableDataAsset** Drink)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OrderBarRound");

	ABP_PlayerController_SpaceRig_C_OrderBarRound_Params params;
	params.Bar = Bar;
	params.Drink = Drink;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Deduct Credits On Client
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::Deduct_Credits_On_Client(int* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Deduct Credits On Client");

	ABP_PlayerController_SpaceRig_C_Deduct_Credits_On_Client_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowJobs
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowJobs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowJobs");

	ABP_PlayerController_SpaceRig_C_ShowJobs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowItemUpgradeScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 CharacterClass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 itemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemCategory*                 ItemCategory                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::ShowItemUpgradeScreen(class UClass** CharacterClass, class UClass** itemClass, EItemCategory* ItemCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowItemUpgradeScreen");

	ABP_PlayerController_SpaceRig_C_ShowItemUpgradeScreen_Params params;
	params.CharacterClass = CharacterClass;
	params.itemClass = itemClass;
	params.ItemCategory = ItemCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowBoscoUpgrades
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowBoscoUpgrades()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowBoscoUpgrades");

	ABP_PlayerController_SpaceRig_C_ShowBoscoUpgrades_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnPlayerSpawnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::OnPlayerSpawnBegin(int* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnPlayerSpawnBegin");

	ABP_PlayerController_SpaceRig_C_OnPlayerSpawnBegin_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.MixerSpawnConfetti
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::MixerSpawnConfetti(struct FVector* Location, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.MixerSpawnConfetti");

	ABP_PlayerController_SpaceRig_C_MixerSpawnConfetti_Params params;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnDroppodLeave
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::OnDroppodLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnDroppodLeave");

	ABP_PlayerController_SpaceRig_C_OnDroppodLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PlayerThrewMugInHoop
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::PlayerThrewMugInHoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PlayerThrewMugInHoop");

	ABP_PlayerController_SpaceRig_C_PlayerThrewMugInHoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PlayerPlayedEntireSong
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::PlayerPlayedEntireSong()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PlayerPlayedEntireSong");

	ABP_PlayerController_SpaceRig_C_PlayerPlayedEntireSong_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.HandleDiscordConsole
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DiscordConsole_C**   DiscordConsole                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::HandleDiscordConsole(class ABP_DiscordConsole_C** DiscordConsole)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.HandleDiscordConsole");

	ABP_PlayerController_SpaceRig_C_HandleDiscordConsole_Params params;
	params.DiscordConsole = DiscordConsole;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SetUsableDiscord
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Usable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::SetUsableDiscord(bool* Usable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SetUsableDiscord");

	ABP_PlayerController_SpaceRig_C_SetUsableDiscord_Params params;
	params.Usable = Usable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowDeepDives
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowDeepDives()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowDeepDives");

	ABP_PlayerController_SpaceRig_C_ShowDeepDives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OpenSpacerigConsole
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseSpaceRigConsole_C** Console                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::OpenSpacerigConsole(class ABP_BaseSpaceRigConsole_C** Console)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OpenSpacerigConsole");

	ABP_PlayerController_SpaceRig_C_OpenSpacerigConsole_Params params;
	params.Console = Console;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SetHasShownCharacterSelector
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          HasShown                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::SetHasShownCharacterSelector(bool* HasShown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SetHasShownCharacterSelector");

	ABP_PlayerController_SpaceRig_C_SetHasShownCharacterSelector_Params params;
	params.HasShown = HasShown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SetIsEscapeMenuEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsEscapeMenuEnabled            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::SetIsEscapeMenuEnabled(bool* IsEscapeMenuEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SetIsEscapeMenuEnabled");

	ABP_PlayerController_SpaceRig_C_SetIsEscapeMenuEnabled_Params params;
	params.IsEscapeMenuEnabled = IsEscapeMenuEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowForgeWorkshop
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowForgeWorkshop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowForgeWorkshop");

	ABP_PlayerController_SpaceRig_C_ShowForgeWorkshop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.TestSchematic
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::TestSchematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.TestSchematic");

	ABP_PlayerController_SpaceRig_C_TestSchematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Reset Player Location
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::Reset_Player_Location()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Reset Player Location");

	ABP_PlayerController_SpaceRig_C_Reset_Player_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Reset Player Scale On Clients
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::Reset_Player_Scale_On_Clients()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Reset Player Scale On Clients");

	ABP_PlayerController_SpaceRig_C_Reset_Player_Scale_On_Clients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Server_PopLooatAtAffliction
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::Server_PopLooatAtAffliction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Server_PopLooatAtAffliction");

	ABP_PlayerController_SpaceRig_C_Server_PopLooatAtAffliction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowLookAtConsole
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::ShowLookAtConsole()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowLookAtConsole");

	ABP_PlayerController_SpaceRig_C_ShowLookAtConsole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharacterSelectionBackground
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          resetToDefaultWeapon           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECharselectionCameraLocation*  cameraLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::ShowCharacterSelectionBackground(bool* resetToDefaultWeapon, ECharselectionCameraLocation* cameraLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharacterSelectionBackground");

	ABP_PlayerController_SpaceRig_C_ShowCharacterSelectionBackground_Params params;
	params.resetToDefaultWeapon = resetToDefaultWeapon;
	params.cameraLocation = cameraLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.LaunchTutorial
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::LaunchTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.LaunchTutorial");

	ABP_PlayerController_SpaceRig_C_LaunchTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PromptLaunchTutorial
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::PromptLaunchTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PromptLaunchTutorial");

	ABP_PlayerController_SpaceRig_C_PromptLaunchTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.On Prompt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Yes                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::On_Prompt(bool* Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.On Prompt");

	ABP_PlayerController_SpaceRig_C_On_Prompt_Params params;
	params.Yes = Yes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Back_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::Back_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Back_Event_1");

	ABP_PlayerController_SpaceRig_C_Back_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnCharacterSelected
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::OnCharacterSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnCharacterSelected");

	ABP_PlayerController_SpaceRig_C_OnCharacterSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnHostTimerChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         newTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::OnHostTimerChanged(float* newTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnHostTimerChanged");

	ABP_PlayerController_SpaceRig_C_OnHostTimerChanged_Params params;
	params.newTime = newTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnMissionTimerChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         newTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::OnMissionTimerChanged(float* newTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnMissionTimerChanged");

	ABP_PlayerController_SpaceRig_C_OnMissionTimerChanged_Params params;
	params.newTime = newTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.DoCountDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         newTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::DoCountDown(float* newTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.DoCountDown");

	ABP_PlayerController_SpaceRig_C_DoCountDown_Params params;
	params.newTime = newTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowReconnect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::ShowReconnect(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowReconnect");

	ABP_PlayerController_SpaceRig_C_ShowReconnect_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnGravityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         CurrentGravity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Change                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::OnGravityChanged(float* CurrentGravity, float* Change)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnGravityChanged");

	ABP_PlayerController_SpaceRig_C_OnGravityChanged_Params params;
	params.CurrentGravity = CurrentGravity;
	params.Change = Change;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.CustomEvent_1");

	ABP_PlayerController_SpaceRig_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ExecuteUbergraph_BP_PlayerController_SpaceRig
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_SpaceRig_C::ExecuteUbergraph_BP_PlayerController_SpaceRig(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ExecuteUbergraph_BP_PlayerController_SpaceRig");

	ABP_PlayerController_SpaceRig_C_ExecuteUbergraph_BP_PlayerController_SpaceRig_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnCheatRequested__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::OnCheatRequested__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnCheatRequested__DelegateSignature");

	ABP_PlayerController_SpaceRig_C_OnCheatRequested__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnOpenedEscapeMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::OnOpenedEscapeMenu__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnOpenedEscapeMenu__DelegateSignature");

	ABP_PlayerController_SpaceRig_C_OnOpenedEscapeMenu__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnToggleHUD__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_SpaceRig_C::OnToggleHUD__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnToggleHUD__DelegateSignature");

	ABP_PlayerController_SpaceRig_C_OnToggleHUD__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
