#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SentryGun_Redeployable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C
// 0x00E0 (0x0670 - 0x0590)
class ABP_SentryGun_Redeployable_C : public ARedeployableSentryGun
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0590(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               SpecialAttackCollider;                                    // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    SpecialAttackParticleSystem;                              // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            AmmoCountWidget;                                          // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BarrelsMesh;                                              // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SpotLightBase;                                            // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LightCone;                                                // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProjectileLauncherComponent*                ProjectileLauncher;                                       // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USimpleHealthComponent*                      SimpleHealth;                                             // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageComponent*                            DamageComponent;                                          // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight1;                                              // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UReloadSentryUsableComponent*                ReloadSentryUsable;                                       // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USimpleObjectInfoComponent*                  SimpleObjectInfo;                                         // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USingleUsableComponent*                      DeployUsable;                                             // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            BuildWidget;                                              // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SpotLight2;                                               // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            UsableCollision;                                          // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHitscanComponent*                           HitScan;                                                  // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_Translate_BarrelOverchargeShot_4853B22243389D0916A3E09304615D5D;// 0x0630(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_4853B22243389D0916A3E09304615D5D;   // 0x0634(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0635(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DismantleDuration;                                        // 0x0640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Building;                                                 // 0x0644(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0645(0x0003) MISSED OFFSET
	float                                              OldShotCooldown;                                          // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SpecialAttackAmmoCost;                                    // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BuildProgress;                                            // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MuzzleIndex;                                              // 0x0654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               MuzzleNames;                                              // 0x0658(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UMaterialInstanceDynamic*                    IndicatorMaterial;                                        // 0x0668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C");
		return ptr;
	}


	void UpdateIndicatorLight(bool* FiredShot);
	void ConditionallyEnableShadows();
	float GetDeployProgress();
	void ToggleBuildMode(bool* InBuilding);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveOnDeploy();
	void ReceiveOnDismantle();
	void ReceiveOnDismantled();
	void ReceiveOnDeployed();
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter** user);
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature(float* Progress);
	void ReceiveBeginPlay();
	void ReceiveOnSentryGunOwnerChanged();
	void ActivateSpecialAttack();
	void Multicast_Special_Attack_GFX();
	void Reset_Special_Attack();
	void UpdateShadows();
	void BndEvt__Hitscan_K2Node_ComponentBoundEvent_2_WeaponFiredDelegate__DelegateSignature(struct FVector* Location);
	void ReceiveAmmoChanged(int* Delta, int* currentAmount);
	void ExecuteUbergraph_BP_SentryGun_Redeployable(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
