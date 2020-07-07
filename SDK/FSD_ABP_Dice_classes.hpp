#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_Dice_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Dice.ABP_Dice_C
// 0x06F0 (0x0960 - 0x0270)
class UABP_Dice_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_571F6A4C49112D22AC9AC7B8EDC08CF7;      // 0x0278(0x0020)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_52C39A454ECCA70FE15CF4B5E7F6654F;// 0x0298(0x0138)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_E0FCE8A6486EBF4D3E43C880B7FCBA5D; // 0x03D0(0x0550)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_E0895008481A4984AACA7BAA1E199FFD;// 0x0920(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8A89800A46E3A9FB393CB8BB9BA4A246;// 0x0940(0x0020)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Dice.ABP_Dice_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_Dice(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
