#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_SentryGun_Engineer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_SentryGun_Engineer.ABP_SentryGun_Engineer_C
// 0x03E4 (0x0674 - 0x0290)
class UABP_SentryGun_Engineer_C : public USentryGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_CBF38F24441FC35CB9DC55AAE6B11A08;      // 0x0298(0x0020)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_C693E2CD403BD3554BAE139B739F587C;// 0x02B8(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_B016B86F43660554F700A7B95F5E514C;// 0x0300(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_56FDF6A542EE43AB5154EE9A8EC316EF;// 0x0320(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_068DF41E4B8B0454D03DCA9AA7A7BB73;// 0x03D0(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_E6C8A2BA4364D256AA8F589B4C9932CC;// 0x04D8(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E017672D476E8D0C6456B2BFB94970A7;// 0x04F8(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E56B43184AF24B45A18EE89772B077B8;// 0x0518(0x0108)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_FC5602934800D2750A12EF8327D93C5D;      // 0x0620(0x0048)
	class UAnimSequenceBase*                           FoldOutSequence;                                          // 0x0668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FoldOutLength;                                            // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_SentryGun_Engineer.ABP_SentryGun_Engineer_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_Engineer_AnimGraphNode_ModifyBone_068DF41E4B8B0454D03DCA9AA7A7BB73();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_Engineer_AnimGraphNode_ModifyBone_E56B43184AF24B45A18EE89772B077B8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_SentryGun_Engineer_AnimGraphNode_SequenceEvaluator_C693E2CD403BD3554BAE139B739F587C();
	void BlueprintBeginPlay();
	void ExecuteUbergraph_ABP_SentryGun_Engineer(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
