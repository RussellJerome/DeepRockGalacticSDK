#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_Pistol_A_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Pistol_A.ABP_Pistol_A_C
// 0x00B8 (0x0328 - 0x0270)
class UABP_Pistol_A_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_406FCE9C482C94B520A73BA9246B3F8B;      // 0x0278(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3D46F60346B232FBA3AE9AA474BD7C54;      // 0x0298(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_EC9ED7B6471DBF353F283A974A361E3F;// 0x02E0(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Pistol_A.ABP_Pistol_A_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_Pistol_A(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
