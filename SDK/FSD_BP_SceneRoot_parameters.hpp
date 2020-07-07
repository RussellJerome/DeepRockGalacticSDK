#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SceneRoot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SceneRoot.BP_SceneRoot_C.InitializeMaps
struct ABP_SceneRoot_C_InitializeMaps_Params
{
};

// Function BP_SceneRoot.BP_SceneRoot_C.GetAllActiveActors
struct ABP_SceneRoot_C_GetAllActiveActors_Params
{
	TArray<class AActor*>                              Actors;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_SceneRoot.BP_SceneRoot_C.RegisterSceneNode
struct ABP_SceneRoot_C_RegisterSceneNode_Params
{
	class ABP_SceneNode_C**                            Node;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NameID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SceneRoot.BP_SceneRoot_C.SetSwitch
struct ABP_SceneRoot_C_SetSwitch_Params
{
	class FString*                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SceneRoot.BP_SceneRoot_C.ReceiveBeginPlay
struct ABP_SceneRoot_C_ReceiveBeginPlay_Params
{
};

// Function BP_SceneRoot.BP_SceneRoot_C.ExecuteUbergraph_BP_SceneRoot
struct ABP_SceneRoot_C_ExecuteUbergraph_BP_SceneRoot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
