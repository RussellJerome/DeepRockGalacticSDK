#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_MENU_Loadout_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MENU_Loadout.MENU_Loadout_C.PlayIntroAnimations
struct UMENU_Loadout_C_PlayIntroAnimations_Params
{
};

// Function MENU_Loadout.MENU_Loadout_C.CheckForNotification
struct UMENU_Loadout_C_CheckForNotification_Params
{
};

// Function MENU_Loadout.MENU_Loadout_C.OnKeyUp
struct UMENU_Loadout_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MENU_Loadout.MENU_Loadout_C.OnMouseWheel
struct UMENU_Loadout_C_OnMouseWheel_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MENU_Loadout.MENU_Loadout_C.GetClassFromPlayerState
struct UMENU_Loadout_C_GetClassFromPlayerState_Params
{
	class UClass*                                      SelectedCharacter;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_Loadout.MENU_Loadout_C.PreConstruct
struct UMENU_Loadout_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_Loadout.MENU_Loadout_C.Construct
struct UMENU_Loadout_C_Construct_Params
{
};

// Function MENU_Loadout.MENU_Loadout_C.OnShown
struct UMENU_Loadout_C_OnShown_Params
{
};

// Function MENU_Loadout.MENU_Loadout_C.Refresh
struct UMENU_Loadout_C_Refresh_Params
{
};

// Function MENU_Loadout.MENU_Loadout_C.BndEvt__ITM_Loadout_CharSelect_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature
struct UMENU_Loadout_C_BndEvt__ITM_Loadout_CharSelect_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature_Params
{
	class UClass**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_Loadout.MENU_Loadout_C.Stop Ansel
struct UMENU_Loadout_C_Stop_Ansel_Params
{
};

// Function MENU_Loadout.MENU_Loadout_C.Start Ansel
struct UMENU_Loadout_C_Start_Ansel_Params
{
};

// Function MENU_Loadout.MENU_Loadout_C.OnClosed
struct UMENU_Loadout_C_OnClosed_Params
{
};

// Function MENU_Loadout.MENU_Loadout_C.Refresh Loadout Items
struct UMENU_Loadout_C_Refresh_Loadout_Items_Params
{
};

// Function MENU_Loadout.MENU_Loadout_C.Setup Loadout Items
struct UMENU_Loadout_C_Setup_Loadout_Items_Params
{
};

// Function MENU_Loadout.MENU_Loadout_C.OnNewTopWindow
struct UMENU_Loadout_C_OnNewTopWindow_Params
{
};

// Function MENU_Loadout.MENU_Loadout_C.ReceiveSelectCharacterCommand
struct UMENU_Loadout_C_ReceiveSelectCharacterCommand_Params
{
};

// Function MENU_Loadout.MENU_Loadout_C.ReceiveSelectNextCommand
struct UMENU_Loadout_C_ReceiveSelectNextCommand_Params
{
};

// Function MENU_Loadout.MENU_Loadout_C.ReceiveSelectPreviousCommand
struct UMENU_Loadout_C_ReceiveSelectPreviousCommand_Params
{
};

// Function MENU_Loadout.MENU_Loadout_C.BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_1_NewLoadoutSelected__DelegateSignature
struct UMENU_Loadout_C_BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_1_NewLoadoutSelected__DelegateSignature_Params
{
};

// Function MENU_Loadout.MENU_Loadout_C.On Unhovered_Event
struct UMENU_Loadout_C_On_Unhovered_Event_Params
{
	class UITM_Loadout_ItemWindow_C**                  Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MENU_Loadout.MENU_Loadout_C.On Hovered
struct UMENU_Loadout_C_On_Hovered_Params
{
	class UITM_Loadout_ItemWindow_C**                  Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MENU_Loadout.MENU_Loadout_C.Open Item Window
struct UMENU_Loadout_C_Open_Item_Window_Params
{
	class UITM_Loadout_ItemWindow_C**                  Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MENU_Loadout.MENU_Loadout_C.ExecuteUbergraph_MENU_Loadout
struct UMENU_Loadout_C_ExecuteUbergraph_MENU_Loadout_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_Loadout.MENU_Loadout_C.CharacterSelected__DelegateSignature
struct UMENU_Loadout_C_CharacterSelected__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
