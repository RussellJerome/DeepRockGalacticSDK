// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Menu_Cheats_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Menu_Cheats.Menu_Cheats_C.On_AdvEnemySpawn_GetMenuContent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UMenu_Cheats_C::On_AdvEnemySpawn_GetMenuContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.On_AdvEnemySpawn_GetMenuContent");

	UMenu_Cheats_C_On_AdvEnemySpawn_GetMenuContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Menu_Cheats.Menu_Cheats_C.GetBoscoUpgradeComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABosco*                  Drone                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UUpgradableBoscoComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUpgradableBoscoComponent* UMenu_Cheats_C::GetBoscoUpgradeComponent(class ABosco** Drone)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.GetBoscoUpgradeComponent");

	UMenu_Cheats_C_GetBoscoUpgradeComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Drone != nullptr)
		*Drone = params.Drone;

	return params.ReturnValue;
}


// Function Menu_Cheats.Menu_Cheats_C.InitiateAnselSpinBox
// (Public, BlueprintCallable, BlueprintEvent)

void UMenu_Cheats_C::InitiateAnselSpinBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.InitiateAnselSpinBox");

	UMenu_Cheats_C_InitiateAnselSpinBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.OnGetMenuContent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UMenu_Cheats_C::OnGetMenuContent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.OnGetMenuContent_1");

	UMenu_Cheats_C_OnGetMenuContent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Menu_Cheats.Menu_Cheats_C.Get_ActivateCommonCheatsButton_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UMenu_Cheats_C::Get_ActivateCommonCheatsButton_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.Get_ActivateCommonCheatsButton_Visibility_1");

	UMenu_Cheats_C_Get_ActivateCommonCheatsButton_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Menu_Cheats.Menu_Cheats_C.Get_HealthSlider_Value_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMenu_Cheats_C::Get_HealthSlider_Value_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.Get_HealthSlider_Value_1");

	UMenu_Cheats_C_Get_HealthSlider_Value_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Menu_Cheats.Menu_Cheats_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMenu_Cheats_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.OnKeyDown");

	UMenu_Cheats_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Menu_Cheats.Menu_Cheats_C.Get Character to change
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Character                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UClass*                  character_out                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMenu_Cheats_C::Get_Character_to_change(struct FText* Character, class UClass** character_out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.Get Character to change");

	UMenu_Cheats_C_Get_Character_to_change_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (character_out != nullptr)
		*character_out = params.character_out;
}


// Function Menu_Cheats.Menu_Cheats_C.DeselectTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton**                Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMenu_Cheats_C::DeselectTab(class UButton** Tab)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.DeselectTab");

	UMenu_Cheats_C_DeselectTab_Params params;
	params.Tab = Tab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.SelectTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UButton**                TabButton                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMenu_Cheats_C::SelectTab(int* Index, class UButton** TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.SelectTab");

	UMenu_Cheats_C_SelectTab_Params params;
	params.Index = Index;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenu_Cheats_C::BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature");

	UMenu_Cheats_C_BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_General_K2Node_ComponentBoundEvent_323_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenu_Cheats_C::BndEvt__Button_General_K2Node_ComponentBoundEvent_323_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_General_K2Node_ComponentBoundEvent_323_OnButtonClickedEvent__DelegateSignature");

	UMenu_Cheats_C_BndEvt__Button_General_K2Node_ComponentBoundEvent_323_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.SelectFirstTab
// (BlueprintCallable, BlueprintEvent)

void UMenu_Cheats_C::SelectFirstTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.SelectFirstTab");

	UMenu_Cheats_C_SelectFirstTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.Init Tabs
// (BlueprintCallable, BlueprintEvent)

void UMenu_Cheats_C::Init_Tabs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.Init Tabs");

	UMenu_Cheats_C_Init_Tabs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_Controls_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenu_Cheats_C::BndEvt__Button_Controls_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_Controls_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UMenu_Cheats_C_BndEvt__Button_Controls_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_UI_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenu_Cheats_C::BndEvt__Button_UI_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_UI_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature");

	UMenu_Cheats_C_BndEvt__Button_UI_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.OnShown
// (Event, Public, BlueprintEvent)

void UMenu_Cheats_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.OnShown");

	UMenu_Cheats_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.OnClosed
// (Event, Public, BlueprintEvent)

void UMenu_Cheats_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.OnClosed");

	UMenu_Cheats_C_OnClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_539_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenu_Cheats_C::BndEvt__Button_539_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_539_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature");

	UMenu_Cheats_C_BndEvt__Button_539_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_Gunner_K2Node_ComponentBoundEvent_683_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenu_Cheats_C::BndEvt__Button_Gunner_K2Node_ComponentBoundEvent_683_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_Gunner_K2Node_ComponentBoundEvent_683_OnButtonClickedEvent__DelegateSignature");

	UMenu_Cheats_C_BndEvt__Button_Gunner_K2Node_ComponentBoundEvent_683_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_Engineer_K2Node_ComponentBoundEvent_735_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenu_Cheats_C::BndEvt__Button_Engineer_K2Node_ComponentBoundEvent_735_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_Engineer_K2Node_ComponentBoundEvent_735_OnButtonClickedEvent__DelegateSignature");

	UMenu_Cheats_C_BndEvt__Button_Engineer_K2Node_ComponentBoundEvent_735_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_Driller_K2Node_ComponentBoundEvent_758_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenu_Cheats_C::BndEvt__Button_Driller_K2Node_ComponentBoundEvent_758_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_Driller_K2Node_ComponentBoundEvent_758_OnButtonClickedEvent__DelegateSignature");

	UMenu_Cheats_C_BndEvt__Button_Driller_K2Node_ComponentBoundEvent_758_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_Scout_K2Node_ComponentBoundEvent_782_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenu_Cheats_C::BndEvt__Button_Scout_K2Node_ComponentBoundEvent_782_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_Scout_K2Node_ComponentBoundEvent_782_OnButtonClickedEvent__DelegateSignature");

	UMenu_Cheats_C_BndEvt__Button_Scout_K2Node_ComponentBoundEvent_782_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenu_Cheats_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");

	UMenu_Cheats_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.Update weapon info
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemCategory*                 categoryType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UComboBoxString**        ComboBoxToFill                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMenu_Cheats_C::Update_weapon_info(EItemCategory* categoryType, class UComboBoxString** ComboBoxToFill)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.Update weapon info");

	UMenu_Cheats_C_Update_weapon_info_Params params;
	params.categoryType = categoryType;
	params.ComboBoxToFill = ComboBoxToFill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.Set new weapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 Weapon_name                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EItemCategory*                 Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_Cheats_C::Set_new_weapon(class FString* Weapon_name, EItemCategory* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.Set new weapon");

	UMenu_Cheats_C_Set_new_weapon_Params params;
	params.Weapon_name = Weapon_name;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMenu_Cheats_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.Construct");

	UMenu_Cheats_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.update selected upgrade
// (BlueprintCallable, BlueprintEvent)

void UMenu_Cheats_C::update_selected_upgrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.update selected upgrade");

	UMenu_Cheats_C_update_selected_upgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.Reload lists
// (BlueprintCallable, BlueprintEvent)

void UMenu_Cheats_C::Reload_lists()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.Reload lists");

	UMenu_Cheats_C_Reload_lists_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.Fill Perk list
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemCategory*                 ItemSlotType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UScrollBox**             scrollbox_to_change            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMenu_Cheats_C::Fill_Perk_list(EItemCategory* ItemSlotType, class UScrollBox** scrollbox_to_change)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.Fill Perk list");

	UMenu_Cheats_C_Fill_Perk_list_Params params;
	params.ItemSlotType = ItemSlotType;
	params.scrollbox_to_change = scrollbox_to_change;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.BndEvt__mainWeaponselector_K2Node_ComponentBoundEvent_1369_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString*                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_Cheats_C::BndEvt__mainWeaponselector_K2Node_ComponentBoundEvent_1369_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.BndEvt__mainWeaponselector_K2Node_ComponentBoundEvent_1369_OnSelectionChangedEvent__DelegateSignature");

	UMenu_Cheats_C_BndEvt__mainWeaponselector_K2Node_ComponentBoundEvent_1369_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.BndEvt__SecondaryWeaponSelector_K2Node_ComponentBoundEvent_1395_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString*                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_Cheats_C::BndEvt__SecondaryWeaponSelector_K2Node_ComponentBoundEvent_1395_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.BndEvt__SecondaryWeaponSelector_K2Node_ComponentBoundEvent_1395_OnSelectionChangedEvent__DelegateSignature");

	UMenu_Cheats_C_BndEvt__SecondaryWeaponSelector_K2Node_ComponentBoundEvent_1395_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.Swap Weapon to next
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemCategory*                 Item_Category                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_Cheats_C::Swap_Weapon_to_next(EItemCategory* Item_Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.Swap Weapon to next");

	UMenu_Cheats_C_Swap_Weapon_to_next_Params params;
	params.Item_Category = Item_Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.HotKey Interaction change character
// (BlueprintCallable, BlueprintEvent)

void UMenu_Cheats_C::HotKey_Interaction_change_character()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.HotKey Interaction change character");

	UMenu_Cheats_C_HotKey_Interaction_change_character_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.Select Next Tab
// (BlueprintCallable, BlueprintEvent)

void UMenu_Cheats_C::Select_Next_Tab()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.Select Next Tab");

	UMenu_Cheats_C_Select_Next_Tab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.Select previous tab
// (BlueprintCallable, BlueprintEvent)

void UMenu_Cheats_C::Select_previous_tab()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.Select previous tab");

	UMenu_Cheats_C_Select_previous_tab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.Select current tab
// (BlueprintCallable, BlueprintEvent)

void UMenu_Cheats_C::Select_current_tab()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.Select current tab");

	UMenu_Cheats_C_Select_current_tab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.BndEvt__CheckBox_QuickSelect_K2Node_ComponentBoundEvent_777_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_Cheats_C::BndEvt__CheckBox_QuickSelect_K2Node_ComponentBoundEvent_777_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.BndEvt__CheckBox_QuickSelect_K2Node_ComponentBoundEvent_777_OnCheckBoxComponentStateChanged__DelegateSignature");

	UMenu_Cheats_C_BndEvt__CheckBox_QuickSelect_K2Node_ComponentBoundEvent_777_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_GenericHero_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenu_Cheats_C::BndEvt__Button_GenericHero_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_GenericHero_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature");

	UMenu_Cheats_C_BndEvt__Button_GenericHero_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.Fill Misc Upgrades
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemCategory*                 Item_Slot_type                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCheat_MiscUpgradesItem_C** CheatBoxToFill                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMenu_Cheats_C::Fill_Misc_Upgrades(EItemCategory* Item_Slot_type, class UCheat_MiscUpgradesItem_C** CheatBoxToFill)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.Fill Misc Upgrades");

	UMenu_Cheats_C_Fill_Misc_Upgrades_Params params;
	params.Item_Slot_type = Item_Slot_type;
	params.CheatBoxToFill = CheatBoxToFill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.Set player misc upgrades
// (BlueprintCallable, BlueprintEvent)

void UMenu_Cheats_C::Set_player_misc_upgrades()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.Set player misc upgrades");

	UMenu_Cheats_C_Set_player_misc_upgrades_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.Reload Character
// (BlueprintCallable, BlueprintEvent)

void UMenu_Cheats_C::Reload_Character()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.Reload Character");

	UMenu_Cheats_C_Reload_Character_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.Build Bosco abilities
// (BlueprintCallable, BlueprintEvent)

void UMenu_Cheats_C::Build_Bosco_abilities()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.Build Bosco abilities");

	UMenu_Cheats_C_Build_Bosco_abilities_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.BndEvt__RespawnboscoBTN_K2Node_ComponentBoundEvent_172_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenu_Cheats_C::BndEvt__RespawnboscoBTN_K2Node_ComponentBoundEvent_172_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.BndEvt__RespawnboscoBTN_K2Node_ComponentBoundEvent_172_OnButtonClickedEvent__DelegateSignature");

	UMenu_Cheats_C_BndEvt__RespawnboscoBTN_K2Node_ComponentBoundEvent_172_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.Initiate Pool lists
// (BlueprintCallable, BlueprintEvent)

void UMenu_Cheats_C::Initiate_Pool_lists()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.Initiate Pool lists");

	UMenu_Cheats_C_Initiate_Pool_lists_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_Vanity_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenu_Cheats_C::BndEvt__Button_Vanity_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_Vanity_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UMenu_Cheats_C_BndEvt__Button_Vanity_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.BndEvt__Cheat_ResetAchievement_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenu_Cheats_C::BndEvt__Cheat_ResetAchievement_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.BndEvt__Cheat_ResetAchievement_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UMenu_Cheats_C_BndEvt__Cheat_ResetAchievement_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.BndEvt__HealthSlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_Cheats_C::BndEvt__HealthSlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.BndEvt__HealthSlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");

	UMenu_Cheats_C_BndEvt__HealthSlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.BndEvt__FastPowerAttack_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_Cheats_C::BndEvt__FastPowerAttack_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.BndEvt__FastPowerAttack_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");

	UMenu_Cheats_C_BndEvt__FastPowerAttack_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.BndEvt__ActivateCommonCheatsButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenu_Cheats_C::BndEvt__ActivateCommonCheatsButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.BndEvt__ActivateCommonCheatsButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UMenu_Cheats_C_BndEvt__ActivateCommonCheatsButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.Power user key pressed
// (BlueprintCallable, BlueprintEvent)

void UMenu_Cheats_C::Power_user_key_pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.Power user key pressed");

	UMenu_Cheats_C_Power_user_key_pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.BndEvt__AnselSpeedSpinBox_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_Cheats_C::BndEvt__AnselSpeedSpinBox_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature(float* InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.BndEvt__AnselSpeedSpinBox_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature");

	UMenu_Cheats_C_BndEvt__AnselSpeedSpinBox_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.BndEvt__AnselDistanceSpinBox_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_Cheats_C::BndEvt__AnselDistanceSpinBox_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature(float* InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.BndEvt__AnselDistanceSpinBox_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature");

	UMenu_Cheats_C_BndEvt__AnselDistanceSpinBox_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_SpawnMinimule_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenu_Cheats_C::BndEvt__Button_SpawnMinimule_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_SpawnMinimule_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UMenu_Cheats_C_BndEvt__Button_SpawnMinimule_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.Fill Weapon skin SB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScrollBox**             SkinScrollBox                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EItemCategory*                 Item_Slot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemSkinType*                 SkinType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_Cheats_C::Fill_Weapon_skin_SB(class UScrollBox** SkinScrollBox, EItemCategory* Item_Slot, EItemSkinType* SkinType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.Fill Weapon skin SB");

	UMenu_Cheats_C_Fill_Weapon_skin_SB_Params params;
	params.SkinScrollBox = SkinScrollBox;
	params.Item_Slot = Item_Slot;
	params.SkinType = SkinType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.Reload skin list
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemCategory*                 Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_Cheats_C::Reload_skin_list(EItemCategory* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.Reload skin list");

	UMenu_Cheats_C_Reload_skin_list_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_AdvancedEnemyspawn_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenu_Cheats_C::BndEvt__Button_AdvancedEnemyspawn_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_AdvancedEnemyspawn_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UMenu_Cheats_C_BndEvt__Button_AdvancedEnemyspawn_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.BndEvt__AdvEnemySpawn_K2Node_ComponentBoundEvent_9_OnMenuOpenChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          bIsOpen                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_Cheats_C::BndEvt__AdvEnemySpawn_K2Node_ComponentBoundEvent_9_OnMenuOpenChangedEvent__DelegateSignature(bool* bIsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.BndEvt__AdvEnemySpawn_K2Node_ComponentBoundEvent_9_OnMenuOpenChangedEvent__DelegateSignature");

	UMenu_Cheats_C_BndEvt__AdvEnemySpawn_K2Node_ComponentBoundEvent_9_OnMenuOpenChangedEvent__DelegateSignature_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.Close Advanced spawning
// (BlueprintCallable, BlueprintEvent)

void UMenu_Cheats_C::Close_Advanced_spawning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.Close Advanced spawning");

	UMenu_Cheats_C_Close_Advanced_spawning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.BndEvt__PlaceSpawnpos_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenu_Cheats_C::BndEvt__PlaceSpawnpos_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.BndEvt__PlaceSpawnpos_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UMenu_Cheats_C_BndEvt__PlaceSpawnpos_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.BndEvt__CleanSpawnPos_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMenu_Cheats_C::BndEvt__CleanSpawnPos_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.BndEvt__CleanSpawnPos_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	UMenu_Cheats_C_BndEvt__CleanSpawnPos_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu_Cheats.Menu_Cheats_C.ExecuteUbergraph_Menu_Cheats
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_Cheats_C::ExecuteUbergraph_Menu_Cheats(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_Cheats.Menu_Cheats_C.ExecuteUbergraph_Menu_Cheats");

	UMenu_Cheats_C_ExecuteUbergraph_Menu_Cheats_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
