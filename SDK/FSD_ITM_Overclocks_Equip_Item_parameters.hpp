#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Overclocks_Equip_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.GetToolTipWidget
struct UITM_Overclocks_Equip_Item_C_GetToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.SetState
struct UITM_Overclocks_Equip_Item_C_SetState_Params
{
	EItemUpgradeStatus*                                InState;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.GetOverClock
struct UITM_Overclocks_Equip_Item_C_GetOverClock_Params
{
	class UItemUpgrade*                                Overclock;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.SetOverclock
struct UITM_Overclocks_Equip_Item_C_SetOverclock_Params
{
	class UItemUpgrade**                               InOverclock;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.SetIconSize
struct UITM_Overclocks_Equip_Item_C_SetIconSize_Params
{
	int*                                               NewSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.PreConstruct
struct UITM_Overclocks_Equip_Item_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UITM_Overclocks_Equip_Item_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UITM_Overclocks_Equip_Item_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UITM_Overclocks_Equip_Item_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.ExecuteUbergraph_ITM_Overclocks_Equip_Item
struct UITM_Overclocks_Equip_Item_C_ExecuteUbergraph_ITM_Overclocks_Equip_Item_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.OnClicked__DelegateSignature
struct UITM_Overclocks_Equip_Item_C_OnClicked__DelegateSignature_Params
{
	class UITM_Overclocks_Equip_Item_C**               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.OnUnhovered__DelegateSignature
struct UITM_Overclocks_Equip_Item_C_OnUnhovered__DelegateSignature_Params
{
	class UITM_Overclocks_Equip_Item_C**               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_Overclocks_Equip_Item.ITM_Overclocks_Equip_Item_C.OnHovered__DelegateSignature
struct UITM_Overclocks_Equip_Item_C_OnHovered__DelegateSignature_Params
{
	class UITM_Overclocks_Equip_Item_C**               Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
