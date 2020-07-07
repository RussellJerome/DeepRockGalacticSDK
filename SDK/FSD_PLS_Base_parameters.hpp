#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PLS_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PLS_Base.PLS_Base_C.StopWaveMusic
struct APLS_Base_C_StopWaveMusic_Params
{
	int*                                               MusicHandle;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PLS_Base.PLS_Base_C.SpawnMissionCriticalItems
struct APLS_Base_C_SpawnMissionCriticalItems_Params
{
};

// Function PLS_Base.PLS_Base_C.HasSelectedCharacter
struct APLS_Base_C_HasSelectedCharacter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PLS_Base.PLS_Base_C.CallGenerationComplete
struct APLS_Base_C_CallGenerationComplete_Params
{
	int*                                               pass;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPLS_Passes>*                          PLS_Pass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PLS_Base.PLS_Base_C.OnRep_ActiveWaveMusic
struct APLS_Base_C_OnRep_ActiveWaveMusic_Params
{
};

// Function PLS_Base.PLS_Base_C.PlayMusicLocally
struct APLS_Base_C_PlayMusicLocally_Params
{
	class USoundCue**                                  Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PLS_Base.PLS_Base_C.PlayWaveMusic
struct APLS_Base_C_PlayWaveMusic_Params
{
	class USoundCue**                                  Music;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MusicHandle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PLS_Base.PLS_Base_C.OnRep_MusicIndex
struct APLS_Base_C_OnRep_MusicIndex_Params
{
};

// Function PLS_Base.PLS_Base_C.GetRandomRoomCall
struct APLS_Base_C_GetRandomRoomCall_Params
{
	TArray<class URoomGenerator*>                      Rooms;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              RemoveRoom;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class URoomGenerator*                              Room;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PLS_Base.PLS_Base_C.StopMusicAndAmbient
struct APLS_Base_C_StopMusicAndAmbient_Params
{
};

// Function PLS_Base.PLS_Base_C.PlayMusicAndAmbient
struct APLS_Base_C_PlayMusicAndAmbient_Params
{
};

// Function PLS_Base.PLS_Base_C.SaveInitialState
struct APLS_Base_C_SaveInitialState_Params
{
};

// Function PLS_Base.PLS_Base_C.GetRoomFromRandomGroup
struct APLS_Base_C_GetRoomFromRandomGroup_Params
{
	class URoomGenerator*                              Room;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PLS_Base.PLS_Base_C.SetupWeightedRooms
struct APLS_Base_C_SetupWeightedRooms_Params
{
	TArray<class URoomGenerator*>                      Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PLS_Base.PLS_Base_C.CreateCaveGraph
struct APLS_Base_C_CreateCaveGraph_Params
{
};

// Function PLS_Base.PLS_Base_C.SelectWeightedRoom
struct APLS_Base_C_SelectWeightedRoom_Params
{
	class URoomGenerator*                              SelectedRoom;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PLS_Base.PLS_Base_C.GetRandomRoom
struct APLS_Base_C_GetRandomRoom_Params
{
	TArray<class URoomGenerator*>                      Rooms;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              RemoveRoom;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class URoomGenerator*                              Room;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PLS_Base.PLS_Base_C.OnLoaded_11827D59481E498DEC10999DAE2915BF
struct APLS_Base_C_OnLoaded_11827D59481E498DEC10999DAE2915BF_Params
{
	class UClass**                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PLS_Base.PLS_Base_C.OnLoaded_C0B2FCB247E1A2F8766E5E93EBF80DF8
struct APLS_Base_C_OnLoaded_C0B2FCB247E1A2F8766E5E93EBF80DF8_Params
{
	class UClass**                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PLS_Base.PLS_Base_C.ReceiveBeginPlay
struct APLS_Base_C_ReceiveBeginPlay_Params
{
};

// Function PLS_Base.PLS_Base_C.Generate Landscape From Data
struct APLS_Base_C_Generate_Landscape_From_Data_Params
{
	int*                                               Seed;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FRoomNode>*                          Rooms;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FPathObstacle>*                      Obstacles;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FTunnelNode>*                        Tunnels;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PLS_Base.PLS_Base_C.Generate Landscape On Client
struct APLS_Base_C_Generate_Landscape_On_Client_Params
{
	class ABP_PlayerController_C**                     Client;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PLS_Base.PLS_Base_C.BaseLayerCommitDone
struct APLS_Base_C_BaseLayerCommitDone_Params
{
};

// Function PLS_Base.PLS_Base_C.FinalCommitDon
struct APLS_Base_C_FinalCommitDon_Params
{
};

// Function PLS_Base.PLS_Base_C.ListenForWaveMusicEnd
struct APLS_Base_C_ListenForWaveMusicEnd_Params
{
	class UAudioComponent**                            WaveComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PLS_Base.PLS_Base_C.OnWaveMusicEnded
struct APLS_Base_C_OnWaveMusicEnded_Params
{
};

// Function PLS_Base.PLS_Base_C.SpawnDropPod
struct APLS_Base_C_SpawnDropPod_Params
{
};

// Function PLS_Base.PLS_Base_C.Generate_Graph
struct APLS_Base_C_Generate_Graph_Params
{
};

// Function PLS_Base.PLS_Base_C.Generate_Pass_2
struct APLS_Base_C_Generate_Pass_2_Params
{
};

// Function PLS_Base.PLS_Base_C.Generate_Pass_3
struct APLS_Base_C_Generate_Pass_3_Params
{
};

// Function PLS_Base.PLS_Base_C.Final Pass
struct APLS_Base_C_Final_Pass_Params
{
};

// Function PLS_Base.PLS_Base_C.Generate_Pass_4_Server
struct APLS_Base_C_Generate_Pass_4_Server_Params
{
};

// Function PLS_Base.PLS_Base_C.Generate_Pass_4_Clients
struct APLS_Base_C_Generate_Pass_4_Clients_Params
{
};

// Function PLS_Base.PLS_Base_C.GenerateLandscape
struct APLS_Base_C_GenerateLandscape_Params
{
};

// Function PLS_Base.PLS_Base_C.Generate_Pass_03
struct APLS_Base_C_Generate_Pass_03_Params
{
};

// Function PLS_Base.PLS_Base_C.Generate_Pass_6
struct APLS_Base_C_Generate_Pass_6_Params
{
};

// Function PLS_Base.PLS_Base_C.BeginLiveGeneration
struct APLS_Base_C_BeginLiveGeneration_Params
{
};

// Function PLS_Base.PLS_Base_C.OnPLSDataRecieved
struct APLS_Base_C_OnPLSDataRecieved_Params
{
};

// Function PLS_Base.PLS_Base_C.AddRoomToInitialState
struct APLS_Base_C_AddRoomToInitialState_Params
{
	struct FRoomNode*                                  RoomNode;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PLS_Base.PLS_Base_C.ExecuteUbergraph_PLS_Base
struct APLS_Base_C_ExecuteUbergraph_PLS_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
