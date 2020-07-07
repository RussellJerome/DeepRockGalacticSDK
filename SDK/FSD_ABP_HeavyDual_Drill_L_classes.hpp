#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_HeavyDual_Drill_L_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_HeavyDual_Drill_L.ABP_HeavyDual_Drill_L_C
// 0x0540 (0x07C0 - 0x0280)
class UABP_HeavyDual_Drill_L_C : public UAutoMinerAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_10CDF62147C06B7FCD2676AD8ED276C3;      // 0x0288(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_49E85F5647E4004F3D46128D6C5D4127;// 0x02A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_60ED788F420D8EC12734F1A7F3AA939C;// 0x02D0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_19840ACD412BED978C83BB8419679898;// 0x02F8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_22945A5643CEACC210DC0BA258D1FBA4;// 0x0370(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BF29D15D4AE16CC12DFD8DBC72EAC855;// 0x0390(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3625121745BD0B8F456CB68CCDE54E49;// 0x0408(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F714FA35480C89EB2AB638B08F86D874;// 0x0428(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_918D950C494AFDE35419C7943A9A65DC;// 0x04D8(0x00B8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F4C4F6FF4FBE3BF5A52C5D9F4A57E70F;// 0x0590(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1291E87A4762360DB6A73FA6408C64E0;// 0x05B8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CD36E2AA4ED72A0ACDD3AABAAB5FA0F3;// 0x05E0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_F1F0A2BA49F43AD657B25A8EB362F2FE;// 0x0658(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1A3E5DEB4F1BB514CA00B1BF652DB920;// 0x0678(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_AE4457F24CD6CA7C0FB5D69625539F39;// 0x06F0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5508D3C547A0315ECA8ACCB11403E388;// 0x0710(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_HeavyDual_Drill_L.ABP_HeavyDual_Drill_L_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeavyDual_Drill_L_AnimGraphNode_TransitionResult_60ED788F420D8EC12734F1A7F3AA939C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeavyDual_Drill_L_AnimGraphNode_TransitionResult_49E85F5647E4004F3D46128D6C5D4127();
	void ExecuteUbergraph_ABP_HeavyDual_Drill_L(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
