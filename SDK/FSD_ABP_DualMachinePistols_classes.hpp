#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_DualMachinePistols_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_DualMachinePistols.ABP_DualMachinePistols_C
// 0x00B8 (0x0328 - 0x0270)
class UABP_DualMachinePistols_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D03F715B4D6DB84C5AB535848D75FF7D;      // 0x0278(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7BB5B8A747C7289DEBBFD4A116828E21;      // 0x0298(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_925508B34D60A5C9FFA1348ADB811AE4;// 0x02E0(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_DualMachinePistols.ABP_DualMachinePistols_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_DualMachinePistols(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
