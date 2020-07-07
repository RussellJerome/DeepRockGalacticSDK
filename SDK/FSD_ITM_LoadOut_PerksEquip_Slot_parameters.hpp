#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_LoadOut_PerksEquip_Slot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetPerkToolTip
struct UITM_LoadOut_PerksEquip_Slot_C_GetPerkToolTip_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetIsSelected
struct UITM_LoadOut_PerksEquip_Slot_C_GetIsSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.UpdateSelectionBorder
struct UITM_LoadOut_PerksEquip_Slot_C_UpdateSelectionBorder_Params
{
};

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetSelected
struct UITM_LoadOut_PerksEquip_Slot_C_SetSelected_Params
{
	bool*                                              InSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetHovered
struct UITM_LoadOut_PerksEquip_Slot_C_SetHovered_Params
{
	bool*                                              Hovered;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetIsLocked
struct UITM_LoadOut_PerksEquip_Slot_C_GetIsLocked_Params
{
	bool                                               IsLocked;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetSlotType
struct UITM_LoadOut_PerksEquip_Slot_C_GetSlotType_Params
{
	EPerkUsageType                                     SlotType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.GetPerkAsset
struct UITM_LoadOut_PerksEquip_Slot_C_GetPerkAsset_Params
{
	class UPerkAsset*                                  PerkAsset;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetPerkAsset
struct UITM_LoadOut_PerksEquip_Slot_C_SetPerkAsset_Params
{
	class UPerkAsset**                                 PerkAsset;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetLocked
struct UITM_LoadOut_PerksEquip_Slot_C_SetLocked_Params
{
	bool*                                              IsLocked;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.SetLockedIcon
struct UITM_LoadOut_PerksEquip_Slot_C_SetLockedIcon_Params
{
	class UTexture2D**                                 InTexture;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.UpdateIconAndBackground
struct UITM_LoadOut_PerksEquip_Slot_C_UpdateIconAndBackground_Params
{
};

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.PreConstruct
struct UITM_LoadOut_PerksEquip_Slot_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UITM_LoadOut_PerksEquip_Slot_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UITM_LoadOut_PerksEquip_Slot_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UITM_LoadOut_PerksEquip_Slot_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.ExecuteUbergraph_ITM_LoadOut_PerksEquip_Slot
struct UITM_LoadOut_PerksEquip_Slot_C_ExecuteUbergraph_ITM_LoadOut_PerksEquip_Slot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_LoadOut_PerksEquip_Slot.ITM_LoadOut_PerksEquip_Slot_C.OnClicked__DelegateSignature
struct UITM_LoadOut_PerksEquip_Slot_C_OnClicked__DelegateSignature_Params
{
	class UITM_LoadOut_PerksEquip_Slot_C**             SlotWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
