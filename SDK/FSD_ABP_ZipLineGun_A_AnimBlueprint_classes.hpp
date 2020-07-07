#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_ZipLineGun_A_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_ZipLineGun_A_AnimBlueprint.ABP_ZipLineGun_A_AnimBlueprint_C
// 0x00B8 (0x0328 - 0x0270)
class UABP_ZipLineGun_A_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_03CB9F6946BDDFAEBF8686A6A0247A82;      // 0x0278(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_96BA853040D0F18ACAE460917E5CF19D;      // 0x0298(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_AA14AA924A5062411411BBB2280C03D1;// 0x02E0(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_ZipLineGun_A_AnimBlueprint.ABP_ZipLineGun_A_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_ZipLineGun_A_AnimBlueprint(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
