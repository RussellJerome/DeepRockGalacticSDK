#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_MarathonGuy_SprintBoostTime_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MarathonGuy_SprintBoostTime.BP_MarathonGuy_SprintBoostTime_C
// 0x0008 (0x0038 - 0x0030)
class UBP_MarathonGuy_SprintBoostTime_C : public UFloatPerkActivation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0030(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MarathonGuy_SprintBoostTime.BP_MarathonGuy_SprintBoostTime_C");
		return ptr;
	}


	void Receive_ActivatePerk(class APlayerCharacter** Character, float* Value);
	void ExecuteUbergraph_BP_MarathonGuy_SprintBoostTime(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
