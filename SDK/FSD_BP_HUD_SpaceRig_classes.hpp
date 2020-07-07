#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_HUD_SpaceRig_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HUD_SpaceRig.BP_HUD_SpaceRig_C
// 0x0078 (0x04B0 - 0x0438)
class ABP_HUD_SpaceRig_C : public AFSDHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APlayerCharacter*                            PlayerCharacter;                                          // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UHUD_SpaceRig_C*                             HUD;                                                      // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UUserWidget*>                         OwnedWidgets;                                             // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TSoftObjectPtr<class UClass>>               PendingWindows;                                           // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FClaimableRewardEntry>               PendingPromotionRewards;                                  // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               PendingFirstPromotion;                                    // 0x0488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0489(0x0007) MISSED OFFSET
	TArray<class UFSDEvent*>                           PendingEventRewards;                                      // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UGameDLCSettings*                            DLCSettings;                                              // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWindowWidget*                               CheatMenu;                                                // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HUD_SpaceRig.BP_HUD_SpaceRig_C");
		return ptr;
	}


	void FetchPromotionRewards(bool* OutSuccess);
	void HasSelectedCharacterBeenPromoted(bool* IsPromoted);
	void ShowNextQueuedWindow();
	void EnqueueWindow(TSoftObjectPtr<class UClass>* WidgetClass);
	void PlayerSpawned(class APlayerCharacter** Player);
	void OnVisibilityChanged();
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void OnCountdownCompleted();
	void Update_Visibility();
	void Handle_Count_Down();
	void Setup_Campaign_Notifications();
	void OnCampaignNotification_Event(class UCampaignNotification** Notification);
	void Setup_Retirement_Shouts();
	void OnEligibleForRetirementAssignment(class UBP_GameInstance_C** GameInstance);
	void Setup_Spacerig_Notifications();
	void Setup_UI_Notifications();
	void Setup_Promotion_Rewards();
	void OnLastWindowClosed();
	void Setup_First_Infused_Core();
	void Setup_Pending_Rewards();
	void Setup_FSD_Events();
	void OnFSDEventActiveChanged(class UFSDEvent** InFsdEvent, bool* InIsActive);
	void SetupTutorialMessage();
	void CheckForTutorialPrompt();
	void Stop_Check_For_Tutorial_Prompt();
	void Setup_Game_DLC_Announcements();
	void CheatMenuRequest();
	void ExecuteUbergraph_BP_HUD_SpaceRig(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
