#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_PlatformGun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WPN_PlatformGun.WPN_PlatformGun_C
// 0x0031 (0x0761 - 0x0730)
class AWPN_PlatformGun_C : public AAmmoDrivenWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0730(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFirstPersonPointLightComponent*             FirstPersonPointLight;                                    // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFirstPersonWidgetComponent*                 FirstPersonWidget;                                        // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCrosshairAggregator*                        CrosshairAggregator;                                      // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProjectileLauncherComponent*                ProjectileLauncher;                                       // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               UsingBigPlatform;                                         // 0x0758(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsingLessFallDamage;                                      // 0x0759(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsingBugRepellant;                                        // 0x075A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x075B(0x0001) MISSED OFFSET
	int                                                Material;                                                 // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsingCubePlatform;                                        // 0x0760(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WPN_PlatformGun.WPN_PlatformGun_C");
		return ptr;
	}


	void GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats);
	void ReceiveBeginPlay();
	void BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_4_WeaponFiredDelegate__DelegateSignature(struct FVector* Location);
	void Upgraded_Blueprint_Implementation(TArray<class UItemUpgrade*>* Upgrades);
	void BndEvt__ProjectileLauncher_K2Node_ComponentBoundEvent_0_ProjectileSpawned__DelegateSignature(class AProjectileBase** Projectile);
	void ExecuteUbergraph_WPN_PlatformGun(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
