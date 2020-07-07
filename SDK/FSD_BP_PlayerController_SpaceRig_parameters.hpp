#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PlayerController_SpaceRig_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PreloadAssets
struct ABP_PlayerController_SpaceRig_C_PreloadAssets_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.hudVisible
struct ABP_PlayerController_SpaceRig_C_hudVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ChangeHUDVisible
struct ABP_PlayerController_SpaceRig_C_ChangeHUDVisible_Params
{
	bool*                                              IsHUDVisible;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EHUDVisibilityReason*                              reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SelectLastPlayedCharacter
struct ABP_PlayerController_SpaceRig_C_SelectLastPlayedCharacter_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.AddWidget
struct ABP_PlayerController_SpaceRig_C_AddWidget_Params
{
	class UUserWidget*                                 Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	int*                                               ZOrder;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESlateVisibility*                                  InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ChangeCharacter
struct ABP_PlayerController_SpaceRig_C_ChangeCharacter_Params
{
	class UClass**                                     NewCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.CreateUI
struct ABP_PlayerController_SpaceRig_C_CreateUI_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_6
struct ABP_PlayerController_SpaceRig_C_InpActEvt_PushToTalk_K2Node_InputActionEvent_6_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_5
struct ABP_PlayerController_SpaceRig_C_InpActEvt_PushToTalk_K2Node_InputActionEvent_5_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_O_K2Node_InputKeyEvent_7
struct ABP_PlayerController_SpaceRig_C_InpActEvt_O_K2Node_InputKeyEvent_7_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_MenuButton_K2Node_InputActionEvent_4
struct ABP_PlayerController_SpaceRig_C_InpActEvt_MenuButton_K2Node_InputActionEvent_4_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Chat_K2Node_InputActionEvent_3
struct ABP_PlayerController_SpaceRig_C_InpActEvt_Chat_K2Node_InputActionEvent_3_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_P_K2Node_InputKeyEvent_6
struct ABP_PlayerController_SpaceRig_C_InpActEvt_P_K2Node_InputKeyEvent_6_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_CallDonkey_K2Node_InputActionEvent_2
struct ABP_PlayerController_SpaceRig_C_InpActEvt_CallDonkey_K2Node_InputActionEvent_2_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_MapTool_K2Node_InputActionEvent_1
struct ABP_PlayerController_SpaceRig_C_InpActEvt_MapTool_K2Node_InputActionEvent_1_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Subtract_K2Node_InputKeyEvent_5
struct ABP_PlayerController_SpaceRig_C_InpActEvt_Subtract_K2Node_InputKeyEvent_5_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.MixerButtonEvt_throwConfetti_Pressed_ID0
struct ABP_PlayerController_SpaceRig_C_MixerButtonEvt_throwConfetti_Pressed_ID0_Params
{
	struct FMixerButtonInput*                          Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Eight_K2Node_InputKeyEvent_4
struct ABP_PlayerController_SpaceRig_C_InpActEvt_Eight_K2Node_InputKeyEvent_4_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Eight_K2Node_InputKeyEvent_3
struct ABP_PlayerController_SpaceRig_C_InpActEvt_Eight_K2Node_InputKeyEvent_3_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Nine_K2Node_InputKeyEvent_2
struct ABP_PlayerController_SpaceRig_C_InpActEvt_Nine_K2Node_InputKeyEvent_2_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.InpActEvt_Nine_K2Node_InputKeyEvent_1
struct ABP_PlayerController_SpaceRig_C_InpActEvt_Nine_K2Node_InputKeyEvent_1_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnFailure_FD5D0BC24D561288D20ABE9353DBA180
struct ABP_PlayerController_SpaceRig_C_OnFailure_FD5D0BC24D561288D20ABE9353DBA180_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnSuccess_FD5D0BC24D561288D20ABE9353DBA180
struct ABP_PlayerController_SpaceRig_C_OnSuccess_FD5D0BC24D561288D20ABE9353DBA180_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowServerBrowser
struct ABP_PlayerController_SpaceRig_C_ShowServerBrowser_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowMissionSelect
struct ABP_PlayerController_SpaceRig_C_ShowMissionSelect_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Client_OpenMap
struct ABP_PlayerController_SpaceRig_C_Client_OpenMap_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PlayerChangeCharacter
struct ABP_PlayerController_SpaceRig_C_PlayerChangeCharacter_Params
{
	class UClass**                                     NewCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.RecievePreClientTravel
struct ABP_PlayerController_SpaceRig_C_RecievePreClientTravel_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharacterSelect
struct ABP_PlayerController_SpaceRig_C_ShowCharacterSelect_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ControllerReady
struct ABP_PlayerController_SpaceRig_C_ControllerReady_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.RecieveOnControllerReady
struct ABP_PlayerController_SpaceRig_C_RecieveOnControllerReady_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowBuyItemPopup
struct ABP_PlayerController_SpaceRig_C_ShowBuyItemPopup_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItemUpgrade**                               Upgrade;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ReceiveDestroyed
struct ABP_PlayerController_SpaceRig_C_ReceiveDestroyed_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnCharacterPossesd
struct ABP_PlayerController_SpaceRig_C_OnCharacterPossesd_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ReceiveBeginPlay
struct ABP_PlayerController_SpaceRig_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharCustomization
struct ABP_PlayerController_SpaceRig_C_ShowCharCustomization_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCrafting
struct ABP_PlayerController_SpaceRig_C_ShowCrafting_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharacterScreenAndWorld
struct ABP_PlayerController_SpaceRig_C_ShowCharacterScreenAndWorld_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCraftingAndWorld
struct ABP_PlayerController_SpaceRig_C_ShowCraftingAndWorld_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCustomizationAndWorld
struct ABP_PlayerController_SpaceRig_C_ShowCustomizationAndWorld_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SpawnPlayer
struct ABP_PlayerController_SpaceRig_C_SpawnPlayer_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowFirstCharacterSelect
struct ABP_PlayerController_SpaceRig_C_ShowFirstCharacterSelect_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowMatchMakingRandom
struct ABP_PlayerController_SpaceRig_C_ShowMatchMakingRandom_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OpenCharacterSelector
struct ABP_PlayerController_SpaceRig_C_OpenCharacterSelector_Params
{
	bool*                                              OpenVideo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              AllowBack;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowReconnectController
struct ABP_PlayerController_SpaceRig_C_ShowReconnectController_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnFirstWindowOpened
struct ABP_PlayerController_SpaceRig_C_OnFirstWindowOpened_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnLastWindowClosed
struct ABP_PlayerController_SpaceRig_C_OnLastWindowClosed_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowNetworkError
struct ABP_PlayerController_SpaceRig_C_ShowNetworkError_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowTrading
struct ABP_PlayerController_SpaceRig_C_ShowTrading_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowWindowByClass
struct ABP_PlayerController_SpaceRig_C_ShowWindowByClass_Params
{
	class UClass**                                     windowClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ZOrder;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCheatMenu
struct ABP_PlayerController_SpaceRig_C_ShowCheatMenu_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowBarMenu
struct ABP_PlayerController_SpaceRig_C_ShowBarMenu_Params
{
	class ASpaceRigBar**                               Bar;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnRoundSelected_Event
struct ABP_PlayerController_SpaceRig_C_OnRoundSelected_Event_Params
{
	class ASpaceRigBar**                               Bar;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDrinkableDataAsset**                        RequestedDrink;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OrderBarRound
struct ABP_PlayerController_SpaceRig_C_OrderBarRound_Params
{
	class ASpaceRigBar**                               Bar;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDrinkableDataAsset**                        Drink;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Deduct Credits On Client
struct ABP_PlayerController_SpaceRig_C_Deduct_Credits_On_Client_Params
{
	int*                                               amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowJobs
struct ABP_PlayerController_SpaceRig_C_ShowJobs_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowItemUpgradeScreen
struct ABP_PlayerController_SpaceRig_C_ShowItemUpgradeScreen_Params
{
	class UClass**                                     CharacterClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     itemClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemCategory*                                     ItemCategory;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowBoscoUpgrades
struct ABP_PlayerController_SpaceRig_C_ShowBoscoUpgrades_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnPlayerSpawnBegin
struct ABP_PlayerController_SpaceRig_C_OnPlayerSpawnBegin_Params
{
	int*                                               PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.MixerSpawnConfetti
struct ABP_PlayerController_SpaceRig_C_MixerSpawnConfetti_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnDroppodLeave
struct ABP_PlayerController_SpaceRig_C_OnDroppodLeave_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PlayerThrewMugInHoop
struct ABP_PlayerController_SpaceRig_C_PlayerThrewMugInHoop_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PlayerPlayedEntireSong
struct ABP_PlayerController_SpaceRig_C_PlayerPlayedEntireSong_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.HandleDiscordConsole
struct ABP_PlayerController_SpaceRig_C_HandleDiscordConsole_Params
{
	class ABP_DiscordConsole_C**                       DiscordConsole;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SetUsableDiscord
struct ABP_PlayerController_SpaceRig_C_SetUsableDiscord_Params
{
	bool*                                              Usable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowDeepDives
struct ABP_PlayerController_SpaceRig_C_ShowDeepDives_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OpenSpacerigConsole
struct ABP_PlayerController_SpaceRig_C_OpenSpacerigConsole_Params
{
	class ABP_BaseSpaceRigConsole_C**                  Console;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SetHasShownCharacterSelector
struct ABP_PlayerController_SpaceRig_C_SetHasShownCharacterSelector_Params
{
	bool*                                              HasShown;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.SetIsEscapeMenuEnabled
struct ABP_PlayerController_SpaceRig_C_SetIsEscapeMenuEnabled_Params
{
	bool*                                              IsEscapeMenuEnabled;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowForgeWorkshop
struct ABP_PlayerController_SpaceRig_C_ShowForgeWorkshop_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.TestSchematic
struct ABP_PlayerController_SpaceRig_C_TestSchematic_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Reset Player Location
struct ABP_PlayerController_SpaceRig_C_Reset_Player_Location_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Reset Player Scale On Clients
struct ABP_PlayerController_SpaceRig_C_Reset_Player_Scale_On_Clients_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Server_PopLooatAtAffliction
struct ABP_PlayerController_SpaceRig_C_Server_PopLooatAtAffliction_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowLookAtConsole
struct ABP_PlayerController_SpaceRig_C_ShowLookAtConsole_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowCharacterSelectionBackground
struct ABP_PlayerController_SpaceRig_C_ShowCharacterSelectionBackground_Params
{
	bool*                                              resetToDefaultWeapon;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECharselectionCameraLocation*                      cameraLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.LaunchTutorial
struct ABP_PlayerController_SpaceRig_C_LaunchTutorial_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.PromptLaunchTutorial
struct ABP_PlayerController_SpaceRig_C_PromptLaunchTutorial_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.On Prompt
struct ABP_PlayerController_SpaceRig_C_On_Prompt_Params
{
	bool*                                              Yes;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.Back_Event_1
struct ABP_PlayerController_SpaceRig_C_Back_Event_1_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnCharacterSelected
struct ABP_PlayerController_SpaceRig_C_OnCharacterSelected_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnHostTimerChanged
struct ABP_PlayerController_SpaceRig_C_OnHostTimerChanged_Params
{
	float*                                             newTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnMissionTimerChanged
struct ABP_PlayerController_SpaceRig_C_OnMissionTimerChanged_Params
{
	float*                                             newTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.DoCountDown
struct ABP_PlayerController_SpaceRig_C_DoCountDown_Params
{
	float*                                             newTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ShowReconnect
struct ABP_PlayerController_SpaceRig_C_ShowReconnect_Params
{
	bool*                                              Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnGravityChanged
struct ABP_PlayerController_SpaceRig_C_OnGravityChanged_Params
{
	float*                                             CurrentGravity;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Change;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.CustomEvent_1
struct ABP_PlayerController_SpaceRig_C_CustomEvent_1_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.ExecuteUbergraph_BP_PlayerController_SpaceRig
struct ABP_PlayerController_SpaceRig_C_ExecuteUbergraph_BP_PlayerController_SpaceRig_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnCheatRequested__DelegateSignature
struct ABP_PlayerController_SpaceRig_C_OnCheatRequested__DelegateSignature_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnOpenedEscapeMenu__DelegateSignature
struct ABP_PlayerController_SpaceRig_C_OnOpenedEscapeMenu__DelegateSignature_Params
{
};

// Function BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C.OnToggleHUD__DelegateSignature
struct ABP_PlayerController_SpaceRig_C_OnToggleHUD__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
