#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_ZipLineGun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WPN_ZipLineGun.WPN_ZipLineGun_C
// 0x005F (0x079F - 0x0740)
class AWPN_ZipLineGun_C : public AZipLineItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0740(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                               // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFirstPersonWidgetComponent*                 FirstPersonWidget;                                        // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFirstPersonStaticMeshComponent*             FirstPersonStaticMesh;                                    // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        Muzzle_Light;                                             // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UZiplineLauncherComponent*                   ZiplineLauncher;                                          // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Beam;                                                     // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCrosshairAggregator*                        CrosshairAggregator;                                      // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              debug_t;                                                  // 0x0788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x078C(0x0004) MISSED OFFSET
	class UHUD_Crosshair_ZiplineGun_C*                 Crosshair;                                                // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              BeamDelay;                                                // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InRange;                                                  // 0x079C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TooFar;                                                   // 0x079D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TooClose;                                                 // 0x079E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WPN_ZipLineGun.WPN_ZipLineGun_C");
		return ptr;
	}


	struct FVector CalcFirstPersonMuzzleLocation();
	bool CanFireWeapon(struct FText* FailMsg, class UDialogDataAsset** FailShout);
	void GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats);
	void GetCrosshair(class UHUD_Crosshair_ZiplineGun_C** Result);
	void Update_Line_Of_Sight(struct FVector* Direction, struct FVector* End, bool* DidHit);
	void Negate(float* Value, float* Result);
	void Between(float* Value, float* Min, float* Max, bool* IsBetween);
	void Can_Fire(struct FText* FailMsg, class UDialogDataAsset** FailShout, bool* CanShoot);
	struct FVector GetStartLocation();
	void LineTrace(struct FHitResult* OutHit, struct FVector* Direction, float* distance, bool* HitAny);
	void ClientShoot();
	void ReceiveTick(float* DeltaSeconds);
	void RecieveStopUsing();
	void AddedToInventory(class APlayerCharacter** ItemOwner);
	void RecieveStartUsing();
	void ReceiveBeginPlay();
	void BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature(class UUserWidget** Crosshair);
	void RecieveEquipped();
	void BndEvt__ZiplineLauncher_K2Node_ComponentBoundEvent_1_WeaponFiredDelegate__DelegateSignature(struct FVector* Location);
	void ExecuteUbergraph_WPN_ZipLineGun(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
