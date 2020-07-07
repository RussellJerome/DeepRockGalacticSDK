#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OBJ_1st_RepairMinimules_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OBJ_1st_RepairMinimules.OBJ_1st_RepairMinimules_C.GetInMissionCounterIcon
struct UOBJ_1st_RepairMinimules_C_GetInMissionCounterIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OBJ_1st_RepairMinimules.OBJ_1st_RepairMinimules_C.GetInMissionCounterText
struct UOBJ_1st_RepairMinimules_C_GetInMissionCounterText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OBJ_1st_RepairMinimules.OBJ_1st_RepairMinimules_C.GetMissionIcon
struct UOBJ_1st_RepairMinimules_C_GetMissionIcon_Params
{
	struct FObjectiveMissionIcon                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OBJ_1st_RepairMinimules.OBJ_1st_RepairMinimules_C.GetObjectiveAmount
struct UOBJ_1st_RepairMinimules_C_GetObjectiveAmount_Params
{
	float*                                             missionLength;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OBJ_1st_RepairMinimules.OBJ_1st_RepairMinimules_C.GetInMissionText
struct UOBJ_1st_RepairMinimules_C_GetInMissionText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OBJ_1st_RepairMinimules.OBJ_1st_RepairMinimules_C.GetObjectiveDescription
struct UOBJ_1st_RepairMinimules_C_GetObjectiveDescription_Params
{
	float*                                             missionLength;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OBJ_1st_RepairMinimules.OBJ_1st_RepairMinimules_C.GetObjectiveIcon
struct UOBJ_1st_RepairMinimules_C_GetObjectiveIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
