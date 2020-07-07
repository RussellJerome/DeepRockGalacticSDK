#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_SMG_A_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_SMG_A.ABP_SMG_A_C
// 0x00B8 (0x0328 - 0x0270)
class UABP_SMG_A_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_27544DAA454C9B91127A36804C6A20CF;      // 0x0278(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_AB200C9042F5A1D4621FC0B64FB32CC3;      // 0x0298(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_E72EE8BD43346972995EF79A56202428;// 0x02E0(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_SMG_A.ABP_SMG_A_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_SMG_A(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
