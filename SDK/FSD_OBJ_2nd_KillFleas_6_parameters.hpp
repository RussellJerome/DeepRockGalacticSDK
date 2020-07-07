#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OBJ_2nd_KillFleas_6_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OBJ_2nd_KillFleas_6.OBJ_2nd_KillFleas_5_C.GetInMissionCounterIcon
struct UOBJ_2nd_KillFleas_5_C_GetInMissionCounterIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OBJ_2nd_KillFleas_6.OBJ_2nd_KillFleas_5_C.GetInMissionCounterText
struct UOBJ_2nd_KillFleas_5_C_GetInMissionCounterText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OBJ_2nd_KillFleas_6.OBJ_2nd_KillFleas_5_C.GetMissionIcon
struct UOBJ_2nd_KillFleas_5_C_GetMissionIcon_Params
{
	struct FObjectiveMissionIcon                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OBJ_2nd_KillFleas_6.OBJ_2nd_KillFleas_5_C.GetObjectiveIcon
struct UOBJ_2nd_KillFleas_5_C_GetObjectiveIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OBJ_2nd_KillFleas_6.OBJ_2nd_KillFleas_5_C.GetObjectiveAmount
struct UOBJ_2nd_KillFleas_5_C_GetObjectiveAmount_Params
{
	float*                                             missionLength;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OBJ_2nd_KillFleas_6.OBJ_2nd_KillFleas_5_C.GetInMissionText
struct UOBJ_2nd_KillFleas_5_C_GetInMissionText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OBJ_2nd_KillFleas_6.OBJ_2nd_KillFleas_5_C.GetObjectiveDescription
struct UOBJ_2nd_KillFleas_5_C_GetObjectiveDescription_Params
{
	float*                                             missionLength;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
