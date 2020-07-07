#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SceneNode_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SceneNode.BP_SceneNode_C.GetRoot
struct ABP_SceneNode_C_GetRoot_Params
{
	class ABP_SceneRoot_C*                             TheRoot;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SceneNode.BP_SceneNode_C.OnSetNodeVisibility
struct ABP_SceneNode_C_OnSetNodeVisibility_Params
{
	bool*                                              NewVisibility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SceneNode.BP_SceneNode_C.SetActorVisibilityRecursive
struct ABP_SceneNode_C_SetActorVisibilityRecursive_Params
{
	class AActor**                                     Node;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              NewVisible;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SceneNode.BP_SceneNode_C.SetNodeVisibility
struct ABP_SceneNode_C_SetNodeVisibility_Params
{
	bool*                                              NewVisible;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
