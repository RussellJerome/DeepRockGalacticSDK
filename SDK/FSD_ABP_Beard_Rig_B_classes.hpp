#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_Beard_Rig_B_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Beard_Rig_B.ABP_Beard_Rig_B_C
// 0x08E8 (0x0B88 - 0x02A0)
class UABP_Beard_Rig_B_C : public UVanityAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2D1F44454F28D629DC87668279240678;      // 0x02A8(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02C8(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_97987BB44E49F4105510AAA0B3D8E245; // 0x02D0(0x0550)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_BC0018B942316821C3BEF990652434D3;// 0x0820(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_383A68064BBDE4AC601C8E93AC68BCF9;// 0x0840(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EB4F0D644B2A1692479432A31EC34DD0;// 0x0860(0x0108)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_CC80A57D41AE6344FA49BE8F380CD75A;// 0x0968(0x0138)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E05DCB744D70F66216893CADB1292892;// 0x0AA0(0x00A0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_B8BB295C444BD148F11D25B126D42402;// 0x0B40(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Beard_Rig_B.ABP_Beard_Rig_B_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_Beard_Rig_B(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
