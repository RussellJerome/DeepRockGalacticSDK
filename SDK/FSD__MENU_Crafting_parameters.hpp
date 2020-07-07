#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD__MENU_Crafting_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function _MENU_Crafting._MENU_Crafting_C.SetPreviewItem
struct U_MENU_Crafting_C_SetPreviewItem_Params
{
	TScriptInterface<class UCraftable>*                Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_Crafting._MENU_Crafting_C.GetNextAvailableRank
struct U_MENU_Crafting_C_GetNextAvailableRank_Params
{
	TArray<class UVanityItem*>                         In_Vanity_Items;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                VisibleRank;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_Crafting._MENU_Crafting_C.OnKeyUp
struct U_MENU_Crafting_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function _MENU_Crafting._MENU_Crafting_C.PrevGroup
struct U_MENU_Crafting_C_PrevGroup_Params
{
};

// Function _MENU_Crafting._MENU_Crafting_C.NextGroup
struct U_MENU_Crafting_C_NextGroup_Params
{
};

// Function _MENU_Crafting._MENU_Crafting_C.ClearItems
struct U_MENU_Crafting_C_ClearItems_Params
{
};

// Function _MENU_Crafting._MENU_Crafting_C.ShowItems
struct U_MENU_Crafting_C_ShowItems_Params
{
	EVanitySlot*                                       Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_Crafting._MENU_Crafting_C.Construct
struct U_MENU_Crafting_C_Construct_Params
{
};

// Function _MENU_Crafting._MENU_Crafting_C.OnChanged
struct U_MENU_Crafting_C_OnChanged_Params
{
	class UClass**                                     CharacterClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_Crafting._MENU_Crafting_C.PreviewItem
struct U_MENU_Crafting_C_PreviewItem_Params
{
	TScriptInterface<class UCraftable>*                Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_Crafting._MENU_Crafting_C.HidePreview
struct U_MENU_Crafting_C_HidePreview_Params
{
	TScriptInterface<class UCraftable>*                Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature
struct U_MENU_Crafting_C_BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature_Params
{
	class UClass**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_Crafting._MENU_Crafting_C.OnShown
struct U_MENU_Crafting_C_OnShown_Params
{
};

// Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_3_BTN_ArmorClicked__DelegateSignature
struct U_MENU_Crafting_C_BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_3_BTN_ArmorClicked__DelegateSignature_Params
{
};

// Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_10_BTN_BeardClicked__DelegateSignature
struct U_MENU_Crafting_C_BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_10_BTN_BeardClicked__DelegateSignature_Params
{
};

// Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_11_BTN_EyebrowsClicked__DelegateSignature
struct U_MENU_Crafting_C_BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_11_BTN_EyebrowsClicked__DelegateSignature_Params
{
};

// Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_13_BTN_HeadwearClicked__DelegateSignature
struct U_MENU_Crafting_C_BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_13_BTN_HeadwearClicked__DelegateSignature_Params
{
};

// Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_14_BTN_SideburnsClicked__DelegateSignature
struct U_MENU_Crafting_C_BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_14_BTN_SideburnsClicked__DelegateSignature_Params
{
};

// Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_15_BTN_MoustacheClicked__DelegateSignature
struct U_MENU_Crafting_C_BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_15_BTN_MoustacheClicked__DelegateSignature_Params
{
};

// Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_16_BTN_SkinColorClicked__DelegateSignature
struct U_MENU_Crafting_C_BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_16_BTN_SkinColorClicked__DelegateSignature_Params
{
};

// Function _MENU_Crafting._MENU_Crafting_C.Update
struct U_MENU_Crafting_C_Update_Params
{
};

// Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_1_BTN_HairColorClicked__DelegateSignature
struct U_MENU_Crafting_C_BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_1_BTN_HairColorClicked__DelegateSignature_Params
{
};

// Function _MENU_Crafting._MENU_Crafting_C.OnClosed
struct U_MENU_Crafting_C_OnClosed_Params
{
};

// Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature
struct U_MENU_Crafting_C_BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature_Params
{
};

// Function _MENU_Crafting._MENU_Crafting_C.ExecuteUbergraph__MENU_Crafting
struct U_MENU_Crafting_C_ExecuteUbergraph__MENU_Crafting_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
