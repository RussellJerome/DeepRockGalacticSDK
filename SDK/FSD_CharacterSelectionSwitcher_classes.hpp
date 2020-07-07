#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_CharacterSelectionSwitcher_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CharacterSelectionSwitcher.CharacterSelectionSwitcher_C
// 0x0210 (0x0540 - 0x0330)
class ACharacterSelectionSwitcher_C : public ACharacterSelectionSwitcher
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UEndScreenSetups_C*                          EndScreenSetups;                                          // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEndScreenActorController_C*                 EndScreenActorController3;                                // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEndScreenActorController_C*                 EndScreenActorController2;                                // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEndScreenActorController_C*                 EndScreenActorController1;                                // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UEndScreenActorController_C*                 EndScreenActorController0;                                // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Dwarf_Rig;                                                // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      PlayerCharacterClass;                                     // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APlayerCharacter*                            Character;                                                // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ACameraActor*                                Camera;                                                   // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AActor*                                      selectionLocation;                                        // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AActor*                                      CustomizationLocation;                                    // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FTimerHandle                                IdleTimer;                                                // 0x0398(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                EquippedIndex;                                            // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ECharselectionCameraLocation                       CurrentSelection;                                         // 0x03A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03A5(0x0003) MISSED OFFSET
	class UClass*                                      Viewer3DCharacterClass;                                   // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      ViewerObject;                                             // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      ViewWeaponCamLocation;                                    // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AActor*                                      ViewWeaponObjectLocation;                                 // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AItem*                                       EquipedItem;                                              // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              LastManualRotate;                                         // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	class UClass*                                      View3DItemClass;                                          // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      EndScreenCamLocation;                                     // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class AActor*>                              EndscreenActors;                                          // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FCharacterViewScene                         Scene;                                                    // 0x03F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                              EndScreenActorPositions_Four;                             // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class AActor*>                              EndScreenActorPositions_Three;                            // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class AActor*>                              EndScreenActorPositions_Two;                              // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class AActor*>                              EndScreenActorPositions_One;                              // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class UEndScreenActorController_C*>         CharAnimControllers;                                      // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FRandomStream                               EndScreenRandomStream;                                    // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AActor*>                              EndscreenOnlySceneActors;                                 // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class AActor*>                              CharacterViewSceneOnlyActors;                             // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class UFSDPhysicalMaterial*                        EndscreenPhysicalMaterial;                                // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class ABP_Endscreen_Lamp_C*>                EndScreenLamps;                                           // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class AActor*                                      ForgeCamLocation;                                         // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AActor*                                      ForgeStartLocation;                                       // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UPlayerTPAnimInstance*                       ForgeAnimInstance;                                        // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	class ASkeletalMeshActor*                          ForgeBench;                                               // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               IsIdling;                                                 // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x04C1(0x0007) MISSED OFFSET
	class UStaticMeshComponent*                        MatrixCore;                                               // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               IsForging;                                                // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x04D1(0x0007) MISSED OFFSET
	TArray<class UAnimSequenceBase*>                   ForgeIdleBreaks;                                          // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAnimSequence*                               Prop_AnimSeq;                                             // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      Prop_Actor;                                               // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               Victory_Pose;                                             // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Prop_ActorClass;                                          // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               Prop_Pose;                                                // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               Prop_Idle;                                                // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               Victory_Idle;                                             // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               RestartLoadoutIdle;                                       // 0x0520(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0521(0x0007) MISSED OFFSET
	class UFSDPhysicalMaterial*                        CharacerViewerFallbackPhysicalMaterial;                   // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      PickaxeCameraLocation;                                    // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AActor*                                      Podium;                                                   // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CharacterSelectionSwitcher.CharacterSelectionSwitcher_C");
		return ptr;
	}


	class AActor* GetViewerActor();
	void RestartVanityIdleAnimMonatge();
	void CleanVictoryPoseStuff();
	void LoadVictoryPoseStuff(class UVictoryPose** VicPose);
	void FindEndscreenActorPos(int* num_players, int* Index, class AActor** NewParam);
	void DestroyPreviousSceneActors();
	void RotateFun(float* Yaw);
	void SetPreviewItem(class UClass** Class);
	void SelectCameraLocation(ECharselectionCameraLocation* Selection);
	class APlayerCharacter* GetActiveCharacter();
	void RefreshCharacter(ECharselectionCameraLocation* SelectionType);
	void OnLoaded_516F3DE24C233C61C7A1519D88D99E0F(class UObject** Loaded);
	void OnLoaded_516F3DE24C233C61C7A1519D1101C230(class UObject** Loaded);
	void OnNotifyEnd_B0CB40174FA1135597179392BE030FD1(struct FName* NotifyName);
	void OnNotifyBegin_B0CB40174FA1135597179392BE030FD1(struct FName* NotifyName);
	void OnInterrupted_B0CB40174FA1135597179392BE030FD1(struct FName* NotifyName);
	void OnBlendOut_B0CB40174FA1135597179392BE030FD1(struct FName* NotifyName);
	void OnCompleted_B0CB40174FA1135597179392BE030FD1(struct FName* NotifyName);
	void OnNotifyEnd_BDB7978A405A08A3A09CF3BC042E4D40(struct FName* NotifyName);
	void OnNotifyBegin_BDB7978A405A08A3A09CF3BC042E4D40(struct FName* NotifyName);
	void OnInterrupted_BDB7978A405A08A3A09CF3BC042E4D40(struct FName* NotifyName);
	void OnBlendOut_BDB7978A405A08A3A09CF3BC042E4D40(struct FName* NotifyName);
	void OnCompleted_BDB7978A405A08A3A09CF3BC042E4D40(struct FName* NotifyName);
	void OnNotifyEnd_6DC7882842E914A95C4ACD9AF2E9C943(struct FName* NotifyName);
	void OnNotifyBegin_6DC7882842E914A95C4ACD9AF2E9C943(struct FName* NotifyName);
	void OnInterrupted_6DC7882842E914A95C4ACD9AF2E9C943(struct FName* NotifyName);
	void OnBlendOut_6DC7882842E914A95C4ACD9AF2E9C943(struct FName* NotifyName);
	void OnCompleted_6DC7882842E914A95C4ACD9AF2E9C943(struct FName* NotifyName);
	void ReceiveBeginPlay();
	void OnShowCharacterSelector(class UClass** NewCharacter, ECharselectionCameraLocation* selectionLocation);
	void SwitchToWeapon(int* WeaponIndex);
	void EquipSlot(int* EquipSlot);
	void StartIdles();
	void SetIdleBreak();
	void Hide();
	void Rotate(float* Pitch, float* Yaw);
	void VanityLoop();
	void DoStuff();
	void StartVanityIdles();
	void OnVanityItemEquipped(EVanitySlot* Slot);
	void ShowViewer3D(class UClass** Actor, ECharselectionCameraLocation* selectionLocation);
	void Equip(class UClass** itemClass);
	void ReceiveTick(float* DeltaSeconds);
	void ShowEndScreen(struct FCharacterViewScene* viewScene);
	void ForgeLoop();
	void ForgeStart();
	void BreakEnd(class UAnimMontage** Montage, bool* bInterrupted);
	void ForgeIdleLoop();
	void OnVictoryPoseChanged(class UVictoryPose** VictoryPose);
	void PropPoseDone(class UAnimMontage** Montage, bool* bInterrupted);
	void PoseDone(class UAnimMontage** Montage, bool* bInterrupted);
	void OnCharacterRefresh();
	void ExecuteUbergraph_CharacterSelectionSwitcher(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
