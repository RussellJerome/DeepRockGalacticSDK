#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OBJ_Elimination_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetEnemyInfo
struct UOBJ_Elimination_Base_C_GetEnemyInfo_Params
{
	class UObjectInfoComponent*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetInMissionCounterIcon
struct UOBJ_Elimination_Base_C_GetInMissionCounterIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetInMissionCounterText
struct UOBJ_Elimination_Base_C_GetInMissionCounterText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetMissionIcon
struct UOBJ_Elimination_Base_C_GetMissionIcon_Params
{
	struct FObjectiveMissionIcon                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetObjectiveIcon
struct UOBJ_Elimination_Base_C_GetObjectiveIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetObjectiveAmount
struct UOBJ_Elimination_Base_C_GetObjectiveAmount_Params
{
	float*                                             missionLength;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetInMissionText
struct UOBJ_Elimination_Base_C_GetInMissionText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.GetObjectiveDescription
struct UOBJ_Elimination_Base_C_GetObjectiveDescription_Params
{
	float*                                             missionLength;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.ReceiveTargetKilled
struct UOBJ_Elimination_Base_C_ReceiveTargetKilled_Params
{
	class UHealthComponentBase**                       Health;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.ReceiveBeginPlay
struct UOBJ_Elimination_Base_C_ReceiveBeginPlay_Params
{
};

// Function OBJ_Elimination_Base.OBJ_Elimination_Base_C.ExecuteUbergraph_OBJ_Elimination_Base
struct UOBJ_Elimination_Base_C_ExecuteUbergraph_OBJ_Elimination_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
