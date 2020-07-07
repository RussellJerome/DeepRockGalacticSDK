#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_DrunksBox_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_DrunksBox.ABP_DrunksBox_C
// 0x0471 (0x06E1 - 0x0270)
class UABP_DrunksBox_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_08A108424F848A64CAA7CFA3A9C2B717;      // 0x0278(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_95ABF56E43B362B4B6AC8EA8B4EF117C;// 0x0298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2D0B571345FB72043DF8B29C32D51C60;// 0x02C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_543F48C744957F5CA814289898FE7F0A;// 0x02E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_76F294AE43FE145A19264EAD7627681E;// 0x0310(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_838D206046DAD673CC35839E01E710A9;// 0x0338(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A7CE10654BCC6509BC710E898471763C;// 0x0360(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_47652087442AE6072F25FC95690F7E34;// 0x03D8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8FEB094F45CDADB3214E6CBC2319BBA6;// 0x03F8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9A2666D640DBB77DAF2EDBA2CF70AB49;// 0x0470(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_391D02EF41FE25CD62F525836A6797E2;// 0x0490(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_09EC10174D9F0D1F2677879567FF7740;// 0x0508(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_023ED94E444F256DF6B008B6952418E3;// 0x0528(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E6C071D5446C9B283A67B3B22A5CA3A8;// 0x05A0(0x0020)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_EA7BD9B0423555005588B69E42EFD7EC;// 0x05C0(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_EE23415B4801EF8642731F90D44A883F;// 0x0608(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DC9367584A6EF7BEF930ECBE51DF5D76;// 0x0628(0x00B0)
	class ABP_DrinksBox_C*                             DrinkBox;                                                 // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               State;                                                    // 0x06E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_DrunksBox.ABP_DrunksBox_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DrunksBox_AnimGraphNode_TransitionResult_95ABF56E43B362B4B6AC8EA8B4EF117C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DrunksBox_AnimGraphNode_TransitionResult_2D0B571345FB72043DF8B29C32D51C60();
	void BlueprintBeginPlay();
	void OnStateChanged_Event_1(unsigned char* State);
	void ExecuteUbergraph_ABP_DrunksBox(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
