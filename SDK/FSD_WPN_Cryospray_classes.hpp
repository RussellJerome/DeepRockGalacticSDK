#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_Cryospray_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WPN_Cryospray.WPN_Cryospray_C
// 0x0068 (0x0920 - 0x08B8)
class AWPN_Cryospray_C : public ACryosprayItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             AudioPressurerising;                                      // 0x08C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFirstPersonPointLightComponent*             GaugeLight;                                               // 0x08C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFirstPersonStaticMeshComponent*             FirstPersonStaticMesh;                                    // 0x08D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFirstPersonStaticMeshComponent*             FP_Widget_Shooting_Gauge;                                 // 0x08D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFirstPersonParticleSystemComponent*         PressureVent_Particle;                                    // 0x08E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFirstPersonWidgetComponent*                 FPwidget_Ammo;                                            // 0x08E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCrosshairAggregator*                        CrosshairAggregator;                                      // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        MuzzleLight;                                              // 0x08F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWeaponDisplay_CryoSpray_Ammo_C*             UI_Ammo;                                                  // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ChargeInstance;                                           // 0x0908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             LaunchProjectileParticlesFP;                              // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             LaunchProjectileParticlesTP;                              // 0x0918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WPN_Cryospray.WPN_Cryospray_C");
		return ptr;
	}


	void GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats);
	void UserConstructionScript();
	void BndEvt__Aggregator_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature(int* amount);
	void Update_Ammo_Display();
	void ReceiveRepressurisingChanged(bool* Value);
	void RecieveEquipped();
	void RecieveUnequipped();
	void Toggle_RepressurerisingFX(bool* on);
	void OnProjectileLaunched(struct FVector* Location);
	void ReceiveBeginPlay();
	void OnPreProjectileLaunch();
	void ExecuteUbergraph_WPN_Cryospray(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
