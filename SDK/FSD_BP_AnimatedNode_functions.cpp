// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_AnimatedNode_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AnimatedNode.BP_AnimatedNode_C.AnimationTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_AnimatedNode_C::AnimationTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimatedNode.BP_AnimatedNode_C.AnimationTimeline__FinishedFunc");

	ABP_AnimatedNode_C_AnimationTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimatedNode.BP_AnimatedNode_C.AnimationTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_AnimatedNode_C::AnimationTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimatedNode.BP_AnimatedNode_C.AnimationTimeline__UpdateFunc");

	ABP_AnimatedNode_C_AnimationTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimatedNode.BP_AnimatedNode_C.RunAnimationTimeline
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnimatedNode_C::RunAnimationTimeline(float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimatedNode.BP_AnimatedNode_C.RunAnimationTimeline");

	ABP_AnimatedNode_C_RunAnimationTimeline_Params params;
	params.Length = Length;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AnimatedNode.BP_AnimatedNode_C.ExecuteUbergraph_BP_AnimatedNode
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AnimatedNode_C::ExecuteUbergraph_BP_AnimatedNode(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimatedNode.BP_AnimatedNode_C.ExecuteUbergraph_BP_AnimatedNode");

	ABP_AnimatedNode_C_ExecuteUbergraph_BP_AnimatedNode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
