#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TSK_FindRandomPointFrom_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C.GetLocation
struct UTSK_FindRandomPointFrom_C_GetLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C.snap
struct UTSK_FindRandomPointFrom_C_snap_Params
{
	bool*                                              SnapToCeiling;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDeepPathfinderMovement**                    Pathfinder;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C.ReceiveExecuteAI
struct UTSK_FindRandomPointFrom_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C.ExecuteUbergraph_TSK_FindRandomPointFrom
struct UTSK_FindRandomPointFrom_C_ExecuteUbergraph_TSK_FindRandomPointFrom_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
