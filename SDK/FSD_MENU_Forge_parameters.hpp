#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_MENU_Forge_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MENU_Forge.MENU_Forge_C.OnMouseButtonUp
struct UMENU_Forge_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MENU_Forge.MENU_Forge_C.ToggleMasteryBar
struct UMENU_Forge_C_ToggleMasteryBar_Params
{
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_Forge.MENU_Forge_C.Forge Schematic
struct UMENU_Forge_C_Forge_Schematic_Params
{
	class UUI_Forge_Schematic_C**                      InSchematic;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_Forge.MENU_Forge_C.ToggleItemPopUp
struct UMENU_Forge_C_ToggleItemPopUp_Params
{
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_Forge.MENU_Forge_C.ToggleSelectionList
struct UMENU_Forge_C_ToggleSelectionList_Params
{
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_Forge.MENU_Forge_C.IncreaseCraftingStat
struct UMENU_Forge_C_IncreaseCraftingStat_Params
{
};

// Function MENU_Forge.MENU_Forge_C.SetHeader
struct UMENU_Forge_C_SetHeader_Params
{
	struct FText*                                      InText;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MENU_Forge.MENU_Forge_C.OnKeyUp
struct UMENU_Forge_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MENU_Forge.MENU_Forge_C.ShowList
struct UMENU_Forge_C_ShowList_Params
{
	bool*                                              History;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Force_Rebuild;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_Forge.MENU_Forge_C.ShowItem
struct UMENU_Forge_C_ShowItem_Params
{
	class UUI_Forge_Schematic_C**                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MENU_Forge.MENU_Forge_C.Refresh
struct UMENU_Forge_C_Refresh_Params
{
};

// Function MENU_Forge.MENU_Forge_C.UpdateLevelProgress
struct UMENU_Forge_C_UpdateLevelProgress_Params
{
	bool*                                              animate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_Forge.MENU_Forge_C.BndEvt__TabOverclocks_K2Node_ComponentBoundEvent_2_OnItemClicked__DelegateSignature
struct UMENU_Forge_C_BndEvt__TabOverclocks_K2Node_ComponentBoundEvent_2_OnItemClicked__DelegateSignature_Params
{
	class UUI_Forge_Schematic_C**                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MENU_Forge.MENU_Forge_C.BndEvt__ForgeBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UMENU_Forge_C_BndEvt__ForgeBtn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function MENU_Forge.MENU_Forge_C.OnShown
struct UMENU_Forge_C_OnShown_Params
{
};

// Function MENU_Forge.MENU_Forge_C.BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_8_OnBackClicked__DelegateSignature
struct UMENU_Forge_C_BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_8_OnBackClicked__DelegateSignature_Params
{
};

// Function MENU_Forge.MENU_Forge_C.BndEvt__CancelForgeBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UMENU_Forge_C_BndEvt__CancelForgeBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function MENU_Forge.MENU_Forge_C.BndEvt__ITM_BigButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UMENU_Forge_C_BndEvt__ITM_BigButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function MENU_Forge.MENU_Forge_C.ForgeDone
struct UMENU_Forge_C_ForgeDone_Params
{
};

// Function MENU_Forge.MENU_Forge_C.BndEvt__UI_Forge_Completed_K2Node_ComponentBoundEvent_3_OnFinished__DelegateSignature
struct UMENU_Forge_C_BndEvt__UI_Forge_Completed_K2Node_ComponentBoundEvent_3_OnFinished__DelegateSignature_Params
{
};

// Function MENU_Forge.MENU_Forge_C.BndEvt__UI_Forge_MasteryBar_K2Node_ComponentBoundEvent_4_OnCountingFinished__DelegateSignature
struct UMENU_Forge_C_BndEvt__UI_Forge_MasteryBar_K2Node_ComponentBoundEvent_4_OnCountingFinished__DelegateSignature_Params
{
	unsigned char*                                     Reward;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_Forge.MENU_Forge_C.BndEvt__UI_Forge_MasteryReward_K2Node_ComponentBoundEvent_6_OnFinished__DelegateSignature
struct UMENU_Forge_C_BndEvt__UI_Forge_MasteryReward_K2Node_ComponentBoundEvent_6_OnFinished__DelegateSignature_Params
{
};

// Function MENU_Forge.MENU_Forge_C.Display Pending Mastery Reward
struct UMENU_Forge_C_Display_Pending_Mastery_Reward_Params
{
};

// Function MENU_Forge.MENU_Forge_C.OnForgingXPChanged_Event
struct UMENU_Forge_C_OnForgingXPChanged_Event_Params
{
	float*                                             XP;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_Forge.MENU_Forge_C.BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UMENU_Forge_C_BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
};

// Function MENU_Forge.MENU_Forge_C.Construct
struct UMENU_Forge_C_Construct_Params
{
};

// Function MENU_Forge.MENU_Forge_C.ShoutLocally
struct UMENU_Forge_C_ShoutLocally_Params
{
	float*                                             Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset**                           ShoutData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_Forge.MENU_Forge_C.PreConstruct
struct UMENU_Forge_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_Forge.MENU_Forge_C.ShoutLocallySoftPtr
struct UMENU_Forge_C_ShoutLocallySoftPtr_Params
{
	float*                                             Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TSoftObjectPtr<class UDialogDataAsset>*            ShoutData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MENU_Forge.MENU_Forge_C.OnClosed
struct UMENU_Forge_C_OnClosed_Params
{
};

// Function MENU_Forge.MENU_Forge_C.ExecuteUbergraph_MENU_Forge
struct UMENU_Forge_C_ExecuteUbergraph_MENU_Forge_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
