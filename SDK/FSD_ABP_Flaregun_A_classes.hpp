#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_Flaregun_A_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Flaregun_A.ABP_Flaregun_A_C
// 0x00B8 (0x0328 - 0x0270)
class UABP_Flaregun_A_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_3002C21C46EEE2227E0E5F9666098331;      // 0x0278(0x0020)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_3B1D5D7C48982A0173F5CD827BE94197;// 0x0298(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C11FF28C4465EC43555B47B96F98DB9A;      // 0x02E0(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Flaregun_A.ABP_Flaregun_A_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_Flaregun_A(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
