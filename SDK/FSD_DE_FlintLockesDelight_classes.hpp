#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_FlintLockesDelight_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DE_FlintLockesDelight.DE_FlintLockesDelight_C
// 0x0040 (0x0148 - 0x0108)
class UDE_FlintLockesDelight_C : public UDrinkEffectComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0108(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class APlayerCharacter*                            Character;                                                // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              NextJump;                                                 // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ImpulseStrength;                                          // 0x011C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    SmokeParticles;                                           // 0x0128(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Fuse_Sound;                                               // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ExplosionParticles;                                       // 0x0138(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ExplosionSound;                                           // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DE_FlintLockesDelight.DE_FlintLockesDelight_C");
		return ptr;
	}


	void OnRep_Trigger_Explosion();
	void ReceiveTick(float* DeltaSeconds);
	void OnStartEffect(class APlayerCharacter** Character);
	void Trigger_Explosion();
	void OnStopEffect();
	void Stop_Effects();
	void ExecuteUbergraph_DE_FlintLockesDelight(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
