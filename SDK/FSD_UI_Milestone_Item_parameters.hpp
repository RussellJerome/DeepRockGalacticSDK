#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Milestone_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_Milestone_Item.UI_Milestone_Item_C.UpdateRewardStar
struct UUI_Milestone_Item_C_UpdateRewardStar_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Milestone_Item.UI_Milestone_Item_C.GetIsClaimable
struct UUI_Milestone_Item_C_GetIsClaimable_Params
{
	bool                                               ItemClaimable;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Milestone_Item.UI_Milestone_Item_C.GetIcon
struct UUI_Milestone_Item_C_GetIcon_Params
{
	class UTexture2D*                                  Icon;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Milestone_Item.UI_Milestone_Item_C.SetCategoryFilter
struct UUI_Milestone_Item_C_SetCategoryFilter_Params
{
	TArray<class UTexture2D*>                          Filter;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_Milestone_Item.UI_Milestone_Item_C.OnMouseButtonUp
struct UUI_Milestone_Item_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Milestone_Item.UI_Milestone_Item_C.OnMouseButtonDown
struct UUI_Milestone_Item_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_Milestone_Item.UI_Milestone_Item_C.SetHovered
struct UUI_Milestone_Item_C_SetHovered_Params
{
	bool*                                              Hovered;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Milestone_Item.UI_Milestone_Item_C.SetProgress
struct UUI_Milestone_Item_C_SetProgress_Params
{
	int*                                               Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CurrentCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TargetCount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsClaimable;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Milestone_Item.UI_Milestone_Item_C.PreConstruct
struct UUI_Milestone_Item_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Milestone_Item.UI_Milestone_Item_C.Construct
struct UUI_Milestone_Item_C_Construct_Params
{
};

// Function UI_Milestone_Item.UI_Milestone_Item_C.UpdateItem
struct UUI_Milestone_Item_C_UpdateItem_Params
{
};

// Function UI_Milestone_Item.UI_Milestone_Item_C.OnCountChanged_Event
struct UUI_Milestone_Item_C_OnCountChanged_Event_Params
{
	class UMissionStat**                               MissionStat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Milestone_Item.UI_Milestone_Item_C.OnMouseEnter
struct UUI_Milestone_Item_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_Milestone_Item.UI_Milestone_Item_C.OnMouseLeave
struct UUI_Milestone_Item_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_Milestone_Item.UI_Milestone_Item_C.Claim KPI
struct UUI_Milestone_Item_C_Claim_KPI_Params
{
};

// Function UI_Milestone_Item.UI_Milestone_Item_C.CreateRewardStars
struct UUI_Milestone_Item_C_CreateRewardStars_Params
{
	int*                                               StarCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Milestone_Item.UI_Milestone_Item_C.SetAnimClaimProgress
struct UUI_Milestone_Item_C_SetAnimClaimProgress_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Milestone_Item.UI_Milestone_Item_C.OnClaimAnimFinished
struct UUI_Milestone_Item_C_OnClaimAnimFinished_Params
{
};

// Function UI_Milestone_Item.UI_Milestone_Item_C.OnCompletedAnimFinished
struct UUI_Milestone_Item_C_OnCompletedAnimFinished_Params
{
};

// Function UI_Milestone_Item.UI_Milestone_Item_C.OnCompletedAnimStarted
struct UUI_Milestone_Item_C_OnCompletedAnimStarted_Params
{
};

// Function UI_Milestone_Item.UI_Milestone_Item_C.ExecuteUbergraph_UI_Milestone_Item
struct UUI_Milestone_Item_C_ExecuteUbergraph_UI_Milestone_Item_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Milestone_Item.UI_Milestone_Item_C.OnItemClaimableChanged__DelegateSignature
struct UUI_Milestone_Item_C_OnItemClaimableChanged__DelegateSignature_Params
{
	class UUI_Milestone_Item_C**                       Milestone_Item;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
