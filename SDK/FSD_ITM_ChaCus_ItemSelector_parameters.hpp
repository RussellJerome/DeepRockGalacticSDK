#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_ChaCus_ItemSelector_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.ItemUnhovered
struct UITM_ChaCus_ItemSelector_C_ItemUnhovered_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.ItemHovered
struct UITM_ChaCus_ItemSelector_C_ItemHovered_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.SetAnimOpenProgress
struct UITM_ChaCus_ItemSelector_C_SetAnimOpenProgress_Params
{
	float*                                             InProgress;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.ItemClicked
struct UITM_ChaCus_ItemSelector_C_ItemClicked_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.SetOpen
struct UITM_ChaCus_ItemSelector_C_SetOpen_Params
{
	bool*                                              InOpen;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.PadRowWithBlanks
struct UITM_ChaCus_ItemSelector_C_PadRowWithBlanks_Params
{
};

// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.ShowSlot
struct UITM_ChaCus_ItemSelector_C_ShowSlot_Params
{
	class UITM_ChaCus_ItemSlot_Base_C**                InSlot;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.ClearItems
struct UITM_ChaCus_ItemSelector_C_ClearItems_Params
{
};

// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.AddItem
struct UITM_ChaCus_ItemSelector_C_AddItem_Params
{
	class UWidget**                                    InChildWidget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              InSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsNewItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UITM_ChaCus_ItemSelector_Entry_C*            OutEntry;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     OutItemWidget;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.PreConstruct
struct UITM_ChaCus_ItemSelector_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.Construct
struct UITM_ChaCus_ItemSelector_C_Construct_Params
{
};

// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.OnAnimOpenStarted
struct UITM_ChaCus_ItemSelector_C_OnAnimOpenStarted_Params
{
};

// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.OnAnimOpenFinished
struct UITM_ChaCus_ItemSelector_C_OnAnimOpenFinished_Params
{
};

// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.OnOtherSelectorOpen
struct UITM_ChaCus_ItemSelector_C_OnOtherSelectorOpen_Params
{
	bool*                                              IsOpen;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.ExecuteUbergraph_ITM_ChaCus_ItemSelector
struct UITM_ChaCus_ItemSelector_C_ExecuteUbergraph_ITM_ChaCus_ItemSelector_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.OnSelectorOpenChanged__DelegateSignature
struct UITM_ChaCus_ItemSelector_C_OnSelectorOpenChanged__DelegateSignature_Params
{
	bool*                                              IsOpen;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSelector.ITM_ChaCus_ItemSelector_C.OnItemClicked__DelegateSignature
struct UITM_ChaCus_ItemSelector_C_OnItemClicked__DelegateSignature_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
