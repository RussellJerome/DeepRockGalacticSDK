#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PetUsable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PetUsable.BP_PetUsable_C
// 0x0008 (0x0188 - 0x0180)
class UBP_PetUsable_C : public UBPInstantUsable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PetUsable.BP_PetUsable_C");
		return ptr;
	}


	bool BPCanUse(class APlayerCharacter** user, class USceneComponent** UseCollider);
	void ReceiveBeginPlay();
	void OnUsedBy_Event_1(class APlayerCharacter** user);
	void ExecuteUbergraph_BP_PetUsable(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
