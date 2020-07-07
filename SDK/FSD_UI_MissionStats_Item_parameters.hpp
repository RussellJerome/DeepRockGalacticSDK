#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_MissionStats_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_MissionStats_Item.UI_MissionStats_Item_C.IsInteractable
struct UUI_MissionStats_Item_C_IsInteractable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_MissionStats_Item.UI_MissionStats_Item_C.SetCategoryFilter
struct UUI_MissionStats_Item_C_SetCategoryFilter_Params
{
	TArray<class UTexture2D*>                          Filter;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_MissionStats_Item.UI_MissionStats_Item_C.GetMissionStat
struct UUI_MissionStats_Item_C_GetMissionStat_Params
{
	class UMissionStat*                                Mission_Stat;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MissionStats_Item.UI_MissionStats_Item_C.PreConstruct
struct UUI_MissionStats_Item_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MissionStats_Item.UI_MissionStats_Item_C.Construct
struct UUI_MissionStats_Item_C_Construct_Params
{
};

// Function UI_MissionStats_Item.UI_MissionStats_Item_C.OnCountChanged_Event
struct UUI_MissionStats_Item_C_OnCountChanged_Event_Params
{
	class UMissionStat**                               MissionStat;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MissionStats_Item.UI_MissionStats_Item_C.Set Selected
struct UUI_MissionStats_Item_C_Set_Selected_Params
{
	bool*                                              Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MissionStats_Item.UI_MissionStats_Item_C.OnMouseEnter
struct UUI_MissionStats_Item_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_MissionStats_Item.UI_MissionStats_Item_C.OnMouseLeave
struct UUI_MissionStats_Item_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_MissionStats_Item.UI_MissionStats_Item_C.ExecuteUbergraph_UI_MissionStats_Item
struct UUI_MissionStats_Item_C_ExecuteUbergraph_UI_MissionStats_Item_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MissionStats_Item.UI_MissionStats_Item_C.OnHoverEnd__DelegateSignature
struct UUI_MissionStats_Item_C_OnHoverEnd__DelegateSignature_Params
{
	class UUI_MissionStats_Item_C**                    Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_MissionStats_Item.UI_MissionStats_Item_C.OnHoverBegin__DelegateSignature
struct UUI_MissionStats_Item_C_OnHoverBegin__DelegateSignature_Params
{
	class UUI_MissionStats_Item_C**                    Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
