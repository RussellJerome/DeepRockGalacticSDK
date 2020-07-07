#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_DeathStats_View_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_DeathStats_View.UI_DeathStats_View_C.SortStats
struct UUI_DeathStats_View_C_SortStats_Params
{
	TArray<class UMissionStat*>                        InStats;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UTexture2D*>                          Categories;                                               // (Parm, OutParm, ZeroConstructor)
	TArray<class UMissionStat*>                        Sorted_Stats;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function UI_DeathStats_View.UI_DeathStats_View_C.GetMissionStats
struct UUI_DeathStats_View_C_GetMissionStats_Params
{
	TArray<class UMissionStat*>                        Assets;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function UI_DeathStats_View.UI_DeathStats_View_C.Store Mode
struct UUI_DeathStats_View_C_Store_Mode_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_DeathStats_View.UI_DeathStats_View_C.Set Selected Item
struct UUI_DeathStats_View_C_Set_Selected_Item_Params
{
	class UUI_InfirmaryStats_Item_C**                  SelectedLine;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_DeathStats_View.UI_DeathStats_View_C.SetStatsOwner
struct UUI_DeathStats_View_C_SetStatsOwner_Params
{
	class AFSDPlayerState**                            Player_State;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_DeathStats_View.UI_DeathStats_View_C.ChangeName
struct UUI_DeathStats_View_C_ChangeName_Params
{
	class FString*                                     NewName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_DeathStats_View.UI_DeathStats_View_C.Rebuild
struct UUI_DeathStats_View_C_Rebuild_Params
{
};

// Function UI_DeathStats_View.UI_DeathStats_View_C.ExecuteUbergraph_UI_DeathStats_View
struct UUI_DeathStats_View_C_ExecuteUbergraph_UI_DeathStats_View_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
