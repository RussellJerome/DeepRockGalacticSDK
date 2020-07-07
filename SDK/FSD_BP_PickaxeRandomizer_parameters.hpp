#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PickaxeRandomizer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.SetMesh
struct ABP_PickaxeRandomizer_C_SetMesh_Params
{
	class UStaticMeshComponent**                       self2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UStaticMesh*>*                        TargetArray;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.ReceiveBeginPlay
struct ABP_PickaxeRandomizer_C_ReceiveBeginPlay_Params
{
};

// Function BP_PickaxeRandomizer.BP_PickaxeRandomizer_C.ExecuteUbergraph_BP_PickaxeRandomizer
struct ABP_PickaxeRandomizer_C_ExecuteUbergraph_BP_PickaxeRandomizer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
