#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Grenade_Axe_Stuck_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C
// 0x0051 (0x0381 - 0x0330)
class ABP_Grenade_Axe_Stuck_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USimpleObjectInfoComponent*                  SimpleObjectInfo;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInstantUsable*                              InstantUsable;                                            // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Blade;                                                    // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Handle;                                                   // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               WorldCollision;                                           // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_HandGrenade_M_Thrown2;                                 // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AThrownGrenadeItem*                          AxeGrenadeItem;                                           // 0x0370(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Dynamic_Material;                                         // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StandOnMe;                                                // 0x0380(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Grenade_Axe_Stuck.BP_Grenade_Axe_Stuck_C");
		return ptr;
	}


	void OnRep_StandOnMe();
	void OnRep_AxeGrenadeItem();
	void UserConstructionScript();
	void PickUpAxe(class AThrownGrenadeItem** ThrownGrenadeItem);
	void Detach_Axe();
	void Attach(class AActor** ParentActor, class USceneComponent** ParentComponent, struct FName* ParentSocketName, bool* CanRetrieve);
	void OnDestroyed_Event(class AActor** DestroyedActor);
	void OnDeath_Event(class UHealthComponentBase** HealthComponent);
	void GoPhysical(bool* PassThrough, bool* CanRetrieve);
	void MakeStandable(bool* CanRetrieve);
	void SetRetrieval(bool* CanRetrieve);
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(class APlayerCharacter** user);
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool* canUse);
	void ExecuteUbergraph_BP_Grenade_Axe_Stuck(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
