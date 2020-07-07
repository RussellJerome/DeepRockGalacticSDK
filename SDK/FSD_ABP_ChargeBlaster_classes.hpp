#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_ChargeBlaster_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_ChargeBlaster.ABP_ChargeBlaster_C
// 0x0390 (0x0620 - 0x0290)
class UABP_ChargeBlaster_C : public UChargedWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_CD81317C41161B9AAED073BF2AEBE4F3;      // 0x0298(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_21145CD44DBBC439C8B2E3B2DB2E9E84;      // 0x02B8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2F37BD164B774ECAE83436B3A71A5E9D;// 0x0300(0x0078)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_293193934D4A6302A9A2ADB422D46190;// 0x0378(0x00C8)
	struct FAnimNode_MakeDynamicAdditive               AnimGraphNode_MakeDynamicAdditive_83856D1D46DC07FB34525D9CFE9BD42F;// 0x0440(0x0038)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_73DEE4EA40602B46A3B86FB3B40B525E;// 0x0478(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_455AA4194155162D20F4D2ADBDE1ADBA;// 0x04C0(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C40ADB064F1A923879BA0892E74BF287;// 0x0538(0x00A0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_4FB380AC4F05648B780391BD369D50D5;// 0x05D8(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_ChargeBlaster.ABP_ChargeBlaster_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_ChargeBlaster(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
