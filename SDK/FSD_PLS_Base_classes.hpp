#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PLS_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PLS_Base.PLS_Base_C
// 0x0098 (0x06B8 - 0x0620)
class APLS_Base_C : public AProceduralSetup
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0620(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterial*                                   OutlineMaterial;                                          // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class URoomGenerator*>                      Starting_Rooms;                                           // 0x0638(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FWeightedRoom>                       WeightedRooms;                                            // 0x0648(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class URoomGeneratorGroup*>                 RoomGroups;                                               // 0x0658(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class USoundCue*>                           Level_Music;                                              // 0x0668(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FRoomNode>                           RoomsInitialState;                                        // 0x0678(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAudioComponent*                             LevelMusicComponent;                                      // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             AmbientComponent;                                         // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             WaveMusicComponent;                                       // 0x0698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                MusicIndex;                                               // 0x06A0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06A4(0x0004) MISSED OFFSET
	class USoundCue*                                   ActiveWaveMusic;                                          // 0x06A8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInitialized;                                            // 0x06B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CarveTunnels;                                             // 0x06B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Pass1Complete;                                            // 0x06B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x06B3(0x0001) MISSED OFFSET
	int                                                CurrentWaveMusicHandle;                                   // 0x06B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PLS_Base.PLS_Base_C");
		return ptr;
	}


	void StopWaveMusic(int* MusicHandle);
	void SpawnMissionCriticalItems();
	bool HasSelectedCharacter();
	void CallGenerationComplete(int* pass, TEnumAsByte<EPLS_Passes>* PLS_Pass);
	void OnRep_ActiveWaveMusic();
	void PlayMusicLocally(class USoundCue** Sound);
	void PlayWaveMusic(class USoundCue** Music, int* MusicHandle);
	void OnRep_MusicIndex();
	void GetRandomRoomCall(bool* RemoveRoom, TArray<class URoomGenerator*>* Rooms, class URoomGenerator** Room);
	void StopMusicAndAmbient();
	void PlayMusicAndAmbient();
	void SaveInitialState();
	void GetRoomFromRandomGroup(class URoomGenerator** Room);
	void SetupWeightedRooms(TArray<class URoomGenerator*>* Array);
	void CreateCaveGraph();
	void SelectWeightedRoom(class URoomGenerator** SelectedRoom);
	void GetRandomRoom(bool* RemoveRoom, TArray<class URoomGenerator*>* Rooms, class URoomGenerator** Room);
	void OnLoaded_11827D59481E498DEC10999DAE2915BF(class UClass** Loaded);
	void OnLoaded_C0B2FCB247E1A2F8766E5E93EBF80DF8(class UClass** Loaded);
	void ReceiveBeginPlay();
	void Generate_Landscape_From_Data(int* Seed, TArray<struct FRoomNode>* Rooms, TArray<struct FPathObstacle>* Obstacles, TArray<struct FTunnelNode>* Tunnels);
	void Generate_Landscape_On_Client(class ABP_PlayerController_C** Client);
	void BaseLayerCommitDone();
	void FinalCommitDon();
	void ListenForWaveMusicEnd(class UAudioComponent** WaveComponent);
	void OnWaveMusicEnded();
	void SpawnDropPod();
	void Generate_Graph();
	void Generate_Pass_2();
	void Generate_Pass_3();
	void Final_Pass();
	void Generate_Pass_4_Server();
	void Generate_Pass_4_Clients();
	void GenerateLandscape();
	void Generate_Pass_03();
	void Generate_Pass_6();
	void BeginLiveGeneration();
	void OnPLSDataRecieved();
	void AddRoomToInitialState(struct FRoomNode* RoomNode);
	void ExecuteUbergraph_PLS_Base(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
