#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_StatusScreen_PerkItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Get_ItemButton_ToolTipWidget
struct UITM_StatusScreen_PerkItem_C_Get_ItemButton_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.GetPerkAsset
struct UITM_StatusScreen_PerkItem_C_GetPerkAsset_Params
{
	class UPerkAsset*                                  PerkAsset;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Set Perk
struct UITM_StatusScreen_PerkItem_C_Set_Perk_Params
{
	class UPerkAsset**                                 PerkAsset;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Set Selected
struct UITM_StatusScreen_PerkItem_C_Set_Selected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UITM_StatusScreen_PerkItem_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UITM_StatusScreen_PerkItem_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UITM_StatusScreen_PerkItem_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Refresh
struct UITM_StatusScreen_PerkItem_C_Refresh_Params
{
};

// Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.Construct
struct UITM_StatusScreen_PerkItem_C_Construct_Params
{
};

// Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.PreConstruct
struct UITM_StatusScreen_PerkItem_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.ExecuteUbergraph_ITM_StatusScreen_PerkItem
struct UITM_StatusScreen_PerkItem_C_ExecuteUbergraph_ITM_StatusScreen_PerkItem_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_StatusScreen_PerkItem.ITM_StatusScreen_PerkItem_C.OnClicked__DelegateSignature
struct UITM_StatusScreen_PerkItem_C_OnClicked__DelegateSignature_Params
{
	class UITM_StatusScreen_PerkItem_C**               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
