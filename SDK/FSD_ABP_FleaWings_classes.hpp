#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_FleaWings_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_FleaWings.ABP_FleaWings_C
// 0x0259 (0x04C9 - 0x0270)
class UABP_FleaWings_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4B10ED654DE674103F1BA2BF06A53CBC;      // 0x0278(0x0020)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_38403E714AD83D11403F54AE658F4362;// 0x0298(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9736C9D643FD5FC298302A8431206DA5;// 0x02C0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_018FFD5846E53AE9AC4BC7A37A9BA619;// 0x02E8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_54D3E82B45A888BF2A414BA60CDE0E4B;// 0x0360(0x0020)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E826EA224A6A94108E017083329D8470;// 0x0380(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_346F11AF4AB7768537A1FDA78D3EC408;// 0x03F8(0x0020)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_06CA1DDE4BBDAAE00568988C8649BF9E;// 0x0418(0x00B0)
	bool                                               Flying;                                                   // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_FleaWings.ABP_FleaWings_C");
		return ptr;
	}


	void SetFlying(bool* NewParam);
	void ExecuteUbergraph_ABP_FleaWings(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
