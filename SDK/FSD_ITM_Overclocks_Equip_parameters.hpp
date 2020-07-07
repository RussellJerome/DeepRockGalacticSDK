#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Overclocks_Equip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.TryToggleSelection
struct UITM_Overclocks_Equip_C_TryToggleSelection_Params
{
};

// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnRefreshItem
struct UITM_Overclocks_Equip_C_OnRefreshItem_Params
{
	bool*                                              WasCreated;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget**                                Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               ActiveIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetMenuLocked
struct UITM_Overclocks_Equip_C_SetMenuLocked_Params
{
	bool*                                              InLocked;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InRequirementMet;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              OverclockEquipped;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetMenuActive
struct UITM_Overclocks_Equip_C_SetMenuActive_Params
{
	bool*                                              Inactive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ActiveChanged;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.ShowOverclock
struct UITM_Overclocks_Equip_C_ShowOverclock_Params
{
	class UItemUpgrade**                               Overclock;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetSelectionVisible
struct UITM_Overclocks_Equip_C_SetSelectionVisible_Params
{
	bool*                                              inVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemUnhovered
struct UITM_Overclocks_Equip_C_OnItemUnhovered_Params
{
	class UITM_Overclocks_Equip_Item_C**               Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemHovered
struct UITM_Overclocks_Equip_C_OnItemHovered_Params
{
	class UITM_Overclocks_Equip_Item_C**               Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemClicked
struct UITM_Overclocks_Equip_C_OnItemClicked_Params
{
	class UITM_Overclocks_Equip_Item_C**               Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.Refresh
struct UITM_Overclocks_Equip_C_Refresh_Params
{
};

// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetData
struct UITM_Overclocks_Equip_C_SetData_Params
{
	class UClass**                                     InCharacterClass;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     InItemClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.SetBackgroundTint
struct UITM_Overclocks_Equip_C_SetBackgroundTint_Params
{
	struct FLinearColor*                               Tint;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UITM_Overclocks_Equip_C_BndEvt__EquipButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UITM_Overclocks_Equip_C_BndEvt__EquipButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UITM_Overclocks_Equip_C_BndEvt__EquipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnPopUpFinished
struct UITM_Overclocks_Equip_C_OnPopUpFinished_Params
{
};

// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnPopupStarted
struct UITM_Overclocks_Equip_C_OnPopupStarted_Params
{
};

// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnItemUpgradeCrafted_Event
struct UITM_Overclocks_Equip_C_OnItemUpgradeCrafted_Event_Params
{
	class UItemUpgrade**                               Upgrade;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnMouseLeave
struct UITM_Overclocks_Equip_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.OnMouseEnter
struct UITM_Overclocks_Equip_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.Construct
struct UITM_Overclocks_Equip_C_Construct_Params
{
};

// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.PreConstruct
struct UITM_Overclocks_Equip_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Overclocks_Equip.ITM_Overclocks_Equip_C.ExecuteUbergraph_ITM_Overclocks_Equip
struct UITM_Overclocks_Equip_C_ExecuteUbergraph_ITM_Overclocks_Equip_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
