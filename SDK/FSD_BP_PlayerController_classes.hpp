#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PlayerController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerController.BP_PlayerController_C
// 0x0058 (0x0958 - 0x0900)
class ABP_PlayerController_C : public ABP_PlayerControllerBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0900(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    MainMenuRequested;                                        // 0x0908(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               HUD_Visible;                                              // 0x0918(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0919(0x0003) MISSED OFFSET
	int                                                CheatCounter;                                             // 0x091C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    CheatMenuRequested;                                       // 0x0920(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UClass*                                      MouseCursor_DO_NOT_DELETE;                                // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    ToggleFPS;                                                // 0x0938(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    QuickCheatMenuRequested;                                  // 0x0948(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerController.BP_PlayerController_C");
		return ptr;
	}


	void UpdateTutorialComplete();
	bool ShouldSkipEndscreen();
	void DestroyCharacter();
	void IsHUDVisible(bool* Visible);
	void OnLoaded_0556572242FB261AF5947C9A16CF353A(class UObject** Loaded);
	void InpActEvt_O_K2Node_InputKeyEvent_16(struct FKey* Key);
	void InpActEvt_PushToTalk_K2Node_InputActionEvent_4(struct FKey* Key);
	void InpActEvt_PushToTalk_K2Node_InputActionEvent_3(struct FKey* Key);
	void InpActEvt_MenuButton_K2Node_InputActionEvent_2(struct FKey* Key);
	void InpActEvt_Eight_K2Node_InputKeyEvent_15(struct FKey* Key);
	void InpActEvt_Eight_K2Node_InputKeyEvent_14(struct FKey* Key);
	void InpActEvt_Nine_K2Node_InputKeyEvent_13(struct FKey* Key);
	void InpActEvt_Nine_K2Node_InputKeyEvent_12(struct FKey* Key);
	void InpActEvt_Zero_K2Node_InputKeyEvent_11(struct FKey* Key);
	void InpActEvt_Zero_K2Node_InputKeyEvent_10(struct FKey* Key);
	void InpActEvt_Chat_K2Node_InputActionEvent_1(struct FKey* Key);
	void InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_9(struct FKey* Key);
	void InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_8(struct FKey* Key);
	void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_7(struct FKey* Key);
	void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_6(struct FKey* Key);
	void InpActEvt_H_K2Node_InputKeyEvent_5(struct FKey* Key);
	void InpActEvt_Subtract_K2Node_InputKeyEvent_4(struct FKey* Key);
	void InpActEvt_Add_K2Node_InputKeyEvent_3(struct FKey* Key);
	void InpActEvt_Multiply_K2Node_InputKeyEvent_2(struct FKey* Key);
	void InpActEvt_Ctrl_Alt_N_K2Node_InputKeyEvent_1(struct FKey* Key);
	void SelectNewHero(class UClass** Hero);
	void Proxy_Generate_Landscape_From_Data(int* Seed, TArray<struct FRoomNode>* Rooms, TArray<struct FPathObstacle>* Obstacles, TArray<struct FTunnelNode>* Tunnels);
	void ReceiveBeginPlay();
	void OnGenerationDone();
	void Server_RestartLevel();
	void ReceiveEndLevel();
	void Server_ClientReady();
	void SelectLateJoinCharacter(class UClass** Hero);
	void RequestLoadScreen();
	void ShowSelectCharacterScreen();
	void ShowLoadingScrren();
	void Receive_EndLevel_WaitForData(bool* areObjectivesCompleted, int* numberOfPlayersInPod);
	void Server_RequestPLSData();
	void RequestPLSData();
	void Server_SetLag();
	void ExecuteUbergraph_BP_PlayerController(int* EntryPoint);
	void QuickCheatMenuRequested__DelegateSignature();
	void ToggleFPS__DelegateSignature();
	void CheatMenuRequested__DelegateSignature();
	void MainMenuRequested__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
