#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_BaseUpgradeIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.IsInteractable
struct UITM_BaseUpgradeIcon_C_IsInteractable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.Update
struct UITM_BaseUpgradeIcon_C_Update_Params
{
	class UTexture2D**                                 InIcon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemUpgradeStatus*                                InStatus;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InLockRequirement;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 LockTexture;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENUM_MenuColors>*                      LockTint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InShowEquippedAsBorder;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InShowLockIcon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InShowLockRequirement;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InTierLocked;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.PreConstruct
struct UITM_BaseUpgradeIcon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.BndEvt__WidgetButton_K2Node_ComponentBoundEvent_79_OnButtonHoverEvent__DelegateSignature
struct UITM_BaseUpgradeIcon_C_BndEvt__WidgetButton_K2Node_ComponentBoundEvent_79_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.BndEvt__WidgetButton_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature
struct UITM_BaseUpgradeIcon_C_BndEvt__WidgetButton_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.BndEvt__WidgetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UITM_BaseUpgradeIcon_C_BndEvt__WidgetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.ExecuteUbergraph_ITM_BaseUpgradeIcon
struct UITM_BaseUpgradeIcon_C_ExecuteUbergraph_ITM_BaseUpgradeIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.OnClicked__DelegateSignature
struct UITM_BaseUpgradeIcon_C_OnClicked__DelegateSignature_Params
{
	class UITM_BaseUpgradeIcon_C**                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.OnHoverEnd__DelegateSignature
struct UITM_BaseUpgradeIcon_C_OnHoverEnd__DelegateSignature_Params
{
	class UITM_BaseUpgradeIcon_C**                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.OnHoverBegin__DelegateSignature
struct UITM_BaseUpgradeIcon_C_OnHoverBegin__DelegateSignature_Params
{
	class UITM_BaseUpgradeIcon_C**                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
