#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OBJ_DD_AlienEggs_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OBJ_DD_AlienEggs.OBJ_DD_AlienEggs_C.GetMissionIcon
struct UOBJ_DD_AlienEggs_C_GetMissionIcon_Params
{
	struct FObjectiveMissionIcon                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OBJ_DD_AlienEggs.OBJ_DD_AlienEggs_C.GetNumberOfSpeicalEggs
struct UOBJ_DD_AlienEggs_C_GetNumberOfSpeicalEggs_Params
{
	TArray<class ABP_AlienEgg_C*>*                     TargetArray;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OBJ_DD_AlienEggs.OBJ_DD_AlienEggs_C.TurnOnSpecialEggs
struct UOBJ_DD_AlienEggs_C_TurnOnSpecialEggs_Params
{
};

// Function OBJ_DD_AlienEggs.OBJ_DD_AlienEggs_C.Receive_StartTracking
struct UOBJ_DD_AlienEggs_C_Receive_StartTracking_Params
{
};

// Function OBJ_DD_AlienEggs.OBJ_DD_AlienEggs_C.ExecuteUbergraph_OBJ_DD_AlienEggs
struct UOBJ_DD_AlienEggs_C_ExecuteUbergraph_OBJ_DD_AlienEggs_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
