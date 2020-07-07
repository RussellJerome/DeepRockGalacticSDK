// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PlayerController_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerController.BP_PlayerController_C.UpdateTutorialComplete
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::UpdateTutorialComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.UpdateTutorialComplete");

	ABP_PlayerController_C_UpdateTutorialComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.ShouldSkipEndscreen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_PlayerController_C::ShouldSkipEndscreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ShouldSkipEndscreen");

	ABP_PlayerController_C_ShouldSkipEndscreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_PlayerController.BP_PlayerController_C.DestroyCharacter
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::DestroyCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.DestroyCharacter");

	ABP_PlayerController_C_DestroyCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.IsHUDVisible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::IsHUDVisible(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.IsHUDVisible");

	ABP_PlayerController_C_IsHUDVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function BP_PlayerController.BP_PlayerController_C.OnLoaded_0556572242FB261AF5947C9A16CF353A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::OnLoaded_0556572242FB261AF5947C9A16CF353A(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnLoaded_0556572242FB261AF5947C9A16CF353A");

	ABP_PlayerController_C_OnLoaded_0556572242FB261AF5947C9A16CF353A_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_O_K2Node_InputKeyEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_O_K2Node_InputKeyEvent_16(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_O_K2Node_InputKeyEvent_16");

	ABP_PlayerController_C_InpActEvt_O_K2Node_InputKeyEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_PushToTalk_K2Node_InputActionEvent_4(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_4");

	ABP_PlayerController_C_InpActEvt_PushToTalk_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_PushToTalk_K2Node_InputActionEvent_3(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_PushToTalk_K2Node_InputActionEvent_3");

	ABP_PlayerController_C_InpActEvt_PushToTalk_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_MenuButton_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_MenuButton_K2Node_InputActionEvent_2(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_MenuButton_K2Node_InputActionEvent_2");

	ABP_PlayerController_C_InpActEvt_MenuButton_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Eight_K2Node_InputKeyEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Eight_K2Node_InputKeyEvent_15(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Eight_K2Node_InputKeyEvent_15");

	ABP_PlayerController_C_InpActEvt_Eight_K2Node_InputKeyEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Eight_K2Node_InputKeyEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Eight_K2Node_InputKeyEvent_14(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Eight_K2Node_InputKeyEvent_14");

	ABP_PlayerController_C_InpActEvt_Eight_K2Node_InputKeyEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Nine_K2Node_InputKeyEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Nine_K2Node_InputKeyEvent_13(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Nine_K2Node_InputKeyEvent_13");

	ABP_PlayerController_C_InpActEvt_Nine_K2Node_InputKeyEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Nine_K2Node_InputKeyEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Nine_K2Node_InputKeyEvent_12(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Nine_K2Node_InputKeyEvent_12");

	ABP_PlayerController_C_InpActEvt_Nine_K2Node_InputKeyEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Zero_K2Node_InputKeyEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Zero_K2Node_InputKeyEvent_11(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Zero_K2Node_InputKeyEvent_11");

	ABP_PlayerController_C_InpActEvt_Zero_K2Node_InputKeyEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Zero_K2Node_InputKeyEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Zero_K2Node_InputKeyEvent_10(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Zero_K2Node_InputKeyEvent_10");

	ABP_PlayerController_C_InpActEvt_Zero_K2Node_InputKeyEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Chat_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Chat_K2Node_InputActionEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Chat_K2Node_InputActionEvent_1");

	ABP_PlayerController_C_InpActEvt_Chat_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_9(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_9");

	ABP_PlayerController_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_8(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_8");

	ABP_PlayerController_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_7(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_7");

	ABP_PlayerController_C_InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_6(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_6");

	ABP_PlayerController_C_InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_H_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_H_K2Node_InputKeyEvent_5(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_H_K2Node_InputKeyEvent_5");

	ABP_PlayerController_C_InpActEvt_H_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Subtract_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Subtract_K2Node_InputKeyEvent_4(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Subtract_K2Node_InputKeyEvent_4");

	ABP_PlayerController_C_InpActEvt_Subtract_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Add_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Add_K2Node_InputKeyEvent_3(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Add_K2Node_InputKeyEvent_3");

	ABP_PlayerController_C_InpActEvt_Add_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Multiply_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Multiply_K2Node_InputKeyEvent_2(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Multiply_K2Node_InputKeyEvent_2");

	ABP_PlayerController_C_InpActEvt_Multiply_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Ctrl+Alt_N_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerController_C::InpActEvt_Ctrl_Alt_N_K2Node_InputKeyEvent_1(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.InpActEvt_Ctrl+Alt_N_K2Node_InputKeyEvent_1");

	ABP_PlayerController_C_InpActEvt_Ctrl_Alt_N_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.SelectNewHero
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Hero                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::SelectNewHero(class UClass** Hero)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.SelectNewHero");

	ABP_PlayerController_C_SelectNewHero_Params params;
	params.Hero = Hero;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.Proxy_Generate Landscape From Data
// (Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Seed                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FRoomNode>*      Rooms                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FPathObstacle>*  Obstacles                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FTunnelNode>*    Tunnels                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_PlayerController_C::Proxy_Generate_Landscape_From_Data(int* Seed, TArray<struct FRoomNode>* Rooms, TArray<struct FPathObstacle>* Obstacles, TArray<struct FTunnelNode>* Tunnels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Proxy_Generate Landscape From Data");

	ABP_PlayerController_C_Proxy_Generate_Landscape_From_Data_Params params;
	params.Seed = Seed;
	params.Rooms = Rooms;
	params.Obstacles = Obstacles;
	params.Tunnels = Tunnels;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ReceiveBeginPlay");

	ABP_PlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.OnGenerationDone
// (Event, Public, BlueprintEvent)

void ABP_PlayerController_C::OnGenerationDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnGenerationDone");

	ABP_PlayerController_C_OnGenerationDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.Server_RestartLevel
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::Server_RestartLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Server_RestartLevel");

	ABP_PlayerController_C_Server_RestartLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.ReceiveEndLevel
// (Event, Protected, BlueprintEvent)

void ABP_PlayerController_C::ReceiveEndLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ReceiveEndLevel");

	ABP_PlayerController_C_ReceiveEndLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.Server_ClientReady
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::Server_ClientReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Server_ClientReady");

	ABP_PlayerController_C_Server_ClientReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.SelectLateJoinCharacter
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Hero                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::SelectLateJoinCharacter(class UClass** Hero)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.SelectLateJoinCharacter");

	ABP_PlayerController_C_SelectLateJoinCharacter_Params params;
	params.Hero = Hero;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.RequestLoadScreen
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::RequestLoadScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.RequestLoadScreen");

	ABP_PlayerController_C_RequestLoadScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.ShowSelectCharacterScreen
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::ShowSelectCharacterScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ShowSelectCharacterScreen");

	ABP_PlayerController_C_ShowSelectCharacterScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.ShowLoadingScrren
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::ShowLoadingScrren()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ShowLoadingScrren");

	ABP_PlayerController_C_ShowLoadingScrren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.Receive_EndLevel_WaitForData
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          areObjectivesCompleted         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           numberOfPlayersInPod           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::Receive_EndLevel_WaitForData(bool* areObjectivesCompleted, int* numberOfPlayersInPod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Receive_EndLevel_WaitForData");

	ABP_PlayerController_C_Receive_EndLevel_WaitForData_Params params;
	params.areObjectivesCompleted = areObjectivesCompleted;
	params.numberOfPlayersInPod = numberOfPlayersInPod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.Server_RequestPLSData
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::Server_RequestPLSData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Server_RequestPLSData");

	ABP_PlayerController_C_Server_RequestPLSData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.RequestPLSData
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::RequestPLSData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.RequestPLSData");

	ABP_PlayerController_C_RequestPLSData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.Server_SetLag
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::Server_SetLag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.Server_SetLag");

	ABP_PlayerController_C_Server_SetLag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.ExecuteUbergraph_BP_PlayerController
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerController_C::ExecuteUbergraph_BP_PlayerController(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ExecuteUbergraph_BP_PlayerController");

	ABP_PlayerController_C_ExecuteUbergraph_BP_PlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.QuickCheatMenuRequested__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::QuickCheatMenuRequested__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.QuickCheatMenuRequested__DelegateSignature");

	ABP_PlayerController_C_QuickCheatMenuRequested__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.ToggleFPS__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::ToggleFPS__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ToggleFPS__DelegateSignature");

	ABP_PlayerController_C_ToggleFPS__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.CheatMenuRequested__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::CheatMenuRequested__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.CheatMenuRequested__DelegateSignature");

	ABP_PlayerController_C_CheatMenuRequested__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerController.BP_PlayerController_C.MainMenuRequested__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PlayerController_C::MainMenuRequested__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.MainMenuRequested__DelegateSignature");

	ABP_PlayerController_C_MainMenuRequested__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
