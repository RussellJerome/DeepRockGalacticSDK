#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PRJ_LineCutter2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PRJ_LineCutter2.PRJ_LineCutter2_C
// 0x00E0 (0x06C8 - 0x05E8)
class APRJ_LineCutter2_C : public ALineCutterProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_Plasma_Projectile3;                                     // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Linecutter_Projectile_A_Right3;                        // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            SphereRight3;                                             // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Linecutter_Projectile_A_Left3;                         // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            SphereLeft3;                                              // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            SphereRight;                                              // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            SphereLeft;                                               // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            SphereRight2;                                             // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            SphereLeft2;                                              // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Plasma_Projectile2;                                     // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Plasma_Projectile;                                      // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Linecutter_Projectile_A_Right2;                        // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Linecutter_Projectile_A_Left2;                         // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageComponent*                            DamageExplosion;                                          // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProjectileExplosion*                        ProjectileExplosion;                                      // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Linecutter_Projectile_A_Left;                          // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Linecutter_Projectile_A_Right;                         // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ProjectileSlowdown_Velocity_3314D5764A0652510BE0E38ABA90D3FC;// 0x0680(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ProjectileSlowdown__Direction_3314D5764A0652510BE0E38ABA90D3FC;// 0x0684(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0685(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ProjectileSlowdown;                                       // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                ExpandLineTimerHandle;                                    // 0x0690(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                TimerHandleExecutions;                                    // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VisualMaxSize;                                            // 0x069C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                FireTimerHandle;                                          // 0x06A0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                DestructionByTerrainTimerHandle;                          // 0x06A8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TerrainCallTime;                                          // 0x06B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TerrainIndex;                                             // 0x06B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                ReduceLineTimerHandle;                                    // 0x06B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      PersistantExplosion;                                      // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PRJ_LineCutter2.PRJ_LineCutter2_C");
		return ptr;
	}


	void AdjustLineSize();
	void UserConstructionScript();
	void ProjectileSlowdown__FinishedFunc();
	void ProjectileSlowdown__UpdateFunc();
	void ReceiveBeginPlay();
	void ExpandLine();
	void DoDamage();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void StartLineExpansion();
	void CheckTerrainCall();
	void Set_Line_Size_Event(float* MaxSize, float* MaxSizeVisual);
	void Multiply_Line_Size(float* Multiplier);
	void K2_OnReset();
	void LinelifespanDestroy();
	void Explode();
	void LineReducing();
	void ThereCanBeOnlyOne();
	void DisableProjectile();
	void Add_Line_Size(float* Size);
	void OnClientInitialized();
	void OnLineDestroyed(struct FHitResult* Result);
	void SetExtraBeamVisibility(bool* IsVisible);
	void LeaveTrail();
	void StartSpawningTrail();
	void ExecuteUbergraph_PRJ_LineCutter2(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
