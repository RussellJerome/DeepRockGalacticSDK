// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PLS_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PLS_Base.PLS_Base_C.StopWaveMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           MusicHandle                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APLS_Base_C::StopWaveMusic(int* MusicHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.StopWaveMusic");

	APLS_Base_C_StopWaveMusic_Params params;
	params.MusicHandle = MusicHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.SpawnMissionCriticalItems
// (Public, BlueprintCallable, BlueprintEvent)

void APLS_Base_C::SpawnMissionCriticalItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.SpawnMissionCriticalItems");

	APLS_Base_C_SpawnMissionCriticalItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.HasSelectedCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APLS_Base_C::HasSelectedCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.HasSelectedCharacter");

	APLS_Base_C_HasSelectedCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PLS_Base.PLS_Base_C.CallGenerationComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           pass                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPLS_Passes>*      PLS_Pass                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APLS_Base_C::CallGenerationComplete(int* pass, TEnumAsByte<EPLS_Passes>* PLS_Pass)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.CallGenerationComplete");

	APLS_Base_C_CallGenerationComplete_Params params;
	params.pass = pass;
	params.PLS_Pass = PLS_Pass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.OnRep_ActiveWaveMusic
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::OnRep_ActiveWaveMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.OnRep_ActiveWaveMusic");

	APLS_Base_C_OnRep_ActiveWaveMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.PlayMusicLocally
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundCue**              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APLS_Base_C::PlayMusicLocally(class USoundCue** Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.PlayMusicLocally");

	APLS_Base_C_PlayMusicLocally_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.PlayWaveMusic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundCue**              Music                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MusicHandle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APLS_Base_C::PlayWaveMusic(class USoundCue** Music, int* MusicHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.PlayWaveMusic");

	APLS_Base_C_PlayWaveMusic_Params params;
	params.Music = Music;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MusicHandle != nullptr)
		*MusicHandle = params.MusicHandle;
}


// Function PLS_Base.PLS_Base_C.OnRep_MusicIndex
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::OnRep_MusicIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.OnRep_MusicIndex");

	APLS_Base_C_OnRep_MusicIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.GetRandomRoomCall
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class URoomGenerator*>  Rooms                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          RemoveRoom                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class URoomGenerator*          Room                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APLS_Base_C::GetRandomRoomCall(bool* RemoveRoom, TArray<class URoomGenerator*>* Rooms, class URoomGenerator** Room)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.GetRandomRoomCall");

	APLS_Base_C_GetRandomRoomCall_Params params;
	params.RemoveRoom = RemoveRoom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rooms != nullptr)
		*Rooms = params.Rooms;
	if (Room != nullptr)
		*Room = params.Room;
}


// Function PLS_Base.PLS_Base_C.StopMusicAndAmbient
// (Public, BlueprintCallable, BlueprintEvent)

void APLS_Base_C::StopMusicAndAmbient()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.StopMusicAndAmbient");

	APLS_Base_C_StopMusicAndAmbient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.PlayMusicAndAmbient
// (Public, BlueprintCallable, BlueprintEvent)

void APLS_Base_C::PlayMusicAndAmbient()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.PlayMusicAndAmbient");

	APLS_Base_C_PlayMusicAndAmbient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.SaveInitialState
// (Public, BlueprintCallable, BlueprintEvent)

void APLS_Base_C::SaveInitialState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.SaveInitialState");

	APLS_Base_C_SaveInitialState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.GetRoomFromRandomGroup
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class URoomGenerator*          Room                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APLS_Base_C::GetRoomFromRandomGroup(class URoomGenerator** Room)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.GetRoomFromRandomGroup");

	APLS_Base_C_GetRoomFromRandomGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Room != nullptr)
		*Room = params.Room;
}


// Function PLS_Base.PLS_Base_C.SetupWeightedRooms
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class URoomGenerator*>  Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void APLS_Base_C::SetupWeightedRooms(TArray<class URoomGenerator*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.SetupWeightedRooms");

	APLS_Base_C_SetupWeightedRooms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function PLS_Base.PLS_Base_C.CreateCaveGraph
// (Public, BlueprintCallable, BlueprintEvent)

void APLS_Base_C::CreateCaveGraph()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.CreateCaveGraph");

	APLS_Base_C_CreateCaveGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.SelectWeightedRoom
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class URoomGenerator*          SelectedRoom                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APLS_Base_C::SelectWeightedRoom(class URoomGenerator** SelectedRoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.SelectWeightedRoom");

	APLS_Base_C_SelectWeightedRoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedRoom != nullptr)
		*SelectedRoom = params.SelectedRoom;
}


// Function PLS_Base.PLS_Base_C.GetRandomRoom
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class URoomGenerator*>  Rooms                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          RemoveRoom                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class URoomGenerator*          Room                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APLS_Base_C::GetRandomRoom(bool* RemoveRoom, TArray<class URoomGenerator*>* Rooms, class URoomGenerator** Room)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.GetRandomRoom");

	APLS_Base_C_GetRandomRoom_Params params;
	params.RemoveRoom = RemoveRoom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rooms != nullptr)
		*Rooms = params.Rooms;
	if (Room != nullptr)
		*Room = params.Room;
}


// Function PLS_Base.PLS_Base_C.OnLoaded_11827D59481E498DEC10999DAE2915BF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APLS_Base_C::OnLoaded_11827D59481E498DEC10999DAE2915BF(class UClass** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.OnLoaded_11827D59481E498DEC10999DAE2915BF");

	APLS_Base_C_OnLoaded_11827D59481E498DEC10999DAE2915BF_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.OnLoaded_C0B2FCB247E1A2F8766E5E93EBF80DF8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APLS_Base_C::OnLoaded_C0B2FCB247E1A2F8766E5E93EBF80DF8(class UClass** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.OnLoaded_C0B2FCB247E1A2F8766E5E93EBF80DF8");

	APLS_Base_C_OnLoaded_C0B2FCB247E1A2F8766E5E93EBF80DF8_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APLS_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.ReceiveBeginPlay");

	APLS_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.Generate Landscape From Data
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Seed                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FRoomNode>*      Rooms                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FPathObstacle>*  Obstacles                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FTunnelNode>*    Tunnels                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void APLS_Base_C::Generate_Landscape_From_Data(int* Seed, TArray<struct FRoomNode>* Rooms, TArray<struct FPathObstacle>* Obstacles, TArray<struct FTunnelNode>* Tunnels)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate Landscape From Data");

	APLS_Base_C_Generate_Landscape_From_Data_Params params;
	params.Seed = Seed;
	params.Rooms = Rooms;
	params.Obstacles = Obstacles;
	params.Tunnels = Tunnels;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.Generate Landscape On Client
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerController_C** Client                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APLS_Base_C::Generate_Landscape_On_Client(class ABP_PlayerController_C** Client)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate Landscape On Client");

	APLS_Base_C_Generate_Landscape_On_Client_Params params;
	params.Client = Client;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.BaseLayerCommitDone
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::BaseLayerCommitDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.BaseLayerCommitDone");

	APLS_Base_C_BaseLayerCommitDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.FinalCommitDon
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::FinalCommitDon()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.FinalCommitDon");

	APLS_Base_C_FinalCommitDon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.ListenForWaveMusicEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent**        WaveComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APLS_Base_C::ListenForWaveMusicEnd(class UAudioComponent** WaveComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.ListenForWaveMusicEnd");

	APLS_Base_C_ListenForWaveMusicEnd_Params params;
	params.WaveComponent = WaveComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.OnWaveMusicEnded
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::OnWaveMusicEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.OnWaveMusicEnded");

	APLS_Base_C_OnWaveMusicEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.SpawnDropPod
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::SpawnDropPod()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.SpawnDropPod");

	APLS_Base_C_SpawnDropPod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.Generate_Graph
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::Generate_Graph()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate_Graph");

	APLS_Base_C_Generate_Graph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.Generate_Pass_2
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::Generate_Pass_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate_Pass_2");

	APLS_Base_C_Generate_Pass_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.Generate_Pass_3
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::Generate_Pass_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate_Pass_3");

	APLS_Base_C_Generate_Pass_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.Final Pass
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::Final_Pass()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Final Pass");

	APLS_Base_C_Final_Pass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.Generate_Pass_4_Server
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::Generate_Pass_4_Server()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate_Pass_4_Server");

	APLS_Base_C_Generate_Pass_4_Server_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.Generate_Pass_4_Clients
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::Generate_Pass_4_Clients()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate_Pass_4_Clients");

	APLS_Base_C_Generate_Pass_4_Clients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.GenerateLandscape
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APLS_Base_C::GenerateLandscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.GenerateLandscape");

	APLS_Base_C_GenerateLandscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.Generate_Pass_03
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::Generate_Pass_03()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate_Pass_03");

	APLS_Base_C_Generate_Pass_03_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.Generate_Pass_6
// (BlueprintCallable, BlueprintEvent)

void APLS_Base_C::Generate_Pass_6()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate_Pass_6");

	APLS_Base_C_Generate_Pass_6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.BeginLiveGeneration
// (Event, Public, BlueprintEvent)

void APLS_Base_C::BeginLiveGeneration()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.BeginLiveGeneration");

	APLS_Base_C_BeginLiveGeneration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.OnPLSDataRecieved
// (Event, Public, BlueprintEvent)

void APLS_Base_C::OnPLSDataRecieved()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.OnPLSDataRecieved");

	APLS_Base_C_OnPLSDataRecieved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.AddRoomToInitialState
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FRoomNode*              RoomNode                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void APLS_Base_C::AddRoomToInitialState(struct FRoomNode* RoomNode)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.AddRoomToInitialState");

	APLS_Base_C_AddRoomToInitialState_Params params;
	params.RoomNode = RoomNode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PLS_Base.PLS_Base_C.ExecuteUbergraph_PLS_Base
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APLS_Base_C::ExecuteUbergraph_PLS_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.ExecuteUbergraph_PLS_Base");

	APLS_Base_C_ExecuteUbergraph_PLS_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
