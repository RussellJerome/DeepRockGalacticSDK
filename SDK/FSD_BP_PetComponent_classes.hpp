#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PetComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PetComponent.BP_PetComponent_C
// 0x0038 (0x0130 - 0x00F8)
class UBP_PetComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FText                                       PetName;                                                  // 0x0100(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                             PetParticles;                                             // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Emitter;                                                  // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class APlayerCharacter*                            PetOwner;                                                 // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PetComponent.BP_PetComponent_C");
		return ptr;
	}


	void SetGameplayTags(class AFSDPawn** self2);
	void ActivateMaterial(class USkeletalMeshComponent** Mesh);
	void OnLoaded_2EDD9CD4487CCB079DB91DB3612F9E9C(class UClass** Loaded);
	void OnDeath(class UHealthComponentBase** HealthComponent);
	void ReceiveBeginPlay();
	void OnAttackDamageDealt(float* FloatValue);
	void OnDeath_Event_1(class UHealthComponentBase** HealthComponent);
	void ExecuteUbergraph_BP_PetComponent(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
