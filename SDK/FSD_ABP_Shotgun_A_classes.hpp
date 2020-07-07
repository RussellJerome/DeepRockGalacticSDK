#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_Shotgun_A_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Shotgun_A.ABP_Shotgun_A_C
// 0x0070 (0x02E0 - 0x0270)
class UABP_Shotgun_A_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_DB901E8648738C4EEA0F2F9423709C9B;      // 0x0278(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B369BDBF4068F98E39BC738E57D268D5;      // 0x0298(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Shotgun_A.ABP_Shotgun_A_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_Shotgun_A(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
