#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_BeastMaster_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BeastMaster.BP_BeastMaster_C
// 0x00C8 (0x01D8 - 0x0110)
class UBP_BeastMaster_C : public UBeastMasterComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0110(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ASpiderEnemy*                                PossibleTarget;                                           // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ASpiderEnemy*                                FriendedEnemy;                                            // 0x0120(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagQuery                           Filter;                                                   // 0x0128(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      LoadedFriendable;                                         // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TSoftObjectPtr<class UClass>                       Friendable;                                               // 0x0178(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MaxAttackDMGMod;                                          // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01A4(0x0004) MISSED OFFSET
	struct FText                                       HoldText;                                                 // 0x01A8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                HoldTimer;                                                // 0x01C0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              HoldProgress;                                             // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoldDuration;                                             // 0x01CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ASpiderEnemy*                                ActiveTarget;                                             // 0x01D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BeastMaster.BP_BeastMaster_C");
		return ptr;
	}


	void UpdateHoldProgress();
	class AFSDPlayerController* GetPlayerController();
	void SetupStatusEffects(class ASpiderEnemy** enemy);
	void GetPlayerCharacter(class APlayerCharacter** AsPlayer_Character);
	void GetPerk(class UFloatPerkAsset** Perks_Beast_Master);
	bool CanBefriend(class ASpiderEnemy** enemy);
	void OnLoaded_8AE17C7C4ABC357330FD319C5F5E7796(class UClass** Loaded);
	void ReceiveBeginPlay();
	void OnTargetChanged(class AActor** NewTarget, class UPrimitiveComponent** NewPrimitive);
	void BeginBeastMasterActivation();
	void Server_Befriend(class ASpiderEnemy** Spider);
	void Setup_Shouts();
	void OnFriendedEnemyDeath(class UHealthComponentBase** HealthComponent);
	void EndBeastMasterActivation();
	void ExecuteUbergraph_BP_BeastMaster(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
