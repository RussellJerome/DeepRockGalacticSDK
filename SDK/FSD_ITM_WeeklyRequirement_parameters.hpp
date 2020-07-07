#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_WeeklyRequirement_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.DoubleDigit
struct UITM_WeeklyRequirement_C_DoubleDigit_Params
{
	int*                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.GetTimeText
struct UITM_WeeklyRequirement_C_GetTimeText_Params
{
	struct FText*                                      Message_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FTimespan*                                  Timespan;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText                                       Result;                                                   // (Parm, OutParm)
};

// Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.PreConstruct
struct UITM_WeeklyRequirement_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.Construct
struct UITM_WeeklyRequirement_C_Construct_Params
{
};

// Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.Update Time
struct UITM_WeeklyRequirement_C_Update_Time_Params
{
};

// Function ITM_WeeklyRequirement.ITM_WeeklyRequirement_C.ExecuteUbergraph_ITM_WeeklyRequirement
struct UITM_WeeklyRequirement_C_ExecuteUbergraph_ITM_WeeklyRequirement_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
