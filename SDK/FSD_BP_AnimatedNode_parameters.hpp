#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_AnimatedNode_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_AnimatedNode.BP_AnimatedNode_C.AnimationTimeline__FinishedFunc
struct ABP_AnimatedNode_C_AnimationTimeline__FinishedFunc_Params
{
};

// Function BP_AnimatedNode.BP_AnimatedNode_C.AnimationTimeline__UpdateFunc
struct ABP_AnimatedNode_C_AnimationTimeline__UpdateFunc_Params
{
};

// Function BP_AnimatedNode.BP_AnimatedNode_C.RunAnimationTimeline
struct ABP_AnimatedNode_C_RunAnimationTimeline_Params
{
	float*                                             Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimatedNode.BP_AnimatedNode_C.ExecuteUbergraph_BP_AnimatedNode
struct ABP_AnimatedNode_C_ExecuteUbergraph_BP_AnimatedNode_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
