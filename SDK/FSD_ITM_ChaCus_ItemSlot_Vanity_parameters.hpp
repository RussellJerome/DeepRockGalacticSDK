#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_ChaCus_ItemSlot_Vanity_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.GetItemName
struct UITM_ChaCus_ItemSlot_Vanity_C_GetItemName_Params
{
	class UCraftableObject**                           InVanityItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.UpdateItemWidget
struct UITM_ChaCus_ItemSlot_Vanity_C_UpdateItemWidget_Params
{
	class UITM_GeneratedIcon_Item_C**                  InWidget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVanityItem**                                InVanityItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              In_Show_Tool_Tip;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.ReceiveEquipItem
struct UITM_ChaCus_ItemSlot_Vanity_C_ReceiveEquipItem_Params
{
	int*                                               InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutSuccess;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.ReceivePreviewItem
struct UITM_ChaCus_ItemSlot_Vanity_C_ReceivePreviewItem_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutSuccess;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.ReceiveItemNotificationData
struct UITM_ChaCus_ItemSlot_Vanity_C_ReceiveItemNotificationData_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.ReceiveInitialize
struct UITM_ChaCus_ItemSlot_Vanity_C_ReceiveInitialize_Params
{
	int                                                AvailableItems;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.ReceiveGetSelectedIndex
struct UITM_ChaCus_ItemSlot_Vanity_C_ReceiveGetSelectedIndex_Params
{
	int                                                OutIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.CreateItemWidget
struct UITM_ChaCus_ItemSlot_Vanity_C_CreateItemWidget_Params
{
	class UVanityItem**                                InVanityItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InBackgroundVisible;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InShowToolTip;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UITM_GeneratedIcon_Item_C*                   OutItemWidget;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.SetSelectedItem
struct UITM_ChaCus_ItemSlot_Vanity_C_SetSelectedItem_Params
{
	class UVanityItem**                                Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Equip;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.ReceiveGenerateItems
struct UITM_ChaCus_ItemSlot_Vanity_C_ReceiveGenerateItems_Params
{
	TArray<class UWidget*>                             OutItemWidgets;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.ReceiveReleaseResource
struct UITM_ChaCus_ItemSlot_Vanity_C_ReceiveReleaseResource_Params
{
	class UWidget**                                    InWidget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.ReceivePreConstruct
struct UITM_ChaCus_ItemSlot_Vanity_C_ReceivePreConstruct_Params
{
};

// Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.On Initialized
struct UITM_ChaCus_ItemSlot_Vanity_C_On_Initialized_Params
{
};

// Function ITM_ChaCus_ItemSlot_Vanity.ITM_ChaCus_ItemSlot_Vanity_C.ExecuteUbergraph_ITM_ChaCus_ItemSlot_Vanity
struct UITM_ChaCus_ItemSlot_Vanity_C_ExecuteUbergraph_ITM_ChaCus_ItemSlot_Vanity_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
