#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_EVENT_DropPodDefense_Refuel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EVENT_DropPodDefense_Refuel.EVENT_DropPodDefense_Refuel_C
// 0x0008 (0x0568 - 0x0560)
class AEVENT_DropPodDefense_Refuel_C : public AEVENT_DropPodDefense_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EVENT_DropPodDefense_Refuel.EVENT_DropPodDefense_Refuel_C");
		return ptr;
	}


	void EventSucceded();
	void EventFailed();
	void ExecuteUbergraph_EVENT_DropPodDefense_Refuel(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
