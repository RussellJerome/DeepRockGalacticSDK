#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_AFE_PowerAttack_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AFE_PowerAttack.AFE_PowerAttack_C
// 0x0008 (0x0030 - 0x0028)
class UAFE_PowerAttack_C : public UAfflictionEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AFE_PowerAttack.AFE_PowerAttack_C");
		return ptr;
	}


	void ReceiveBeginEffect(class UPawnAfflictionComponent** Target);
	void ReceiveEndEffect(class UPawnAfflictionComponent** Target);
	void ExecuteUbergraph_AFE_PowerAttack(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
