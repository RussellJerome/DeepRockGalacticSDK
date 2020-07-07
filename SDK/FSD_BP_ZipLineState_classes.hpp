#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_ZipLineState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ZipLineState.BP_ZipLineState_C
// 0x0008 (0x0248 - 0x0240)
class UBP_ZipLineState_C : public UZipLineStateComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ZipLineState.BP_ZipLineState_C");
		return ptr;
	}


	struct FVector GetJumpVector(struct FVector* LookVector, struct FVector* CurrentVelocity);
	void ReceiveSpeedBoostActivated();
	void ReceiveSpeedBoostDeactivated();
	void ExecuteUbergraph_BP_ZipLineState(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
