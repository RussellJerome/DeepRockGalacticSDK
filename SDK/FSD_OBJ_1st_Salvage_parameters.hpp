#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OBJ_1st_Salvage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetInMissionCounterIcon
struct UOBJ_1st_Salvage_C_GetInMissionCounterIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetInMissionCounterText
struct UOBJ_1st_Salvage_C_GetInMissionCounterText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetMissionIcon
struct UOBJ_1st_Salvage_C_GetMissionIcon_Params
{
	struct FObjectiveMissionIcon                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetObjectiveAmount
struct UOBJ_1st_Salvage_C_GetObjectiveAmount_Params
{
	float*                                             missionLength;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetInMissionText
struct UOBJ_1st_Salvage_C_GetInMissionText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetObjectiveDescription
struct UOBJ_1st_Salvage_C_GetObjectiveDescription_Params
{
	float*                                             missionLength;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetObjectiveIcon
struct UOBJ_1st_Salvage_C_GetObjectiveIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.ReceiveBeginPlay
struct UOBJ_1st_Salvage_C_ReceiveBeginPlay_Params
{
};

// Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.AllActorsSalvaged
struct UOBJ_1st_Salvage_C_AllActorsSalvaged_Params
{
};

// Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.ExecuteUbergraph_OBJ_1st_Salvage
struct UOBJ_1st_Salvage_C_ExecuteUbergraph_OBJ_1st_Salvage_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
