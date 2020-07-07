#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_Gatling_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Gatling.ABP_Gatling_C
// 0x0C20 (0x0EC0 - 0x02A0)
class UABP_Gatling_C : public UBeltDrivenAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C981D94B46952F5BD89D829A2C24B015;      // 0x02A8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9AE1818547E0BEBF44778DBAAF0861B5;// 0x02C8(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5C55DC844FC2494E7C29A18EFB01E89D;      // 0x0340(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_78442B5744C8FD137994C58BF17FD3B3;// 0x0388(0x00B8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C43F1AB0406296EBFD76D282EDD7538C;// 0x0440(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C010C5E34DB741087C1561BE7B29C964;// 0x0468(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_45EF548A4DC98F4D1EFAE8ACC06FCC5A;// 0x0490(0x0028)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_1174009540DE46ED0072F8BF8B9CEA70;// 0x04B8(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_C7E563544CB7E2562E2A139F90E7E896;// 0x0500(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7BDFFAF94FA61BFE8C004E9E481D6AAD;// 0x0520(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_1856F3E641BC22D3E0AECF998EFD4823;// 0x0598(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BDF9492C476331BCF61E13A92B1DA8CF;// 0x05B8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5881052A438C9A12D655A79D9221025B;// 0x0630(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_FBD648E24FD4D81965C035894250D109;// 0x0650(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_47C2E27F4113B20691708A98AD4800CC;// 0x0700(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_295F332F4F4583F125F9089570D996FB;// 0x0728(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6DDB37CB48AD7634A61212BDA9D846C7;// 0x0750(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9273847D4453327EC3ED59BBB7ECE1C4;// 0x07C8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_296589C24B426C844CBDC2A3F65D5A04;// 0x07E8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_AAF01E1B42F026F43064FDB40CFA8C7A;// 0x0860(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_936E39034A34D864BACE82BC42C6778D;// 0x0880(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_0F0EA37047B3F5BCCE12B5835EA18AFF;// 0x0930(0x0020)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_6E1DC6F044DBD135BD81208D10A5E678; // 0x0950(0x0550)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4F925ED34122C9105BE33F990EC3807E;// 0x0EA0(0x0020)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Gatling.ABP_Gatling_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Gatling_AnimGraphNode_TransitionResult_C43F1AB0406296EBFD76D282EDD7538C();
	void ExecuteUbergraph_ABP_Gatling(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
