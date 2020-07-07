#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PlayerControllerBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerControllerBase.BP_PlayerControllerBase_C
// 0x0060 (0x0900 - 0x08A0)
class ABP_PlayerControllerBase_C : public AFSDPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    ReplyToInviteRequest;                                     // 0x08A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UBP_Invitation_C*                            InviteRequest;                                            // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              InviteTimeElapsed;                                        // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x08C4(0x0004) MISSED OFFSET
	struct FDateTime                                   InviteWaitTime;                                           // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMENU_TwitchOAuth_C*                         TwitchOAuth;                                              // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                AnselStatus;                                              // 0x08D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AnselCameraTries;                                         // 0x08DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUserWidget*                                 TwitchInteractionUI;                                      // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ABP_FSDCameraManager_C*                      CameraManager;                                            // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                AnselTimerHandle;                                         // 0x08F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UWindowWidget*                               RetirementPopup;                                          // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerControllerBase.BP_PlayerControllerBase_C");
		return ptr;
	}


	void SetIsEscapeMenuEnabled(bool* IsEscapeMenuEnabled);
	void SetHasShownCharacterSelector(bool* HasShown);
	void ItemFilter(class UClass** itemClass, bool* Result);
	void SetClassAnalytics();
	void SetUnlockAnalytics(TArray<class UClass*>* primary, TArray<class UClass*>* Secundary);
	void GetUnlockedItems(EItemCategory* Category, TArray<class UClass*>* Unlocked_Items);
	void CreateTwitchInteractionIfNotCreated(int* ID);
	void TwitchInteraction(int* ID);
	void ReStartAnsel();
	void StartAnsel();
	void StopAnsel();
	void CloseTwitchOAuth(bool* ChangeStatus);
	void CreateTwitchOAuthIfNotCreated();
	void CreateInviteRequestIfNotCreated();
	void InpActEvt_AcceptInvite_K2Node_InputActionEvent_3(struct FKey* Key);
	void InpActEvt_RejectInvite_K2Node_InputActionEvent_2(struct FKey* Key);
	void InpActEvt_IgnoreInvite_K2Node_InputActionEvent_1(struct FKey* Key);
	void InpActEvt_Ctrl_O_K2Node_InputKeyEvent_1(struct FKey* Key);
	void ReceiveBeginPlay();
	void SetPhotographyMode(bool* active);
	void Return_Client_Camera();
	void Setup_Invite_Handling();
	void Setup_Retirement_Notification();
	void OnCharacterCanRetire_Event(class UClass** CharacterClass);
	void UpdateAnalytics();
	void AdjustCamera();
	void Setup_Change_User();
	void ChangeUser();
	void ChangeUserReply(bool* Yes);
	void Reset_Player_Location();
	void Event_On_Join_Request_Reply(int* Reply);
	void Event_On_Join_Request(struct FDiscordUser* handleDiscordJoinRequest);
	void ExecuteUbergraph_BP_PlayerControllerBase(int* EntryPoint);
	void ReplyToInviteRequest__DelegateSignature(int* Reply);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
