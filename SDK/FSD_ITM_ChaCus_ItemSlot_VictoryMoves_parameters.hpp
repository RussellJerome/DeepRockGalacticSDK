#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_ChaCus_ItemSlot_VictoryMoves_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.ReceiveEquipItem
struct UITM_ChaCus_ItemSlot_VictoryMoves_C_ReceiveEquipItem_Params
{
	int*                                               InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutSuccess;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.PreviewItem
struct UITM_ChaCus_ItemSlot_VictoryMoves_C_PreviewItem_Params
{
	class UVictoryPose**                               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutSuccess;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.ReceivePreviewItem
struct UITM_ChaCus_ItemSlot_VictoryMoves_C_ReceivePreviewItem_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutSuccess;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.ReceiveItemNotificationData
struct UITM_ChaCus_ItemSlot_VictoryMoves_C_ReceiveItemNotificationData_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.ReceiveInitialize
struct UITM_ChaCus_ItemSlot_VictoryMoves_C_ReceiveInitialize_Params
{
	int                                                AvailableItems;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.ReceiveGetSelectedIndex
struct UITM_ChaCus_ItemSlot_VictoryMoves_C_ReceiveGetSelectedIndex_Params
{
	int                                                OutIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.UpdateOrCreateItemWidget
struct UITM_ChaCus_ItemSlot_VictoryMoves_C_UpdateOrCreateItemWidget_Params
{
	class UVictoryPose**                               InVictoryMove;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget**                                    InReuseWidget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              InShowToolTip;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     OutWidget;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.ReceiveGenerateItems
struct UITM_ChaCus_ItemSlot_VictoryMoves_C_ReceiveGenerateItems_Params
{
	TArray<class UWidget*>                             OutItemWidgets;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.UpdateEquipped
struct UITM_ChaCus_ItemSlot_VictoryMoves_C_UpdateEquipped_Params
{
};

// Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.ReceivePreConstruct
struct UITM_ChaCus_ItemSlot_VictoryMoves_C_ReceivePreConstruct_Params
{
};

// Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.SetHovered
struct UITM_ChaCus_ItemSlot_VictoryMoves_C_SetHovered_Params
{
	bool*                                              InSlotHovered;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSlot_VictoryMoves.ITM_ChaCus_ItemSlot_VictoryMoves_C.ExecuteUbergraph_ITM_ChaCus_ItemSlot_VictoryMoves
struct UITM_ChaCus_ItemSlot_VictoryMoves_C_ExecuteUbergraph_ITM_ChaCus_ItemSlot_VictoryMoves_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
