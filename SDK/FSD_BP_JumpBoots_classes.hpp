#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_JumpBoots_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_JumpBoots.BP_JumpBoots_C
// 0x0008 (0x0038 - 0x0030)
class UBP_JumpBoots_C : public USetCooldownPerkActivation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0030(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_JumpBoots.BP_JumpBoots_C");
		return ptr;
	}


	void Receive_ActivatePerk(class APlayerCharacter** Character, float* Value);
	void ExecuteUbergraph_BP_JumpBoots(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
