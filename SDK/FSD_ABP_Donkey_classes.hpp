#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_Donkey_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Donkey.ABP_Donkey_C
// 0x0588 (0x0878 - 0x02F0)
class UABP_Donkey_C : public USimpleMovingEnemyAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_531B46954FEE39BCEA796AA7392DDAA8;      // 0x02F8(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C408205B4FF335C68FCDE18C38ED8200;// 0x0318(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4CE8A56E4242C7559F195B9A20C6C25B;// 0x0340(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_391689EF4FBB9E0FE86EE38DA8099601;// 0x0368(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6488D6A74C7FE702CD96EE91AA44169B;// 0x0390(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_30510E0342E8DB05052EBB81E2E4359C;// 0x03B8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5A4BEE7A4AB0FCD09CD758A5E1A74739;// 0x03E0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E223BE794F2BC6C5F7F5889943EC1178;// 0x0408(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_519A120A48A8C0DFDAFB18825FE72812;// 0x0430(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_666420CD4B6BCDFA7BC57FAB98F49DF1;// 0x04A8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_077E1CD54D54EB211DFFD9B472070C26;// 0x04C8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9B5407744353494137E9EA9EF2725A32;// 0x0540(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2FAA7CEC411C6C19760F1E9F26A7E568;// 0x0560(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6D39BA94486371883E9AB08658EEDB3B;// 0x05D8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8DBC78C7426FADD0AABA32A35F458544;// 0x05F8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_516542354222607E8E1120B451CC08FA;// 0x0670(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E518AE82478DC2287EDD3E95E40E7369;// 0x0690(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_BE98DF754BB98D5FBD0FD0B901B922E5;// 0x0708(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3B1F373C40F2CA756917D8869D544CA0;// 0x0728(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_987309274542D4C90EB65DA052307698;// 0x07A0(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_05D3C5C943E930B249791AA180327F7F;// 0x07C0(0x00B0)
	class ABP_Donkey_C*                                Donkey;                                                   // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Donkey.ABP_Donkey_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Donkey_AnimGraphNode_TransitionResult_391689EF4FBB9E0FE86EE38DA8099601();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Donkey_AnimGraphNode_TransitionResult_6488D6A74C7FE702CD96EE91AA44169B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Donkey_AnimGraphNode_TransitionResult_30510E0342E8DB05052EBB81E2E4359C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Donkey_AnimGraphNode_TransitionResult_4CE8A56E4242C7559F195B9A20C6C25B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Donkey_AnimGraphNode_TransitionResult_5A4BEE7A4AB0FCD09CD758A5E1A74739();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Donkey_AnimGraphNode_TransitionResult_E223BE794F2BC6C5F7F5889943EC1178();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Donkey_AnimGraphNode_TransitionResult_C408205B4FF335C68FCDE18C38ED8200();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Donkey_AnimGraphNode_SequencePlayer_E518AE82478DC2287EDD3E95E40E7369();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ABP_Donkey(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
