#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_Beard_Rig_A_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Beard_Rig_A.ABP_Beard_Rig_A_C
// 0x08E8 (0x0B88 - 0x02A0)
class UABP_Beard_Rig_A_C : public UVanityAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_43D9ABFA4FB48CC48F9AF39FB1016261;      // 0x02A8(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02C8(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_2B7AC0864F7C56D3D12082B3E79C75BA; // 0x02D0(0x0550)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0E56F59441288DD370492C9F7A6F9EAB;// 0x0820(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_ADBD40834BA24708CEF38EB146568595;// 0x0840(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8163994D4EB9FEDD960E74B503AF9129;// 0x0860(0x0108)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_E30C6BF24EDF6BD7FC929EBCA47FFFD8;// 0x0968(0x0138)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_965D53674B6BDC6ACB3F6BA4CB0E5210;// 0x0AA0(0x00A0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_CF4A14FD40FADD9ACD53CAAAE25BB628;// 0x0B40(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Beard_Rig_A.ABP_Beard_Rig_A_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_ABP_Beard_Rig_A(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
