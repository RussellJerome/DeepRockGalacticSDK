#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_LineCutter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_LineCutter.ABP_LineCutter_C
// 0x00B8 (0x0328 - 0x0270)
class UABP_LineCutter_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0A52F9C94340082FDECFEB8D94AD05AC;      // 0x0278(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C845A5674B8F800CF9A40792170B3C50;      // 0x0298(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_ACF29F1241B0B1147CAD329269383FBA;// 0x02E0(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_LineCutter.ABP_LineCutter_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_LineCutter(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
