#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_GameMode_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GameMode.BP_GameMode_C
// 0x0032 (0x05CA - 0x0598)
class ABP_GameMode_C : public AFSDGameMode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0598(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UEnemyWaveManager*                           EnemyWaveManager;                                         // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDifficultyManager*                          DifficultyManager;                                        // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEncounterManager*                           EncounterManager;                                         // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                TimerHandle;                                              // 0x05C0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               CanSpawnBosco;                                            // 0x05C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewVar_1;                                                 // 0x05C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameMode.BP_GameMode_C");
		return ptr;
	}


	void TryPreloadCheatMenu();
	void GetEscapepodLocation(struct FTransform* Location);
	void EnableMuleButton();
	void DestroyNetworkedActors();
	void LoadToMission(class UMissionTemplate** mission);
	class UClass* GetDefaultPawnClassForController(class AController** InController);
	void SetDesiredDifficulty();
	class AActor* ChoosePlayerStart(class AController** Player);
	void RecieveEndLevel();
	void ReceiveBeginPlay();
	void WaitForGeneration();
	void Recieve_ContinueTimerEnded();
	void Call_DropPod();
	void Trigger_End_Wave(bool* cancelAllWaves);
	void SpawnBosco(struct FTransform* Location);
	void RemoveBosco();
	void Handle_Bosco_Respawn();
	void OnPlayerLeave(class AFSDPlayerState** PlayerState);
	void SpawnAtLocation(struct FTransform* Location);
	void Loaded();
	void DonkeyButtonPressed();
	void LoadSpaceRig();
	void ExecuteUbergraph_BP_GameMode(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
