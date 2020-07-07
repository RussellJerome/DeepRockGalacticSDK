#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_LowGravity_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LowGravity.BP_LowGravity_C
// 0x0008 (0x0030 - 0x0028)
class UBP_LowGravity_C : public URunningMissionBP
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LowGravity.BP_LowGravity_C");
		return ptr;
	}


	void StartLogic();
	void ExecuteUbergraph_BP_LowGravity(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
