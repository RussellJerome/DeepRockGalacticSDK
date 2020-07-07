#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TSK_FindRandomPoint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TSK_FindRandomPoint.TSK_FindRandomPoint_C.snap
struct UTSK_FindRandomPoint_C_snap_Params
{
	bool*                                              SnapToCeiling;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDeepPathfinderMovement**                    Pathfinder;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function TSK_FindRandomPoint.TSK_FindRandomPoint_C.ReceiveExecuteAI
struct UTSK_FindRandomPoint_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TSK_FindRandomPoint.TSK_FindRandomPoint_C.ExecuteUbergraph_TSK_FindRandomPoint
struct UTSK_FindRandomPoint_C_ExecuteUbergraph_TSK_FindRandomPoint_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
