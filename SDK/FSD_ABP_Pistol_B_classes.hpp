#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_Pistol_B_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Pistol_B.ABP_Pistol_B_C
// 0x00B8 (0x0328 - 0x0270)
class UABP_Pistol_B_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2B1E9E16433B87CFCBAAFC946775CE5A;      // 0x0278(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_371753A244D3269082D07B958CD045DE;      // 0x0298(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_C26C69A34CE5B48A81AF9090A2DF383F;// 0x02E0(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Pistol_B.ABP_Pistol_B_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_Pistol_B(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
