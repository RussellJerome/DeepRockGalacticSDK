#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_SkinItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_SkinItem.ITM_SkinItem_C.SetIsDefaultItem
struct UITM_SkinItem_C_SetIsDefaultItem_Params
{
	bool*                                              InDefault;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_SkinItem.ITM_SkinItem_C.ClearEventHandlers
struct UITM_SkinItem_C_ClearEventHandlers_Params
{
};

// Function ITM_SkinItem.ITM_SkinItem_C.SetState
struct UITM_SkinItem_C_SetState_Params
{
	class UItemSkin**                                  InSkin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InLocked;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InHovered;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InEquipped;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_SkinItem.ITM_SkinItem_C.IsUnlocked
struct UITM_SkinItem_C_IsUnlocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ITM_SkinItem.ITM_SkinItem_C.Refresh
struct UITM_SkinItem_C_Refresh_Params
{
};

// Function ITM_SkinItem.ITM_SkinItem_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UITM_SkinItem_C_BndEvt__SkinButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_SkinItem.ITM_SkinItem_C.Construct
struct UITM_SkinItem_C_Construct_Params
{
};

// Function ITM_SkinItem.ITM_SkinItem_C.Play Intro
struct UITM_SkinItem_C_Play_Intro_Params
{
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Max_Columns;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_SkinItem.ITM_SkinItem_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UITM_SkinItem_C_BndEvt__SkinButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ITM_SkinItem.ITM_SkinItem_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
struct UITM_SkinItem_C_BndEvt__SkinButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function ITM_SkinItem.ITM_SkinItem_C.Ping Skin
struct UITM_SkinItem_C_Ping_Skin_Params
{
};

// Function ITM_SkinItem.ITM_SkinItem_C.PreConstruct
struct UITM_SkinItem_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_SkinItem.ITM_SkinItem_C.OnAnimUnlockedFinished
struct UITM_SkinItem_C_OnAnimUnlockedFinished_Params
{
};

// Function ITM_SkinItem.ITM_SkinItem_C.RefreshNotificationIcon
struct UITM_SkinItem_C_RefreshNotificationIcon_Params
{
	float*                                             DelayBeforeRefresh;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_SkinItem.ITM_SkinItem_C.ExecuteUbergraph_ITM_SkinItem
struct UITM_SkinItem_C_ExecuteUbergraph_ITM_SkinItem_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_SkinItem.ITM_SkinItem_C.OnNotificationRemoved__DelegateSignature
struct UITM_SkinItem_C_OnNotificationRemoved__DelegateSignature_Params
{
	class UITM_SkinItem_C**                            Skin;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_SkinItem.ITM_SkinItem_C.OnUnhovering__DelegateSignature
struct UITM_SkinItem_C_OnUnhovering__DelegateSignature_Params
{
	class UITM_SkinItem_C**                            SkinItem;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_SkinItem.ITM_SkinItem_C.OnHovering__DelegateSignature
struct UITM_SkinItem_C_OnHovering__DelegateSignature_Params
{
	class UITM_SkinItem_C**                            SkinItem;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_SkinItem.ITM_SkinItem_C.OnSkinClicked__DelegateSignature
struct UITM_SkinItem_C_OnSkinClicked__DelegateSignature_Params
{
	class UITM_SkinItem_C**                            Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
