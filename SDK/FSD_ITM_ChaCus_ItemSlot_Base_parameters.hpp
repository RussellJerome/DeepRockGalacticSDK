#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_ChaCus_ItemSlot_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.GetTextToLeft
struct UITM_ChaCus_ItemSlot_Base_C_GetTextToLeft_Params
{
	bool                                               TextToLeft;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetHovered
struct UITM_ChaCus_ItemSlot_Base_C_SetHovered_Params
{
	bool*                                              InSlotHovered;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.ReceivePreviewItem
struct UITM_ChaCus_ItemSlot_Base_C_ReceivePreviewItem_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutSuccess;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetRefreshSlotsOnChange
struct UITM_ChaCus_ItemSlot_Base_C_SetRefreshSlotsOnChange_Params
{
	TArray<class UITM_ChaCus_ItemSlot_Base_C*>         InOtherSlots;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.ReceiveItemNotificationData
struct UITM_ChaCus_ItemSlot_Base_C_ReceiveItemNotificationData_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.ReceiveInitialize
struct UITM_ChaCus_ItemSlot_Base_C_ReceiveInitialize_Params
{
	int                                                AvailableItems;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SelectorItemUnhovered
struct UITM_ChaCus_ItemSlot_Base_C_SelectorItemUnhovered_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SelectorItemHovered
struct UITM_ChaCus_ItemSlot_Base_C_SelectorItemHovered_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.ReceiveGetSelectedIndex
struct UITM_ChaCus_ItemSlot_Base_C_ReceiveGetSelectedIndex_Params
{
	int                                                OutIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetItemName
struct UITM_ChaCus_ItemSlot_Base_C_SetItemName_Params
{
	struct FText*                                      InName;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.Refresh
struct UITM_ChaCus_ItemSlot_Base_C_Refresh_Params
{
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SelectorItemClicked
struct UITM_ChaCus_ItemSlot_Base_C_SelectorItemClicked_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutCloseSelector;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.ReceivePreConstruct
struct UITM_ChaCus_ItemSlot_Base_C_ReceivePreConstruct_Params
{
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.GetItemWidgets
struct UITM_ChaCus_ItemSlot_Base_C_GetItemWidgets_Params
{
	TArray<class UWidget*>                             ItemWidgets;                                              // (Parm, OutParm, ZeroConstructor)
	TArray<int>                                        NewItemIndices;                                           // (Parm, OutParm, ZeroConstructor)
	int                                                OutSelectedIndex;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.ReceiveReleaseResource
struct UITM_ChaCus_ItemSlot_Base_C_ReceiveReleaseResource_Params
{
	class UWidget**                                    InWidget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetTextToLeft
struct UITM_ChaCus_ItemSlot_Base_C_SetTextToLeft_Params
{
	bool*                                              Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.Initialize
struct UITM_ChaCus_ItemSlot_Base_C_Initialize_Params
{
	class UPlayerCharacterID**                         InCharacterID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetTypeIcon
struct UITM_ChaCus_ItemSlot_Base_C_SetTypeIcon_Params
{
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetSlotName
struct UITM_ChaCus_ItemSlot_Base_C_SetSlotName_Params
{
	struct FText*                                      Title;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetSlotSize
struct UITM_ChaCus_ItemSlot_Base_C_SetSlotSize_Params
{
	int*                                               InSize;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetSelected
struct UITM_ChaCus_ItemSlot_Base_C_SetSelected_Params
{
	bool*                                              InSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.ReleaseResources
struct UITM_ChaCus_ItemSlot_Base_C_ReleaseResources_Params
{
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.ReceiveEquipItem
struct UITM_ChaCus_ItemSlot_Base_C_ReceiveEquipItem_Params
{
	int*                                               InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutSuccess;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.ReceiveGenerateItems
struct UITM_ChaCus_ItemSlot_Base_C_ReceiveGenerateItems_Params
{
	TArray<class UWidget*>                             OutItemWidgets;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetContentAsWidgetClass
struct UITM_ChaCus_ItemSlot_Base_C_SetContentAsWidgetClass_Params
{
	TSoftObjectPtr<class UClass>*                      InWidget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UUserWidget*                                 OutWidget;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetContentAsTexture
struct UITM_ChaCus_ItemSlot_Base_C_SetContentAsTexture_Params
{
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.SetContentAsWidget
struct UITM_ChaCus_ItemSlot_Base_C_SetContentAsWidget_Params
{
	class UWidget**                                    InWidget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.UpdateSelectionBorder
struct UITM_ChaCus_ItemSlot_Base_C_UpdateSelectionBorder_Params
{
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UITM_ChaCus_ItemSlot_Base_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UITM_ChaCus_ItemSlot_Base_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UITM_ChaCus_ItemSlot_Base_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.RefreshNextFrame
struct UITM_ChaCus_ItemSlot_Base_C_RefreshNextFrame_Params
{
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.PreConstruct
struct UITM_ChaCus_ItemSlot_Base_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.PlayIntroAnim
struct UITM_ChaCus_ItemSlot_Base_C_PlayIntroAnim_Params
{
	bool*                                              IsLeftSide;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.ExecuteUbergraph_ITM_ChaCus_ItemSlot_Base
struct UITM_ChaCus_ItemSlot_Base_C_ExecuteUbergraph_ITM_ChaCus_ItemSlot_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_Base.ITM_ChaCus_ItemSlot_Base_C.OnEquippedChanged__DelegateSignature
struct UITM_ChaCus_ItemSlot_Base_C_OnEquippedChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
