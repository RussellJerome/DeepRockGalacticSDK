#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_Bartender_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Bartender.ABP_Bartender_C
// 0x00D8 (0x0348 - 0x0270)
class UABP_Bartender_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E75B983D409255D3B7C6D99DDCC418F6;      // 0x0278(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4EBA418549CA1E1AF10899A42E032C57;      // 0x0298(0x0048)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_0EF21D0E4FDC6F5BEA671BAB28569ACA;// 0x02E0(0x0068)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Bartender.ABP_Bartender_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_Bartender(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
