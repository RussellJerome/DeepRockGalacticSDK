#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_GrenadeLauncher_A_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_GrenadeLauncher_A.ABP_GrenadeLauncher_A_C
// 0x00B8 (0x0328 - 0x0270)
class UABP_GrenadeLauncher_A_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1D813FE04EBF906D72749C8475AFA7B4;      // 0x0278(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1A0B6F78403E0FDA65FEEDA8726814DD;      // 0x0298(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_82701F594269FA858317FEB806DD55FD;// 0x02E0(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_GrenadeLauncher_A.ABP_GrenadeLauncher_A_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_GrenadeLauncher_A(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
