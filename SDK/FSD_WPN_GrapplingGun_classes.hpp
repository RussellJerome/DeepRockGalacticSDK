#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_GrapplingGun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WPN_GrapplingGun.WPN_GrapplingGun_C
// 0x0084 (0x053C - 0x04B8)
class AWPN_GrapplingGun_C : public AGrapplingHookGun
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFirstPersonStaticMeshComponent*             FirstPersonStaticMesh;                                    // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFirstPersonWidgetComponent*                 CoolDownWidgetFirstPerson;                                // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCrosshairAggregator*                        CrosshairAggregator;                                      // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Projectile;                                               // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TP_Muzzle;                                                // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             FP_Muzzle;                                                // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCableComponent*                             Cable;                                                    // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ProjectileMovement_Lerp_t_87ACE2EC4276B8AA3B88169B28949E3A;// 0x04F8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ProjectileMovement__Direction_87ACE2EC4276B8AA3B88169B28949E3A;// 0x04FC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04FD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ProjectileMovement;                                       // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Pulling;                                                  // 0x0508(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0509(0x0003) MISSED OFFSET
	struct FVector                                     PullTowards;                                              // 0x050C(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RopeTime;                                                 // 0x0518(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    PullRotation;                                             // 0x051C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHUD_CroNew_GrapplingGun_C*                  Crosshair;                                                // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               Recharge;                                                 // 0x0530(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0531(0x0003) MISSED OFFSET
	float                                              MaxReleaseSpeed;                                          // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OnReleaseSpeedMod;                                        // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WPN_GrapplingGun.WPN_GrapplingGun_C");
		return ptr;
	}


	void GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats);
	void CalculateRelaseVelocty();
	void OnRep_Pulling();
	struct FTransform GetCableTransform();
	void SetCableEndPoint(struct FVector* Location);
	void GetCableParent(class USceneComponent** Muzzle);
	void ToggleCable(bool* bNewVisibility);
	void GetAimView(struct FVector* Location, struct FVector* Forward);
	void UserConstructionScript();
	void ProjectileMovement__FinishedFunc();
	void ProjectileMovement__UpdateFunc();
	void ReceiveTick(float* DeltaSeconds);
	void Multicast_Shoot(struct FVector* Point);
	void RecieveStartUsing();
	void RecieveUnequipped();
	void RecieveStopUsing();
	void Stop_Pulling();
	void ServerShoot(struct FVector* Point);
	void AddedToInventory(class APlayerCharacter** ItemOwner);
	void ReceiveBeginPlay();
	void Init_Character();
	void OnDeath(class UHealthComponentBase** HealthComponent);
	void RecieveCycledItem();
	void Gunsling();
	void Try_Equip_Previous_Item();
	void StopPullingLocal();
	void BndEvt__ZiplineLauncher_K2Node_ComponentBoundEvent_1_WeaponFiredDelegate__DelegateSignature(struct FVector* Location);
	void ExecuteUbergraph_WPN_GrapplingGun(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
