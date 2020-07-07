#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_SeasonedMoonrider_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DE_SeasonedMoonrider.DE_SeasonedMoonrider_C
// 0x0020 (0x0128 - 0x0108)
class UDE_SeasonedMoonrider_C : public UDrinkEffectComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0108(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABP_PlayerCharacter_C*                       Character;                                                // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             MoonriderSound;                                           // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleEffect;                                           // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DE_SeasonedMoonrider.DE_SeasonedMoonrider_C");
		return ptr;
	}


	void OnStartEffect(class APlayerCharacter** Character);
	void OnStopEffect();
	void ExecuteUbergraph_DE_SeasonedMoonrider(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
