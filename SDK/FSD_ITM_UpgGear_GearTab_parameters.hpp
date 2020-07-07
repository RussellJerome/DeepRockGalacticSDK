#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_UpgGear_GearTab_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.UpdateNotification
struct UITM_UpgGear_GearTab_C_UpdateNotification_Params
{
	bool*                                              IsItemUnlocked;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.GetItemClass
struct UITM_UpgGear_GearTab_C_GetItemClass_Params
{
	class UClass*                                      itemClass;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.IsItemClass
struct UITM_UpgGear_GearTab_C_IsItemClass_Params
{
	class UClass**                                     InItemClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.Refresh
struct UITM_UpgGear_GearTab_C_Refresh_Params
{
};

// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.SetHovered
struct UITM_UpgGear_GearTab_C_SetHovered_Params
{
	bool*                                              InItemHovered;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.Construct
struct UITM_UpgGear_GearTab_C_Construct_Params
{
};

// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UITM_UpgGear_GearTab_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
struct UITM_UpgGear_GearTab_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UITM_UpgGear_GearTab_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.SetSelected
struct UITM_UpgGear_GearTab_C_SetSelected_Params
{
	bool*                                              ItemSelected;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.PreConstruct
struct UITM_UpgGear_GearTab_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnItemChanged_Event
struct UITM_UpgGear_GearTab_C_OnItemChanged_Event_Params
{
	class UClass**                                     NewItemClass;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnItemUINotificationChange
struct UITM_UpgGear_GearTab_C_OnItemUINotificationChange_Params
{
};

// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.Destruct
struct UITM_UpgGear_GearTab_C_Destruct_Params
{
};

// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.ExecuteUbergraph_ITM_UpgGear_GearTab
struct UITM_UpgGear_GearTab_C_ExecuteUbergraph_ITM_UpgGear_GearTab_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnUnhovered__DelegateSignature
struct UITM_UpgGear_GearTab_C_OnUnhovered__DelegateSignature_Params
{
	class UITM_UpgGear_GearTab_C**                     Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnHovered__DelegateSignature
struct UITM_UpgGear_GearTab_C_OnHovered__DelegateSignature_Params
{
	class UITM_UpgGear_GearTab_C**                     Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_UpgGear_GearTab.ITM_UpgGear_GearTab_C.OnClicked__DelegateSignature
struct UITM_UpgGear_GearTab_C_OnClicked__DelegateSignature_Params
{
	class UITM_UpgGear_GearTab_C**                     Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
