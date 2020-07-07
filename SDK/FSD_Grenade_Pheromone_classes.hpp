#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Grenade_Pheromone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Grenade_Pheromone.Grenade_Pheromone_C
// 0x0024 (0x0448 - 0x0424)
class AGrenade_Pheromone_C : public AITM_Grenade_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AFSDPawn*>                            PheromoneTargets;                                         // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                MinGuaranteedTargets;                                     // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AffectEveryNthTarget;                                     // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Grenade_Pheromone.Grenade_Pheromone_C");
		return ptr;
	}


	void AddGearStateEntries(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats);
	void OnExploded();
	void ApplyPheromones();
	void ExecuteUbergraph_Grenade_Pheromone(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
