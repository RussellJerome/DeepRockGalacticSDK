#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OBJ_1st_Gather_AlienEggs_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OBJ_1st_Gather_AlienEggs.OBJ_1st_Gather_AlienEggs_C.GetMissionIcon
struct UOBJ_1st_Gather_AlienEggs_C_GetMissionIcon_Params
{
	struct FObjectiveMissionIcon                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OBJ_1st_Gather_AlienEggs.OBJ_1st_Gather_AlienEggs_C.GetNumberOfSpeicalEggs
struct UOBJ_1st_Gather_AlienEggs_C_GetNumberOfSpeicalEggs_Params
{
	TArray<class AActor*>*                             TargetArray;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OBJ_1st_Gather_AlienEggs.OBJ_1st_Gather_AlienEggs_C.TurnOnSpecialEggs
struct UOBJ_1st_Gather_AlienEggs_C_TurnOnSpecialEggs_Params
{
};

// Function OBJ_1st_Gather_AlienEggs.OBJ_1st_Gather_AlienEggs_C.Receive_StartTracking
struct UOBJ_1st_Gather_AlienEggs_C_Receive_StartTracking_Params
{
};

// Function OBJ_1st_Gather_AlienEggs.OBJ_1st_Gather_AlienEggs_C.ExecuteUbergraph_OBJ_1st_Gather_AlienEggs
struct UOBJ_1st_Gather_AlienEggs_C_ExecuteUbergraph_OBJ_1st_Gather_AlienEggs_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
