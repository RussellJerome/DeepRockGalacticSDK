#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_MissionControl_MemorialHallWelcome_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MissionControl_MemorialHallWelcome.BP_MissionControl_MemorialHallWelcome_C
// 0x0018 (0x0348 - 0x0330)
class ABP_MissionControl_MemorialHallWelcome_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               TriggerBox;                                               // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MissionControl_MemorialHallWelcome.BP_MissionControl_MemorialHallWelcome_C");
		return ptr;
	}


	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void ExecuteUbergraph_BP_MissionControl_MemorialHallWelcome(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
