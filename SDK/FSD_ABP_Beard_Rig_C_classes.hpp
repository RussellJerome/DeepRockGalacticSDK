#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_Beard_Rig_C_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Beard_Rig_C.ABP_Beard_Rig_C_C
// 0x08E8 (0x0B88 - 0x02A0)
class UABP_Beard_Rig_C_C : public UVanityAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_05188C63431F04EF6657F98A96C2C186;      // 0x02A8(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02C8(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_0937C18E41732DADD596FABCC81C175F; // 0x02D0(0x0550)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_06A5806A4901B7F805AB32A9D6945210;// 0x0820(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_44164FA545CF2FEEF510DD982297ADDB;// 0x0840(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B3BA182F4391B811AE419C8FF753FEA9;// 0x0860(0x0108)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_144FB11748FE93AAFB0DBFB6DAA12596;// 0x0968(0x0138)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DDC12DE146EEF9EF9390D285B9418587;// 0x0AA0(0x00A0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_4B0249F142F3AF83AA1D809143BA6B0D;// 0x0B40(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Beard_Rig_C.ABP_Beard_Rig_C_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_Beard_Rig_C(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
