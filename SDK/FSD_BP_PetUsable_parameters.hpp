#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PetUsable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PetUsable.BP_PetUsable_C.BPCanUse
struct UBP_PetUsable_C_BPCanUse_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            UseCollider;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PetUsable.BP_PetUsable_C.ReceiveBeginPlay
struct UBP_PetUsable_C_ReceiveBeginPlay_Params
{
};

// Function BP_PetUsable.BP_PetUsable_C.OnUsedBy_Event_1
struct UBP_PetUsable_C_OnUsedBy_Event_1_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PetUsable.BP_PetUsable_C.ExecuteUbergraph_BP_PetUsable
struct UBP_PetUsable_C_ExecuteUbergraph_BP_PetUsable_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
