#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_MacteraBrew_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DE_MacteraBrew.DE_MacteraBrew_C
// 0x0020 (0x0128 - 0x0108)
class UDE_MacteraBrew_C : public UDrinkEffectComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0108(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               PEffect;                                                  // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    Particle_Effect;                                          // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             soundComp;                                                // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DE_MacteraBrew.DE_MacteraBrew_C");
		return ptr;
	}


	void OnStopEffect();
	void OnStartEffect(class APlayerCharacter** Character);
	void ExecuteUbergraph_DE_MacteraBrew(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
