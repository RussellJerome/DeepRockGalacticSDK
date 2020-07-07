#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_BurstPistol_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_BurstPistol.ABP_BurstPistol_C
// 0x00B8 (0x0328 - 0x0270)
class UABP_BurstPistol_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B1DB4BE54342FA1FC13ACDBE738492F0;      // 0x0278(0x0020)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_40DAFF904DB74D3973ED228ECCEE1BE2;// 0x0298(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_97913C164F7193BBF8BA60A01C3C6249;      // 0x02E0(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_BurstPistol.ABP_BurstPistol_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_BurstPistol(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
