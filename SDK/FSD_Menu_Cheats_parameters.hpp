#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Menu_Cheats_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Menu_Cheats.Menu_Cheats_C.On_AdvEnemySpawn_GetMenuContent
struct UMenu_Cheats_C_On_AdvEnemySpawn_GetMenuContent_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Menu_Cheats.Menu_Cheats_C.GetBoscoUpgradeComponent
struct UMenu_Cheats_C_GetBoscoUpgradeComponent_Params
{
	class ABosco*                                      Drone;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UUpgradableBoscoComponent*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Menu_Cheats.Menu_Cheats_C.InitiateAnselSpinBox
struct UMenu_Cheats_C_InitiateAnselSpinBox_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.OnGetMenuContent_1
struct UMenu_Cheats_C_OnGetMenuContent_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Menu_Cheats.Menu_Cheats_C.Get_ActivateCommonCheatsButton_Visibility_1
struct UMenu_Cheats_C_Get_ActivateCommonCheatsButton_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Menu_Cheats.Menu_Cheats_C.Get_HealthSlider_Value_1
struct UMenu_Cheats_C_Get_HealthSlider_Value_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Menu_Cheats.Menu_Cheats_C.OnKeyDown
struct UMenu_Cheats_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Menu_Cheats.Menu_Cheats_C.Get Character to change
struct UMenu_Cheats_C_Get_Character_to_change_Params
{
	struct FText*                                      Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UClass*                                      character_out;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Menu_Cheats.Menu_Cheats_C.DeselectTab
struct UMenu_Cheats_C_DeselectTab_Params
{
	class UButton**                                    Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Menu_Cheats.Menu_Cheats_C.SelectTab
struct UMenu_Cheats_C_SelectTab_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UButton**                                    TabButton;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature
struct UMenu_Cheats_C_BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_General_K2Node_ComponentBoundEvent_323_OnButtonClickedEvent__DelegateSignature
struct UMenu_Cheats_C_BndEvt__Button_General_K2Node_ComponentBoundEvent_323_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.SelectFirstTab
struct UMenu_Cheats_C_SelectFirstTab_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.Init Tabs
struct UMenu_Cheats_C_Init_Tabs_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_Controls_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UMenu_Cheats_C_BndEvt__Button_Controls_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_UI_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature
struct UMenu_Cheats_C_BndEvt__Button_UI_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.OnShown
struct UMenu_Cheats_C_OnShown_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.OnClosed
struct UMenu_Cheats_C_OnClosed_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_539_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature
struct UMenu_Cheats_C_BndEvt__Button_539_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_Gunner_K2Node_ComponentBoundEvent_683_OnButtonClickedEvent__DelegateSignature
struct UMenu_Cheats_C_BndEvt__Button_Gunner_K2Node_ComponentBoundEvent_683_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_Engineer_K2Node_ComponentBoundEvent_735_OnButtonClickedEvent__DelegateSignature
struct UMenu_Cheats_C_BndEvt__Button_Engineer_K2Node_ComponentBoundEvent_735_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_Driller_K2Node_ComponentBoundEvent_758_OnButtonClickedEvent__DelegateSignature
struct UMenu_Cheats_C_BndEvt__Button_Driller_K2Node_ComponentBoundEvent_758_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_Scout_K2Node_ComponentBoundEvent_782_OnButtonClickedEvent__DelegateSignature
struct UMenu_Cheats_C_BndEvt__Button_Scout_K2Node_ComponentBoundEvent_782_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
struct UMenu_Cheats_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.Update weapon info
struct UMenu_Cheats_C_Update_weapon_info_Params
{
	EItemCategory*                                     categoryType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UComboBoxString**                            ComboBoxToFill;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Menu_Cheats.Menu_Cheats_C.Set new weapon
struct UMenu_Cheats_C_Set_new_weapon_Params
{
	class FString*                                     Weapon_name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EItemCategory*                                     Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu_Cheats.Menu_Cheats_C.Construct
struct UMenu_Cheats_C_Construct_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.update selected upgrade
struct UMenu_Cheats_C_update_selected_upgrade_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.Reload lists
struct UMenu_Cheats_C_Reload_lists_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.Fill Perk list
struct UMenu_Cheats_C_Fill_Perk_list_Params
{
	EItemCategory*                                     ItemSlotType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UScrollBox**                                 scrollbox_to_change;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Menu_Cheats.Menu_Cheats_C.BndEvt__mainWeaponselector_K2Node_ComponentBoundEvent_1369_OnSelectionChangedEvent__DelegateSignature
struct UMenu_Cheats_C_BndEvt__mainWeaponselector_K2Node_ComponentBoundEvent_1369_OnSelectionChangedEvent__DelegateSignature_Params
{
	class FString*                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>*                          SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu_Cheats.Menu_Cheats_C.BndEvt__SecondaryWeaponSelector_K2Node_ComponentBoundEvent_1395_OnSelectionChangedEvent__DelegateSignature
struct UMenu_Cheats_C_BndEvt__SecondaryWeaponSelector_K2Node_ComponentBoundEvent_1395_OnSelectionChangedEvent__DelegateSignature_Params
{
	class FString*                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>*                          SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu_Cheats.Menu_Cheats_C.Swap Weapon to next
struct UMenu_Cheats_C_Swap_Weapon_to_next_Params
{
	EItemCategory*                                     Item_Category;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu_Cheats.Menu_Cheats_C.HotKey Interaction change character
struct UMenu_Cheats_C_HotKey_Interaction_change_character_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.Select Next Tab
struct UMenu_Cheats_C_Select_Next_Tab_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.Select previous tab
struct UMenu_Cheats_C_Select_previous_tab_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.Select current tab
struct UMenu_Cheats_C_Select_current_tab_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.BndEvt__CheckBox_QuickSelect_K2Node_ComponentBoundEvent_777_OnCheckBoxComponentStateChanged__DelegateSignature
struct UMenu_Cheats_C_BndEvt__CheckBox_QuickSelect_K2Node_ComponentBoundEvent_777_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool*                                              bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_GenericHero_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature
struct UMenu_Cheats_C_BndEvt__Button_GenericHero_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.Fill Misc Upgrades
struct UMenu_Cheats_C_Fill_Misc_Upgrades_Params
{
	EItemCategory*                                     Item_Slot_type;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCheat_MiscUpgradesItem_C**                  CheatBoxToFill;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Menu_Cheats.Menu_Cheats_C.Set player misc upgrades
struct UMenu_Cheats_C_Set_player_misc_upgrades_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.Reload Character
struct UMenu_Cheats_C_Reload_Character_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.Build Bosco abilities
struct UMenu_Cheats_C_Build_Bosco_abilities_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.BndEvt__RespawnboscoBTN_K2Node_ComponentBoundEvent_172_OnButtonClickedEvent__DelegateSignature
struct UMenu_Cheats_C_BndEvt__RespawnboscoBTN_K2Node_ComponentBoundEvent_172_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.Initiate Pool lists
struct UMenu_Cheats_C_Initiate_Pool_lists_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_Vanity_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UMenu_Cheats_C_BndEvt__Button_Vanity_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.BndEvt__Cheat_ResetAchievement_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UMenu_Cheats_C_BndEvt__Cheat_ResetAchievement_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.BndEvt__HealthSlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
struct UMenu_Cheats_C_BndEvt__HealthSlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu_Cheats.Menu_Cheats_C.BndEvt__FastPowerAttack_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
struct UMenu_Cheats_C_BndEvt__FastPowerAttack_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool*                                              bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu_Cheats.Menu_Cheats_C.BndEvt__ActivateCommonCheatsButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UMenu_Cheats_C_BndEvt__ActivateCommonCheatsButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.Power user key pressed
struct UMenu_Cheats_C_Power_user_key_pressed_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.BndEvt__AnselSpeedSpinBox_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature
struct UMenu_Cheats_C_BndEvt__AnselSpeedSpinBox_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float*                                             InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu_Cheats.Menu_Cheats_C.BndEvt__AnselDistanceSpinBox_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature
struct UMenu_Cheats_C_BndEvt__AnselDistanceSpinBox_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float*                                             InValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_SpawnMinimule_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
struct UMenu_Cheats_C_BndEvt__Button_SpawnMinimule_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.Fill Weapon skin SB
struct UMenu_Cheats_C_Fill_Weapon_skin_SB_Params
{
	class UScrollBox**                                 SkinScrollBox;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EItemCategory*                                     Item_Slot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemSkinType*                                     SkinType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu_Cheats.Menu_Cheats_C.Reload skin list
struct UMenu_Cheats_C_Reload_skin_list_Params
{
	EItemCategory*                                     Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu_Cheats.Menu_Cheats_C.BndEvt__Button_AdvancedEnemyspawn_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
struct UMenu_Cheats_C_BndEvt__Button_AdvancedEnemyspawn_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.BndEvt__AdvEnemySpawn_K2Node_ComponentBoundEvent_9_OnMenuOpenChangedEvent__DelegateSignature
struct UMenu_Cheats_C_BndEvt__AdvEnemySpawn_K2Node_ComponentBoundEvent_9_OnMenuOpenChangedEvent__DelegateSignature_Params
{
	bool*                                              bIsOpen;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu_Cheats.Menu_Cheats_C.Close Advanced spawning
struct UMenu_Cheats_C_Close_Advanced_spawning_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.BndEvt__PlaceSpawnpos_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UMenu_Cheats_C_BndEvt__PlaceSpawnpos_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.BndEvt__CleanSpawnPos_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
struct UMenu_Cheats_C_BndEvt__CleanSpawnPos_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Menu_Cheats.Menu_Cheats_C.ExecuteUbergraph_Menu_Cheats
struct UMenu_Cheats_C_ExecuteUbergraph_Menu_Cheats_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
