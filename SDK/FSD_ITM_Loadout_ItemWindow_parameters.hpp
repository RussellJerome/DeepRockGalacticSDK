#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Loadout_ItemWindow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SetHideCounter
struct UITM_Loadout_ItemWindow_C_SetHideCounter_Params
{
	bool*                                              HideCounter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.GetNextItem
struct UITM_Loadout_ItemWindow_C_GetNextItem_Params
{
	int*                                               Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NextItem;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.GetOwnedItems
struct UITM_Loadout_ItemWindow_C_GetOwnedItems_Params
{
	class UClass**                                     InCharacterClass;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemCategory*                                     InCategory;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              Owned_Items;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               NewWeaponNotification;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.GetSelectedItem
struct UITM_Loadout_ItemWindow_C_GetSelectedItem_Params
{
	class UClass*                                      itemClass;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EItemCategory                                      Item_Category;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SetCharacterClass
struct UITM_Loadout_ItemWindow_C_SetCharacterClass_Params
{
	class UClass**                                     InCharacterClass;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SetHovered
struct UITM_Loadout_ItemWindow_C_SetHovered_Params
{
	bool*                                              InHovered;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.IsHovering
struct UITM_Loadout_ItemWindow_C_IsHovering_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.Construct
struct UITM_Loadout_ItemWindow_C_Construct_Params
{
};

// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SelectNext
struct UITM_Loadout_ItemWindow_C_SelectNext_Params
{
};

// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.SelectPrevious
struct UITM_Loadout_ItemWindow_C_SelectPrevious_Params
{
};

// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.Select Item
struct UITM_Loadout_ItemWindow_C_Select_Item_Params
{
	class UClass**                                     InItemClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UITM_Loadout_ItemWindow_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UITM_Loadout_ItemWindow_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UITM_Loadout_ItemWindow_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_511_OnButtonClickedEvent__DelegateSignature
struct UITM_Loadout_ItemWindow_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_511_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_528_OnButtonClickedEvent__DelegateSignature
struct UITM_Loadout_ItemWindow_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_528_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.OnClickAnimFinished
struct UITM_Loadout_ItemWindow_C_OnClickAnimFinished_Params
{
};

// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.PlayIntroAnim
struct UITM_Loadout_ItemWindow_C_PlayIntroAnim_Params
{
	bool*                                              IsLeftSide;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.PreConstruct
struct UITM_Loadout_ItemWindow_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.ExecuteUbergraph_ITM_Loadout_ItemWindow
struct UITM_Loadout_ItemWindow_C_ExecuteUbergraph_ITM_Loadout_ItemWindow_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.On Unhovered__DelegateSignature
struct UITM_Loadout_ItemWindow_C_On_Unhovered__DelegateSignature_Params
{
	class UITM_Loadout_ItemWindow_C**                  Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.On Hovered__DelegateSignature
struct UITM_Loadout_ItemWindow_C_On_Hovered__DelegateSignature_Params
{
	class UITM_Loadout_ItemWindow_C**                  Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_Loadout_ItemWindow.ITM_Loadout_ItemWindow_C.On Clicked__DelegateSignature
struct UITM_Loadout_ItemWindow_C_On_Clicked__DelegateSignature_Params
{
	class UITM_Loadout_ItemWindow_C**                  Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
