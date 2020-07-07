#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_Forge_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Forge.ABP_Forge_C
// 0x00B8 (0x0328 - 0x0270)
class UABP_Forge_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B24F5CE44676FF34BF6562AE3132F897;      // 0x0278(0x0020)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_8A79FFE349DDB1A4E6A08EA21A0D1E39;// 0x0298(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7CEA0E424428D4E62C70E287E75E66B7;      // 0x02E0(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Forge.ABP_Forge_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_Forge(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
