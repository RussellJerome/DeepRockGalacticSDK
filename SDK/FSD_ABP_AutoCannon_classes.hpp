#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_AutoCannon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_AutoCannon.ABP_AutoCannon_C
// 0x00B8 (0x0328 - 0x0270)
class UABP_AutoCannon_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_98F1B40C4AB0C8A597A3DAAD8CD3F310;// 0x0278(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_Root_0B7B0E834858B29AA08D95AC1942FD8E;      // 0x02C0(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C4F750984576EE95DE2B26B340E75179;      // 0x02E0(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_AutoCannon.ABP_AutoCannon_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_AutoCannon(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
