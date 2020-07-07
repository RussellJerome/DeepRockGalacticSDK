#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Hoop_History_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_Hoop_History.UI_Hoop_History_C.GetHistoryCount
struct UUI_Hoop_History_C_GetHistoryCount_Params
{
	int                                                History_Count;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Hoop_History.UI_Hoop_History_C.OnRep_Scores
struct UUI_Hoop_History_C_OnRep_Scores_Params
{
};

// Function UI_Hoop_History.UI_Hoop_History_C.Construct
struct UUI_Hoop_History_C_Construct_Params
{
};

// Function UI_Hoop_History.UI_Hoop_History_C.UpdateScores
struct UUI_Hoop_History_C_UpdateScores_Params
{
	TArray<int>*                                       Scores;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_Hoop_History.UI_Hoop_History_C.ExecuteUbergraph_UI_Hoop_History
struct UUI_Hoop_History_C_ExecuteUbergraph_UI_Hoop_History_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
