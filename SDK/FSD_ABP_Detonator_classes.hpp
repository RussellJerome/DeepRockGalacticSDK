#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_Detonator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Detonator.ABP_Detonator_C
// 0x01A1 (0x0411 - 0x0270)
class UABP_Detonator_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F19F04DF4EBB0D22094701B479A8C1DB;      // 0x0278(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C9B3B4DC458F0382B42588A8ECBE4C06;      // 0x0298(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_1F08F7244B10C24BD4EBE19A6BB9E72C;// 0x02E0(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_23A5A91545C980192665E0BECD929AAD;// 0x0328(0x00A0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_E05032434F6DB940CCBA4386B89A229E;// 0x03C8(0x0048)
	bool                                               IsOpen;                                                   // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Detonator.ABP_Detonator_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_Detonator(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
