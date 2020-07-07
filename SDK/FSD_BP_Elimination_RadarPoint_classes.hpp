#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Elimination_RadarPoint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Elimination_RadarPoint.BP_Elimination_RadarPoint_C
// 0x0020 (0x0350 - 0x0330)
class ABP_Elimination_RadarPoint_C : public AEncounterActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USimpleObjectInfoComponent*                  SimpleObjectInfo;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActorTrackingComponent*                     ActorTracking;                                            // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Elimination_RadarPoint.BP_Elimination_RadarPoint_C");
		return ptr;
	}


	void Receive_EncounterHasSpawned(class APawn** spawnedPawn);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Elimination_RadarPoint(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
