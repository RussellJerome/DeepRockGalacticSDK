#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_Autocannon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WPN_Autocannon.WPN_Autocannon_C
// 0x005C (0x0854 - 0x07F8)
class AWPN_Autocannon_C : public AAutoCannon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWeaponImpactComponent*                      WeaponImpact;                                             // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageComponent*                            Damage;                                                   // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFirstPersonParticleSystemComponent*         FirstPersonParticleSystem;                                // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFirstPersonPointLightComponent*             Light_MuzzleFlash;                                        // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFirstPersonWidgetComponent*                 Widget_Overheat;                                          // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFirstPersonWidgetComponent*                 Widget_Ammo;                                              // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCrosshairAggregator*                        CrosshairAggregator;                                      // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHitscanComponent*                           HitScan;                                                  // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SplashDamage;                                             // 0x0848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SplashRadius;                                             // 0x084C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartTime;                                                // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WPN_Autocannon.WPN_Autocannon_C");
		return ptr;
	}


	struct FText RoundStatValue(struct FText* InText, class FString* Suffix, bool* KeepSign);
	void GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats);
	void UserConstructionScript();
	void ShowCurentFireTime();
	void ReceiveBeginPlay();
	void RecieveUnequipped();
	void RecieveEquipped();
	void Receive_IsFiringChanged(bool* NewValue);
	void BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature();
	void RecieveFiredWeapon();
	void ExecuteUbergraph_WPN_Autocannon(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
