#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_BerzerkComp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BerzerkComp.BP_BerzerkComp_C
// 0x0008 (0x0038 - 0x0030)
class UBP_BerzerkComp_C : public UFloatPerkActivation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0030(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BerzerkComp.BP_BerzerkComp_C");
		return ptr;
	}


	void Receive_ActivatePerk(class APlayerCharacter** Character, float* Value);
	void OnItemEquipped_Event_1(class AItem** Item);
	void ExecuteUbergraph_BP_BerzerkComp(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
