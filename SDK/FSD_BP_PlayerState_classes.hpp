#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PlayerState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerState.BP_PlayerState_C
// 0x0031 (0x0579 - 0x0548)
class ABP_PlayerState_C : public AFSDPlayerState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0548(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPlayerResourceComponent*                    PlayerResource;                                           // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               LateJoinFinished;                                         // 0x0560(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TestDropThing;                                            // 0x0561(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0562(0x0006) MISSED OFFSET
	class UClass*                                      PodSpawnClass;                                            // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PodBeacnClass;                                            // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TestLateJoin;                                             // 0x0578(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerState.BP_PlayerState_C");
		return ptr;
	}


	TArray<struct FCreditsReward> GetDeepDiveCreditsReward(int* StagesCompleted, int* goldCollected);
	TArray<struct FXPReward> GetXPRewardDeepDive(int* StagesCompleted);
	void GetRessupyBeaconClass(class UClass** PodSpawnClass);
	void GetRessuplySpawnClass(class UClass** PodSpawnClass);
	void SpawnPlayerInPod(class AFSDPlayerController** Player);
	void SpawnPlayerDirectly(class AController** Player);
	TArray<struct FXPReward> GetXPRewardsCustom(TMap<class UResourceData*, float>* Resources, int* EnemiesKilled, bool* FailPrimaryObjectiveCompleted, bool* FailSecondaryObjectiveCompleted);
	void OnLoaded_E2B28351414D5B2A20966496F0955946(class UClass** Loaded);
	void OnLoaded_97A4F0694E71C770F24EA6A654B14857(class UClass** Loaded);
	void OnLateJoinFinished();
	void ReceiveBeginPlay();
	void LogState();
	void CharacterSelected();
	void TestLatjoin();
	void RespawnPlayer();
	void ExecuteUbergraph_BP_PlayerState(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
