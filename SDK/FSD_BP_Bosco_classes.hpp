#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Bosco_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Bosco.BP_Bosco_C
// 0x0084 (0x07FC - 0x0778)
class ABP_Bosco_C : public ABosco
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0778(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        TerrainScannerMesh;                                       // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        StateDisplay;                                             // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActorTrackingComponent*                     ActorTracking;                                            // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            ReviveWidget;                                             // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    TrailRight;                                               // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    TrailLeft;                                                // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LightConeMesh;                                            // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USimpleObjectInfoComponent*                  SimpleObjectInfo;                                         // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPlayerResourceComponent*                    PlayerResource;                                           // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOutlineComponent*                           Outline;                                                  // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               FoundEnemies;                                             // 0x07E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x07E1(0x0007) MISSED OFFSET
	class UParticleSystem*                             ScareParicles;                                            // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ScareSound;                                               // 0x07F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScareDuration;                                            // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Bosco.BP_Bosco_C");
		return ptr;
	}


	void Handle_Projectile_diffs(struct FGearStatEntry* Gear_stat, EItemPreviewStatus* Cryo_upgrade_preview_status, EDamageUpgrade* damage_upgrade_type, class AFSDPlayerState** FSD_player_state, struct FGearStatEntry* gear_stat_out);
	void GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats);
	void ScareEffect();
	bool OnTriggerAI(struct FName* TriggerName);
	void SelfDestruct();
	void StateChanged(EDroneAIState* aCurrentState);
	void OnMessageAI(struct FName* TriggerName);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Bosco(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
