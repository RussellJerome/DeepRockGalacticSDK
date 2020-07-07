#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_HeightenedSenses_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HeightenedSenses.BP_HeightenedSenses_C
// 0x0008 (0x0138 - 0x0130)
class UBP_HeightenedSenses_C : public UHeightenedSenseComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0130(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HeightenedSenses.BP_HeightenedSenses_C");
		return ptr;
	}


	void Receive_OnInitialized();
	void OnKilledGrabber_Event(class AActor** Grabber);
	void ExecuteUbergraph_BP_HeightenedSenses(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
