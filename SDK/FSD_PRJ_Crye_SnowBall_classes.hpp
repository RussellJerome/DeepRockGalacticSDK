#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PRJ_Crye_SnowBall_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PRJ_Crye_SnowBall.PRJ_Crye_SnowBall_C
// 0x0028 (0x03F0 - 0x03C8)
class APRJ_Crye_SnowBall_C : public AProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDamageComponent*                            Damage;                                                   // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProjectileExplosion*                        ProjectileExplosion;                                      // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PRJ_Crye_SnowBall.PRJ_Crye_SnowBall_C");
		return ptr;
	}


	void OnImpacted(struct FHitResult* HitResult);
	void ExecuteUbergraph_PRJ_Crye_SnowBall(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
