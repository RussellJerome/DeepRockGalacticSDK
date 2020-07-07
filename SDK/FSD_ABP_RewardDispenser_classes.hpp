#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_RewardDispenser_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_RewardDispenser.ABP_RewardDispenser_C
// 0x03B0 (0x0620 - 0x0270)
class UABP_RewardDispenser_C : public UCoreInfuserAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_72253AFF47D4461204316DAE052B0255;      // 0x0278(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_588ACEFD4DDDAFDDEC6F0987F2ABA67F;// 0x0298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0819FD2046EDF475F4A27587AD05B718;// 0x02C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1CAE17C8439F70DD6264E09474922E39;// 0x02E8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D34C7C234071F618EFC897A883503A9B;// 0x0310(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_00E675214CBE0AFF46217B9A1A221C8B;// 0x0388(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F158061E4125AD3F442F948610A6F581;// 0x03A8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_356194B446D3B4A7CCA167B00EC277E2;// 0x0420(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1F2946C14065E4EC2E3086B793A87BF4;// 0x0440(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_AA15B0C445CD51F235B931AA48F7571A;// 0x04B8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_91BAF34B40544AFEF14370861917BA03;// 0x04D8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_64EF85BD4FAE33893E27B88EE6F73431;// 0x0550(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6FC97BC9478E15706CFFA29C4CFAF980;// 0x0570(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_RewardDispenser.ABP_RewardDispenser_C");
		return ptr;
	}


	void BlueprintBeginPlay();
	void AnimNotify_InsertingCore();
	void BlueprintInitializeAnimation();
	void OnRewardSelected();
	void SetMatrixCoreVisible(bool* IsVisible);
	void ExecuteUbergraph_ABP_RewardDispenser(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
