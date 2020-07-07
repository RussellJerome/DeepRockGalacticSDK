#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_DownedBomb_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DownedBomb.BP_DownedBomb_C
// 0x0008 (0x0038 - 0x0030)
class UBP_DownedBomb_C : public UFloatPerkActivation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0030(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DownedBomb.BP_DownedBomb_C");
		return ptr;
	}


	void Receive_ActivatePerk(class APlayerCharacter** Character, float* Value);
	void ExecuteUbergraph_BP_DownedBomb(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
