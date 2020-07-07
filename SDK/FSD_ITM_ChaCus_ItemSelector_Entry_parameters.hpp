#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_ChaCus_ItemSelector_Entry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.SetHovered
struct UITM_ChaCus_ItemSelector_Entry_C_SetHovered_Params
{
	bool*                                              InHovered;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.SetSelected
struct UITM_ChaCus_ItemSelector_Entry_C_SetSelected_Params
{
	bool*                                              InSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.SetIsNewItem
struct UITM_ChaCus_ItemSelector_Entry_C_SetIsNewItem_Params
{
	bool*                                              IsNew;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.UpdateBorder
struct UITM_ChaCus_ItemSelector_Entry_C_UpdateBorder_Params
{
};

// Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.CreateChild
struct UITM_ChaCus_ItemSelector_Entry_C_CreateChild_Params
{
	TSoftObjectPtr<class UClass>*                      InChildClass;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                                     OutChild;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.SetChild
struct UITM_ChaCus_ItemSelector_Entry_C_SetChild_Params
{
	class UWidget**                                    InWidget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UITM_ChaCus_ItemSelector_Entry_C_BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UITM_ChaCus_ItemSelector_Entry_C_BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UITM_ChaCus_ItemSelector_Entry_C_BndEvt__EntryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.PreConstruct
struct UITM_ChaCus_ItemSelector_Entry_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.ExecuteUbergraph_ITM_ChaCus_ItemSelector_Entry
struct UITM_ChaCus_ItemSelector_Entry_C_ExecuteUbergraph_ITM_ChaCus_ItemSelector_Entry_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.OnEntryClicked__DelegateSignature
struct UITM_ChaCus_ItemSelector_Entry_C_OnEntryClicked__DelegateSignature_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.OnEntryUnhovered__DelegateSignature
struct UITM_ChaCus_ItemSelector_Entry_C_OnEntryUnhovered__DelegateSignature_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_ChaCus_ItemSelector_Entry.ITM_ChaCus_ItemSelector_Entry_C.OnEntryHovered__DelegateSignature
struct UITM_ChaCus_ItemSelector_Entry_C_OnEntryHovered__DelegateSignature_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
