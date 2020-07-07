#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_MissionStats_View_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_MissionStats_View.UI_MissionStats_View_C.SortStats
struct UUI_MissionStats_View_C_SortStats_Params
{
	TArray<class UMissionStat*>                        InStats;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UTexture2D*>                          Categories;                                               // (Parm, OutParm, ZeroConstructor)
	TArray<class UMissionStat*>                        Sorted_Stats;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function UI_MissionStats_View.UI_MissionStats_View_C.GetMissionStats
struct UUI_MissionStats_View_C_GetMissionStats_Params
{
	TArray<class UMissionStat*>                        Assets;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function UI_MissionStats_View.UI_MissionStats_View_C.PreConstruct
struct UUI_MissionStats_View_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MissionStats_View.UI_MissionStats_View_C.Construct
struct UUI_MissionStats_View_C_Construct_Params
{
};

// Function UI_MissionStats_View.UI_MissionStats_View_C.Store Mode
struct UUI_MissionStats_View_C_Store_Mode_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MissionStats_View.UI_MissionStats_View_C.Set Selected Item
struct UUI_MissionStats_View_C_Set_Selected_Item_Params
{
	class UUI_MissionStats_Item_C**                    SelectedLine;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_MissionStats_View.UI_MissionStats_View_C.OnHoverBegin_Event
struct UUI_MissionStats_View_C_OnHoverBegin_Event_Params
{
	class UUI_MissionStats_Item_C**                    Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_MissionStats_View.UI_MissionStats_View_C.OnHoverEnd_Event
struct UUI_MissionStats_View_C_OnHoverEnd_Event_Params
{
	class UUI_MissionStats_Item_C**                    Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_MissionStats_View.UI_MissionStats_View_C.Setup Category Selection
struct UUI_MissionStats_View_C_Setup_Category_Selection_Params
{
};

// Function UI_MissionStats_View.UI_MissionStats_View_C.OnCategorySelectionChanged
struct UUI_MissionStats_View_C_OnCategorySelectionChanged_Params
{
};

// Function UI_MissionStats_View.UI_MissionStats_View_C.ExecuteUbergraph_UI_MissionStats_View
struct UUI_MissionStats_View_C_ExecuteUbergraph_UI_MissionStats_View_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
