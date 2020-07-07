#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_Beard_Rig_D_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Beard_Rig_D.ABP_Beard_Rig_D_C
// 0x08E8 (0x0B88 - 0x02A0)
class UABP_Beard_Rig_D_C : public UVanityAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_877275B242334D4A476D19958D79882A;      // 0x02A8(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02C8(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_BEAD1CBE4B498D41718A6A8B4B305E41; // 0x02D0(0x0550)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F6D12B014C2D4A4D6324D0BF6E84711E;// 0x0820(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_52136BCD4F9861D105A59283E1D7C9D4;// 0x0840(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F17A95BD4AF20786E14F0383D25722A8;// 0x0860(0x0108)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_0C64C47046F1D1AFB4B1A3BBCCA9EFFE;// 0x0968(0x0138)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4F1699A541AF7C8224F0EC825BFB674A;// 0x0AA0(0x00A0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_0FEC55BB43BFE5CCE10746BBF2F8D28C;// 0x0B40(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Beard_Rig_D.ABP_Beard_Rig_D_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_Beard_Rig_D(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
