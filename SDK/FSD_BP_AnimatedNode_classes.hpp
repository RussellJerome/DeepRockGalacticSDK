#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_AnimatedNode_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AnimatedNode.BP_AnimatedNode_C
// 0x0038 (0x0390 - 0x0358)
class ABP_AnimatedNode_C : public ABP_SceneNode_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Animation_C*                             BP_Animation;                                             // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              AnimationTimeline_Time_2B2C3AF7425179D5CDA8ACA4CE118F26;  // 0x0368(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    AnimationTimeline__Direction_2B2C3AF7425179D5CDA8ACA4CE118F26;// 0x036C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x036D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          AnimationTimeline;                                        // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     RotationPivot;                                            // 0x0378(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ScalingPivot;                                             // 0x0384(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimatedNode.BP_AnimatedNode_C");
		return ptr;
	}


	void AnimationTimeline__FinishedFunc();
	void AnimationTimeline__UpdateFunc();
	void RunAnimationTimeline(float* Length);
	void ExecuteUbergraph_BP_AnimatedNode(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
