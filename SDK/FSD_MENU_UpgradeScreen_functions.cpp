// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_MENU_UpgradeScreen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.Toggle Auto GearStats Preview
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsOn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_UpgradeScreen_C::Toggle_Auto_GearStats_Preview(bool* IsOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.Toggle Auto GearStats Preview");

	UMENU_UpgradeScreen_C_Toggle_Auto_GearStats_Preview_Params params;
	params.IsOn = IsOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ChangeItemCustom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 InItemClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          EquipItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsUnlocked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_UpgradeScreen_C::ChangeItemCustom(class UClass** InItemClass, bool* EquipItem, bool* IsUnlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ChangeItemCustom");

	UMENU_UpgradeScreen_C_ChangeItemCustom_Params params;
	params.InItemClass = InItemClass;
	params.EquipItem = EquipItem;
	params.IsUnlocked = IsUnlocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.GetItemTabIndex
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 InItemClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMENU_UpgradeScreen_C::GetItemTabIndex(class UClass** InItemClass, int* OutIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.GetItemTabIndex");

	UMENU_UpgradeScreen_C_GetItemTabIndex_Params params;
	params.InItemClass = InItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.SelectNextTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_UpgradeScreen_C::SelectNextTab(int* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.SelectNextTab");

	UMENU_UpgradeScreen_C_SelectNextTab_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.GetYesNoPrompt
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBasic_Popup_YesNoPrompt_C* YesNoPrompt                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMENU_UpgradeScreen_C::GetYesNoPrompt(class UBasic_Popup_YesNoPrompt_C** YesNoPrompt)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.GetYesNoPrompt");

	UMENU_UpgradeScreen_C_GetYesNoPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (YesNoPrompt != nullptr)
		*YesNoPrompt = params.YesNoPrompt;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.RefreshGearStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 entry                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMENU_UpgradeScreen_C::RefreshGearStats(class FString* entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.RefreshGearStats");

	UMENU_UpgradeScreen_C_RefreshGearStats_Params params;
	params.entry = entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.GetTabItems
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 InCharacterClass               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemCategory*                 InCategory                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          Tab_Items                      (Parm, OutParm, ZeroConstructor)

void UMENU_UpgradeScreen_C::GetTabItems(class UClass** InCharacterClass, EItemCategory* InCategory, TArray<class UClass*>* Tab_Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.GetTabItems");

	UMENU_UpgradeScreen_C_GetTabItems_Params params;
	params.InCharacterClass = InCharacterClass;
	params.InCategory = InCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tab_Items != nullptr)
		*Tab_Items = params.Tab_Items;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BuildGearTabs
// (Private, BlueprintCallable, BlueprintEvent)

void UMENU_UpgradeScreen_C::BuildGearTabs()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BuildGearTabs");

	UMENU_UpgradeScreen_C_BuildGearTabs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ChangeItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 InItemClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_UpgradeScreen_C::ChangeItem(class UClass** InItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ChangeItem");

	UMENU_UpgradeScreen_C_ChangeItem_Params params;
	params.InItemClass = InItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.RefreshItemDetails
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMENU_UpgradeScreen_C::RefreshItemDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.RefreshItemDetails");

	UMENU_UpgradeScreen_C_RefreshItemDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.Show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 InCharacterClass               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 InItemClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemCategory*                 InItemCategory                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_UpgradeScreen_C::Show(class UClass** InCharacterClass, class UClass** InItemClass, EItemCategory* InItemCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.Show");

	UMENU_UpgradeScreen_C_Show_Params params;
	params.InCharacterClass = InCharacterClass;
	params.InItemClass = InItemClass;
	params.InItemCategory = InItemCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_UpgradeScreen_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.PreConstruct");

	UMENU_UpgradeScreen_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_24_OnClosedClicked__DelegateSignature
// (BlueprintEvent)

void UMENU_UpgradeScreen_C::BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_24_OnClosedClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_24_OnClosedClicked__DelegateSignature");

	UMENU_UpgradeScreen_C_BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_24_OnClosedClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveSelectNextCommand
// (Event, Protected, BlueprintEvent)

void UMENU_UpgradeScreen_C::ReceiveSelectNextCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveSelectNextCommand");

	UMENU_UpgradeScreen_C_ReceiveSelectNextCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveSelectPreviousCommand
// (Event, Protected, BlueprintEvent)

void UMENU_UpgradeScreen_C::ReceiveSelectPreviousCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveSelectPreviousCommand");

	UMENU_UpgradeScreen_C_ReceiveSelectPreviousCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMENU_UpgradeScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.Construct");

	UMENU_UpgradeScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnClosed
// (Event, Public, BlueprintEvent)

void UMENU_UpgradeScreen_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnClosed");

	UMENU_UpgradeScreen_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnShown
// (Event, Public, BlueprintEvent)

void UMENU_UpgradeScreen_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnShown");

	UMENU_UpgradeScreen_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_UpgGear_Upgrades_K2Node_ComponentBoundEvent_1_OnItemPurchased__DelegateSignature
// (BlueprintEvent)

void UMENU_UpgradeScreen_C::BndEvt__ITM_UpgGear_Upgrades_K2Node_ComponentBoundEvent_1_OnItemPurchased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_UpgGear_Upgrades_K2Node_ComponentBoundEvent_1_OnItemPurchased__DelegateSignature");

	UMENU_UpgradeScreen_C_BndEvt__ITM_UpgGear_Upgrades_K2Node_ComponentBoundEvent_1_OnItemPurchased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMENU_UpgradeScreen_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UMENU_UpgradeScreen_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMENU_UpgradeScreen_C::BndEvt__BTN_Info_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UMENU_UpgradeScreen_C_BndEvt__BTN_Info_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMENU_UpgradeScreen_C::BndEvt__BTN_Info_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__BTN_Info_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UMENU_UpgradeScreen_C_BndEvt__BTN_Info_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveCloseCommand
// (Event, Protected, BlueprintEvent)

void UMENU_UpgradeScreen_C::ReceiveCloseCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveCloseCommand");

	UMENU_UpgradeScreen_C_ReceiveCloseCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveOkCommand
// (Event, Protected, BlueprintEvent)

void UMENU_UpgradeScreen_C::ReceiveOkCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ReceiveOkCommand");

	UMENU_UpgradeScreen_C_ReceiveOkCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnGrenadeSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 itemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Equip                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsUnlocked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_UpgradeScreen_C::OnGrenadeSelected(class UClass** itemClass, bool* Equip, bool* IsUnlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnGrenadeSelected");

	UMENU_UpgradeScreen_C_OnGrenadeSelected_Params params;
	params.itemClass = itemClass;
	params.Equip = Equip;
	params.IsUnlocked = IsUnlocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnPreviewUpgradeChangedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemUpgrade**           PreviewUpgrade                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_UpgradeScreen_C::OnPreviewUpgradeChangedEvent(class UItemUpgrade** PreviewUpgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnPreviewUpgradeChangedEvent");

	UMENU_UpgradeScreen_C_OnPreviewUpgradeChangedEvent_Params params;
	params.PreviewUpgrade = PreviewUpgrade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnItemRewarded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMasteryItem*           Reward                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UMENU_UpgradeScreen_C::OnItemRewarded(struct FMasteryItem* Reward)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnItemRewarded");

	UMENU_UpgradeScreen_C_OnItemRewarded_Params params;
	params.Reward = Reward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnFinished
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UUnlockReward*>   Rewards                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMENU_UpgradeScreen_C::OnFinished(TArray<class UUnlockReward*>* Rewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnFinished");

	UMENU_UpgradeScreen_C_OnFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rewards != nullptr)
		*Rewards = params.Rewards;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_0_NewLoadoutSelected__DelegateSignature
// (BlueprintEvent)

void UMENU_UpgradeScreen_C::BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_0_NewLoadoutSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_0_NewLoadoutSelected__DelegateSignature");

	UMENU_UpgradeScreen_C_BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_0_NewLoadoutSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnYesNoClicked_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ClickedYes                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_UpgradeScreen_C::OnYesNoClicked_Event(bool* ClickedYes)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnYesNoClicked_Event");

	UMENU_UpgradeScreen_C_OnYesNoClicked_Event_Params params;
	params.ClickedYes = ClickedYes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_Skins_Color_K2Node_ComponentBoundEvent_5_OnOpened__DelegateSignature
// (BlueprintEvent)

void UMENU_UpgradeScreen_C::BndEvt__ITM_Skins_Color_K2Node_ComponentBoundEvent_5_OnOpened__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_Skins_Color_K2Node_ComponentBoundEvent_5_OnOpened__DelegateSignature");

	UMENU_UpgradeScreen_C_BndEvt__ITM_Skins_Color_K2Node_ComponentBoundEvent_5_OnOpened__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_Skins_Mesh_K2Node_ComponentBoundEvent_6_OnOpened__DelegateSignature
// (BlueprintEvent)

void UMENU_UpgradeScreen_C::BndEvt__ITM_Skins_Mesh_K2Node_ComponentBoundEvent_6_OnOpened__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.BndEvt__ITM_Skins_Mesh_K2Node_ComponentBoundEvent_6_OnOpened__DelegateSignature");

	UMENU_UpgradeScreen_C_BndEvt__ITM_Skins_Mesh_K2Node_ComponentBoundEvent_6_OnOpened__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ExecuteUbergraph_MENU_UpgradeScreen
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_UpgradeScreen_C::ExecuteUbergraph_MENU_UpgradeScreen(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.ExecuteUbergraph_MENU_UpgradeScreen");

	UMENU_UpgradeScreen_C_ExecuteUbergraph_MENU_UpgradeScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnItemPurchased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMENU_UpgradeScreen_C::OnItemPurchased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnItemPurchased__DelegateSignature");

	UMENU_UpgradeScreen_C_OnItemPurchased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnItemChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 NewItemClass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMENU_UpgradeScreen_C::OnItemChanged__DelegateSignature(class UClass** NewItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnItemChanged__DelegateSignature");

	UMENU_UpgradeScreen_C_OnItemChanged__DelegateSignature_Params params;
	params.NewItemClass = NewItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnCloseClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMENU_UpgradeScreen_C::OnCloseClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_UpgradeScreen.MENU_UpgradeScreen_C.OnCloseClicked__DelegateSignature");

	UMENU_UpgradeScreen_C_OnCloseClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
