#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SentryGun_Moveable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SentryGun_Moveable.BP_SentryGun_Moveable_C
// 0x0031 (0x0541 - 0x0510)
class ABP_SentryGun_Moveable_C : public ARecallableSentryGun
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_SentryGunMovementTrail;                                 // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             AudioMoving;                                              // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        SentryGunActor;                                           // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnOnNoAmmo;                                           // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0531(0x0007) MISSED OFFSET
	class ARecallableSentryGunItem*                    Item;                                                     // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowAllOutlines;                                          // 0x0540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SentryGun_Moveable.BP_SentryGun_Moveable_C");
		return ptr;
	}


	void GetStateDescription(struct FText* Description);
	void SpawnAudioOnPlayer(class USoundBase** Audio);
	class UClass* GetSentryGunClass();
	void GetSentryOwner(class APlayerCharacter** AsPlayer_Character);
	class ASentryGun* GetSentryGun();
	void ReceiveBeginPlay();
	void OnMoveRequested();
	void OnStateChanged_Event(class ARedeployableSentryGun** Sender, ERedeployableSentryGunState* NewState);
	void ReceiveOnSentryReady(class ASentryGun** SentryGun, class APlayerCharacter** PlayerCharacter);
	void OnAmmoCountChanged_Event_1(int* AmmoCount, int* Change);
	void AudioReadyToBuild();
	void OnMoving();
	void OnMoveFinished(bool* returnedHome);
	void AudioBeginMove();
	void AudioMoveFinished();
	void AudioReturnedHome();
	void ReceiveOnStateChanged();
	void Update_Outline_And_Icon();
	void OnSentryStateChanged(class ARedeployableSentryGun** Sender, ERedeployableSentryGunState* NewState);
	void OnToggleOutline_Event(bool* Visible);
	void OnItemEquipped_Event(class AItem** Item);
	void OnSelectedItemChanged(class ARecallableSentryGun** SentryGun);
	void ExecuteUbergraph_BP_SentryGun_Moveable(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
