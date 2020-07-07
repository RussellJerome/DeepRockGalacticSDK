#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OBJ_FindItems_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.IsObjectiveResource
struct UOBJ_FindItems_Base_C_IsObjectiveResource_Params
{
	class UResourceData**                              InResource;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetInMissionCounterIcon
struct UOBJ_FindItems_Base_C_GetInMissionCounterIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetInMissionCounterText
struct UOBJ_FindItems_Base_C_GetInMissionCounterText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetObjectiveIcon
struct UOBJ_FindItems_Base_C_GetObjectiveIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetObjectiveAmount
struct UOBJ_FindItems_Base_C_GetObjectiveAmount_Params
{
	float*                                             missionLength;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetInMissionText
struct UOBJ_FindItems_Base_C_GetInMissionText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OBJ_FindItems_Base.OBJ_FindItems_Base_C.GetObjectiveDescription
struct UOBJ_FindItems_Base_C_GetObjectiveDescription_Params
{
	float*                                             missionLength;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
