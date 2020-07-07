#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_HUD_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HUD.BP_HUD_C
// 0x0078 (0x04B0 - 0x0438)
class ABP_HUD_C : public AFSDHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UWidget*>                             Widgets;                                                  // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class APlayerController*                           PlayerController;                                         // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               HudInitialized;                                           // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0461(0x0007) MISSED OFFSET
	class UFSDMainHUDWidget*                           HudWidget;                                                // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class URadarPointComponent*>                RadarPointsInQueue;                                       // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class APlayerCharacter*                            PlayerCharacter;                                          // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UWindowWidget*                               EscMenu;                                                  // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UWindowWidget*                               CheatMenu;                                                // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UScreenOverlay_Afflictions_C*                AfflictionWidget;                                         // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBP_Invitation_C*                            InviteRequest;                                            // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UWindowWidget*                               QuickCheatMenu;                                           // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HUD.BP_HUD_C");
		return ptr;
	}


	void IsInitialized(bool* Out);
	void CreateQuickCheatsIfNotCreated();
	void PushEvent(class UWidget** EventWidget, bool* Left);
	void CreateCheatsIfNotCreated();
	void RemoveAllWidgetsFromParents();
	void AddAllWidgetToViewport();
	void AddWidget(class UClass** Class, class UWidget** Widget);
	void OnLoaded_73E4B65F44516401F86CB88F7530B278(class UClass** Loaded);
	void PlayerSpawned(class APlayerCharacter** Player);
	void RadarPointAdded(class URadarPointComponent** radarPoint);
	void HandleSeamlessTravel();
	void OnVisibilityChanged();
	void ReceiveDestroyed();
	void OnHit_Event(float* Damage, class UDamageClass** DamageClass, class AActor** DamageCauser, bool* anyHealthLost);
	void OnEndLevelReceived_Event();
	void OnShowMainMenu();
	void QuickCheatMenuRequest();
	void CheatMenuRequest();
	void ExecuteUbergraph_BP_HUD(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
