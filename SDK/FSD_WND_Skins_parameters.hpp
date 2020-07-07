#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_Skins_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WND_Skins.WND_Skins_C.FilterColorSkins
struct UWND_Skins_C_FilterColorSkins_Params
{
	TArray<class UItemSkin*>                           Skins;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WND_Skins.WND_Skins_C.RefreshLoadout
struct UWND_Skins_C_RefreshLoadout_Params
{
};

// Function WND_Skins.WND_Skins_C.ClearSkins
struct UWND_Skins_C_ClearSkins_Params
{
};

// Function WND_Skins.WND_Skins_C.OnUnlockedSkin
struct UWND_Skins_C_OnUnlockedSkin_Params
{
	class UItemSkin**                                  SkinItem;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_Skins.WND_Skins_C.RefreshSelectorButton
struct UWND_Skins_C_RefreshSelectorButton_Params
{
};

// Function WND_Skins.WND_Skins_C.RefreshWindowItems
struct UWND_Skins_C_RefreshWindowItems_Params
{
};

// Function WND_Skins.WND_Skins_C.GetItemsWindow
struct UWND_Skins_C_GetItemsWindow_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WND_Skins.WND_Skins_C.UpdateBorder
struct UWND_Skins_C_UpdateBorder_Params
{
};

// Function WND_Skins.WND_Skins_C.IsWindowVisible
struct UWND_Skins_C_IsWindowVisible_Params
{
	bool                                               Visible;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WND_Skins.WND_Skins_C.PopulateSkinWindow
struct UWND_Skins_C_PopulateSkinWindow_Params
{
	bool                                               IsEmpty;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WND_Skins.WND_Skins_C.SetWindowVisible
struct UWND_Skins_C_SetWindowVisible_Params
{
	bool*                                              IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               VisibilityChanged;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               NewVisibility;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WND_Skins.WND_Skins_C.AddSkin
struct UWND_Skins_C_AddSkin_Params
{
	class UItemSkin**                                  InSkin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     InItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     InPlayerCharacter;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UITM_SkinItem_C*                             OutSkinWidget;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WND_Skins.WND_Skins_C.SetSkinData
struct UWND_Skins_C_SetSkinData_Params
{
	class UClass**                                     itemClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     PlayerCharacterClass;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_Skins.WND_Skins_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UWND_Skins_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WND_Skins.WND_Skins_C.PreConstruct
struct UWND_Skins_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_Skins.WND_Skins_C.OnSkinWidgetAdded
struct UWND_Skins_C_OnSkinWidgetAdded_Params
{
	class UITM_SkinItem_C**                            SkinWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WND_Skins.WND_Skins_C.OnSkinClicked
struct UWND_Skins_C_OnSkinClicked_Params
{
	class UITM_SkinItem_C**                            Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WND_Skins.WND_Skins_C.BndEvt__SelectorButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
struct UWND_Skins_C_BndEvt__SelectorButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WND_Skins.WND_Skins_C.BndEvt__SelectorButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UWND_Skins_C_BndEvt__SelectorButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WND_Skins.WND_Skins_C.OnHoveringSkin
struct UWND_Skins_C_OnHoveringSkin_Params
{
	class UITM_SkinItem_C**                            SkinItem;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WND_Skins.WND_Skins_C.PreviewSkin
struct UWND_Skins_C_PreviewSkin_Params
{
	class UItemSkin**                                  Skin;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_Skins.WND_Skins_C.OnUnhoveringSkin
struct UWND_Skins_C_OnUnhoveringSkin_Params
{
	class UITM_SkinItem_C**                            SkinItem;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WND_Skins.WND_Skins_C.Construct
struct UWND_Skins_C_Construct_Params
{
};

// Function WND_Skins.WND_Skins_C.OnFocusLost
struct UWND_Skins_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WND_Skins.WND_Skins_C.BndEvt__UI_FocusableCanvas_K2Node_ComponentBoundEvent_3_OnHoverChanged__DelegateSignature
struct UWND_Skins_C_BndEvt__UI_FocusableCanvas_K2Node_ComponentBoundEvent_3_OnHoverChanged__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              IsHovered;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_Skins.WND_Skins_C.OnSkinChangedEvent_Event_1
struct UWND_Skins_C_OnSkinChangedEvent_Event_1_Params
{
};

// Function WND_Skins.WND_Skins_C.ExecuteUbergraph_WND_Skins
struct UWND_Skins_C_ExecuteUbergraph_WND_Skins_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_Skins.WND_Skins_C.OnOpened__DelegateSignature
struct UWND_Skins_C_OnOpened__DelegateSignature_Params
{
};

// Function WND_Skins.WND_Skins_C.PingSkin__DelegateSignature
struct UWND_Skins_C_PingSkin__DelegateSignature_Params
{
	class UItemSkin**                                  Skin;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
