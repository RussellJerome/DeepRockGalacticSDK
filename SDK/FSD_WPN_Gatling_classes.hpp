#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_Gatling_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WPN_Gatling.WPN_Gatling_C
// 0x0058 (0x0818 - 0x07C0)
class AWPN_Gatling_C : public AGatlingGun
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWeaponImpactComponent*                      WeaponImpact;                                             // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageComponent*                            CritcalOverheatDamage;                                    // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFirstPersonParticleSystemComponent*         FirstPersonParticleSystem;                                // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFirstPersonPointLightComponent*             Light_MuzzleFlash;                                        // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFirstPersonWidgetComponent*                 Widget_Overheat;                                          // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHeatMaterialComponent*                      HeatMaterial;                                             // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFirstPersonWidgetComponent*                 Widget_Ammo;                                              // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCrosshairAggregator*                        CrosshairAggregator;                                      // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHitscanComponent*                           HitScan;                                                  // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WPN_Gatling.WPN_Gatling_C");
		return ptr;
	}


	void GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats);
	void UserConstructionScript();
	void Receive_Overheated();
	void Receive_IsFiringChanged(bool* NewValue);
	void RecieveEquipped();
	void RecieveUnequipped();
	void All_SpawnHeatBurst();
	void TriggerCriticalOverheat();
	void OnTemperatureChanged(float* Temperature, bool* Overheated);
	void ReceiveBeginPlay();
	void OnSkinChanged(class USkinEffect** Skin);
	void BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature();
	void ExecuteUbergraph_WPN_Gatling(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
