#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_CombatShotgun_A_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_CombatShotgun_A.ABP_CombatShotgun_A_C
// 0x00B8 (0x0328 - 0x0270)
class UABP_CombatShotgun_A_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_03627CE34CBB5A64419825981046D514;      // 0x0278(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CCD6E844420D1947A3882B86B927452F;      // 0x0298(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_463DF5C748B51187F7674F8E422D5A40;// 0x02E0(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CombatShotgun_A.ABP_CombatShotgun_A_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_CombatShotgun_A(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
