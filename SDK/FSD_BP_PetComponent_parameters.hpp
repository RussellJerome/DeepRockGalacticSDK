#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PetComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PetComponent.BP_PetComponent_C.SetGameplayTags
struct UBP_PetComponent_C_SetGameplayTags_Params
{
	class AFSDPawn**                                   self2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PetComponent.BP_PetComponent_C.ActivateMaterial
struct UBP_PetComponent_C_ActivateMaterial_Params
{
	class USkeletalMeshComponent**                     Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_PetComponent.BP_PetComponent_C.OnLoaded_2EDD9CD4487CCB079DB91DB3612F9E9C
struct UBP_PetComponent_C_OnLoaded_2EDD9CD4487CCB079DB91DB3612F9E9C_Params
{
	class UClass**                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PetComponent.BP_PetComponent_C.OnDeath
struct UBP_PetComponent_C_OnDeath_Params
{
	class UHealthComponentBase**                       HealthComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_PetComponent.BP_PetComponent_C.ReceiveBeginPlay
struct UBP_PetComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_PetComponent.BP_PetComponent_C.OnAttackDamageDealt
struct UBP_PetComponent_C_OnAttackDamageDealt_Params
{
	float*                                             FloatValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PetComponent.BP_PetComponent_C.OnDeath_Event_1
struct UBP_PetComponent_C_OnDeath_Event_1_Params
{
	class UHealthComponentBase**                       HealthComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_PetComponent.BP_PetComponent_C.ExecuteUbergraph_BP_PetComponent
struct UBP_PetComponent_C_ExecuteUbergraph_BP_PetComponent_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
