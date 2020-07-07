#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_MiniMule_Salvage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MiniMule_Salvage.BP_MiniMule_Salvage_C
// 0x0150 (0x05B8 - 0x0468)
class ABP_MiniMule_Salvage_C : public AMULE
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0468(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDropToTerrainComponent*                     DropToTerrain;                                            // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTerrainDetectComponent*                     TerrainDetect;                                            // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTerrainPlacementComponent*                  terrainPlacement;                                         // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USimpleObjectInfoComponent*                  SimpleObjectInfo;                                         // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            BuildWidget;                                              // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOutlineComponent*                           Outline;                                                  // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        Needs_RepairPointLight;                                   // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URepairableUsable*                           RepairableUsable;                                         // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               ImpactBox;                                                // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             FrontLight;                                               // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USingleUsableComponent*                      SingleUsable;                                             // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            EnemyTrigger;                                             // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             DistressCall;                                             // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Sphere;                                                   // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActorTrackingComponent*                     ActorTracking;                                            // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URepairableComponent*                        repairable;                                               // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Sphere_Timeline_Alpha_F8822EE14FEEA3F10146E8A0CB21A6AE;   // 0x0510(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Sphere_Timeline_Scale_F8822EE14FEEA3F10146E8A0CB21A6AE;   // 0x0514(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Sphere_Timeline__Direction_F8822EE14FEEA3F10146E8A0CB21A6AE;// 0x0518(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0519(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Sphere_Timeline;                                          // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Intensity_Intensity_5AC148CB47D091780A7015BD47B62D4E;     // 0x0528(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Intensity__Direction_5AC148CB47D091780A7015BD47B62D4E;    // 0x052C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x052D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Intensity;                                                // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Sphere_Material;                                          // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistressLightIntensity_;                                  // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0544(0x0004) MISSED OFFSET
	TArray<struct FName>                               Legs;                                                     // 0x0548(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class UResourceData*, int>                    ResourcesToGive;                                          // 0x0558(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FRandRange                                  CraftingMaterialAmount;                                   // 0x05A8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFSDAchievement*                             MiniMuleFixerAchievement;                                 // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniMule_Salvage.BP_MiniMule_Salvage_C");
		return ptr;
	}


	void TryDestroyComponent(class UActorComponent** Component);
	void GetState(TEnumAsByte<EMiniMule_State>* NewParam);
	void SetState(TEnumAsByte<EMiniMule_State>* EnumValue);
	void UserConstructionScript();
	void Sphere_Timeline__FinishedFunc();
	void Sphere_Timeline__UpdateFunc();
	void Intensity__FinishedFunc();
	void Intensity__UpdateFunc();
	void GotoDropPod(struct FVector* DroppodLocation);
	void Cheat_TeleportPlayer();
	void ReceiveBeginPlay();
	void BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter** user);
	void Stop_Beacon();
	void Cheat_Repair();
	void BndEvt__Repairable_K2Node_ComponentBoundEvent_0_RepairedDelegate__DelegateSignature(class URepairableComponent** Component);
	void BndEvt__Repairable_K2Node_ComponentBoundEvent_1_RepairedDelegate__DelegateSignature(class URepairableComponent** Component);
	void BndEvt__Repairable_K2Node_ComponentBoundEvent_2_RepairedDelegate__DelegateSignature(class URepairableComponent** Component);
	void BndEvt__RepairableUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter** user);
	void OnMessageAI(struct FName* TriggerName);
	void OnFallToTerrainStateChanged(bool* IsFalling);
	void ExecuteUbergraph_BP_MiniMule_Salvage(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
