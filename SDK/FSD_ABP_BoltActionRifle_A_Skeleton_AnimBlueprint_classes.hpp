#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_BoltActionRifle_A_Skeleton_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_BoltActionRifle_A_Skeleton_AnimBlueprint.ABP_BoltActionRifle_A_Skeleton_AnimBlueprint_C
// 0x00B8 (0x0328 - 0x0270)
class UABP_BoltActionRifle_A_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_08DA284B44FD3674AEBC4083A2400163;      // 0x0278(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C0746F804421A754BF55FEB6BFA96331;      // 0x0298(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_F67B86A54B61FB66D27203B700073FD7;// 0x02E0(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_BoltActionRifle_A_Skeleton_AnimBlueprint.ABP_BoltActionRifle_A_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_BoltActionRifle_A_Skeleton_AnimBlueprint(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
