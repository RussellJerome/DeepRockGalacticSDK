#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_ItemUnlockedIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.Refresh
struct UITM_ItemUnlockedIcon_C_Refresh_Params
{
};

// Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.ClearChildren
struct UITM_ItemUnlockedIcon_C_ClearChildren_Params
{
};

// Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.ChildNotificationChanged
struct UITM_ItemUnlockedIcon_C_ChildNotificationChanged_Params
{
};

// Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.AddChildNotification
struct UITM_ItemUnlockedIcon_C_AddChildNotification_Params
{
	class UITM_ItemUnlockedIcon_C**                    ChildIcon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.RemoveNotification
struct UITM_ItemUnlockedIcon_C_RemoveNotification_Params
{
};

// Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.SetItemIDArray
struct UITM_ItemUnlockedIcon_C_SetItemIDArray_Params
{
	TArray<class UObject*>                             ObjectsWithID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              MatchChildNotifications;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.SetVisible
struct UITM_ItemUnlockedIcon_C_SetVisible_Params
{
};

// Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.HideIcon
struct UITM_ItemUnlockedIcon_C_HideIcon_Params
{
};

// Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.OnAnimFinished
struct UITM_ItemUnlockedIcon_C_OnAnimFinished_Params
{
};

// Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.ExecuteUbergraph_ITM_ItemUnlockedIcon
struct UITM_ItemUnlockedIcon_C_ExecuteUbergraph_ITM_ItemUnlockedIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.OnChanged__DelegateSignature
struct UITM_ItemUnlockedIcon_C_OnChanged__DelegateSignature_Params
{
};

// Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.OnNotificationRemoved__DelegateSignature
struct UITM_ItemUnlockedIcon_C_OnNotificationRemoved__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
