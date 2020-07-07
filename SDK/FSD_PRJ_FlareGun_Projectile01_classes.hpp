#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PRJ_FlareGun_Projectile01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C
// 0x0094 (0x046C - 0x03D8)
class APRJ_FlareGun_Projectile01_C : public AFlareGunProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                         SpotLight_Shadow_4;                                       // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight_Shadow_3;                                       // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight_Shadow_2;                                       // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTerrainDetectComponent*                     TerrainDetect;                                            // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight_Dead;                                          // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh_Front;                                               // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        mesh_light;                                               // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight_NoShadow;                                      // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Light_Anim_ShadowMultiplier_7569FDBD44600A7270E9429A8EC6FB81;// 0x0438(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Light_Anim_NewTrack_0_7569FDBD44600A7270E9429A8EC6FB81;   // 0x043C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Light_Anim__Direction_7569FDBD44600A7270E9429A8EC6FB81;   // 0x0440(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Light_Anim;                                               // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              LightIntensity_Point;                                     // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Damage;                                                   // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScaledEffect                               DamageEffect;                                             // 0x0458(0x0010) (Edit, BlueprintVisible)
	float                                              LightIntensity_Spot;                                      // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C");
		return ptr;
	}


	void GetImpactEmitter(class UFSDPhysicalMaterial** self2, class UParticleSystem** ImpactParticles);
	void UpdateShadowRadius();
	void StartFadeOut(float* Time);
	void GetHealthBaseComponentFromActor(class AActor** Actor, class UHealthComponentBase** Health);
	void FallToGround();
	void Light_Anim__FinishedFunc();
	void Light_Anim__UpdateFunc();
	void OnImpacted(struct FHitResult* HitResult);
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
	void OnDroppodImpact(class AMiningPod** DropPod);
	void HideAll();
	void OnFlareExtinguish();
	void OnUpdateShadowRadius();
	void ReleaseFlare();
	void ActivateFlare();
	void ExecuteUbergraph_PRJ_FlareGun_Projectile01(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
