#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_EventRewardFrame_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_EventRewardFrame.ABP_EventRewardFrame_C
// 0x03B0 (0x0620 - 0x0270)
class UABP_EventRewardFrame_C : public UCoreInfuserPlatformAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C9B12FAC4B0F286C7B4107A968942E02;      // 0x0278(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CF57825641F35099A948FEA3170A7886;// 0x0298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3AED9B2E4E72FD0E79FF42A69A342B5C;// 0x02C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_06560B7E4055FEF28029EFA58258BFBB;// 0x02E8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8B0F09804B833E5F201B1DA448E620AA;// 0x0310(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9EDA12404A2379E9004FD09E79CAFF8A;// 0x0388(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_06C5A6964B28D9D7FD65B8AFF151D1E0;// 0x03A8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E231783449BCDE6E2D883E83AB43F102;// 0x0420(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AA2CABDC4DAE453228195D9EFCC55A8C;// 0x0440(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_FEBFCB444664186C1D071FB0EBDF7F0F;// 0x04B8(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_895C237045737582020BB9BF84593692;// 0x04D8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2AC8EEFC41DD6A56E2957581B60F4BBF;// 0x0550(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_12AD658F4D29B0A5665CCCA666BFC64D;// 0x0570(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_EventRewardFrame.ABP_EventRewardFrame_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_EventRewardFrame(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
