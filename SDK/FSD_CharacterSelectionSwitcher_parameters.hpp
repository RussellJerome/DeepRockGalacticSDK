#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_CharacterSelectionSwitcher_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.GetViewerActor
struct ACharacterSelectionSwitcher_C_GetViewerActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.RestartVanityIdleAnimMonatge
struct ACharacterSelectionSwitcher_C_RestartVanityIdleAnimMonatge_Params
{
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.CleanVictoryPoseStuff
struct ACharacterSelectionSwitcher_C_CleanVictoryPoseStuff_Params
{
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.LoadVictoryPoseStuff
struct ACharacterSelectionSwitcher_C_LoadVictoryPoseStuff_Params
{
	class UVictoryPose**                               VicPose;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.FindEndscreenActorPos
struct ACharacterSelectionSwitcher_C_FindEndscreenActorPos_Params
{
	int*                                               num_players;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.DestroyPreviousSceneActors
struct ACharacterSelectionSwitcher_C_DestroyPreviousSceneActors_Params
{
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.RotateFun
struct ACharacterSelectionSwitcher_C_RotateFun_Params
{
	float*                                             Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SetPreviewItem
struct ACharacterSelectionSwitcher_C_SetPreviewItem_Params
{
	class UClass**                                     Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SelectCameraLocation
struct ACharacterSelectionSwitcher_C_SelectCameraLocation_Params
{
	ECharselectionCameraLocation*                      Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.GetActiveCharacter
struct ACharacterSelectionSwitcher_C_GetActiveCharacter_Params
{
	class APlayerCharacter*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.RefreshCharacter
struct ACharacterSelectionSwitcher_C_RefreshCharacter_Params
{
	ECharselectionCameraLocation*                      SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnLoaded_516F3DE24C233C61C7A1519D88D99E0F
struct ACharacterSelectionSwitcher_C_OnLoaded_516F3DE24C233C61C7A1519D88D99E0F_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnLoaded_516F3DE24C233C61C7A1519D1101C230
struct ACharacterSelectionSwitcher_C_OnLoaded_516F3DE24C233C61C7A1519D1101C230_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyEnd_B0CB40174FA1135597179392BE030FD1
struct ACharacterSelectionSwitcher_C_OnNotifyEnd_B0CB40174FA1135597179392BE030FD1_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyBegin_B0CB40174FA1135597179392BE030FD1
struct ACharacterSelectionSwitcher_C_OnNotifyBegin_B0CB40174FA1135597179392BE030FD1_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnInterrupted_B0CB40174FA1135597179392BE030FD1
struct ACharacterSelectionSwitcher_C_OnInterrupted_B0CB40174FA1135597179392BE030FD1_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnBlendOut_B0CB40174FA1135597179392BE030FD1
struct ACharacterSelectionSwitcher_C_OnBlendOut_B0CB40174FA1135597179392BE030FD1_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnCompleted_B0CB40174FA1135597179392BE030FD1
struct ACharacterSelectionSwitcher_C_OnCompleted_B0CB40174FA1135597179392BE030FD1_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyEnd_BDB7978A405A08A3A09CF3BC042E4D40
struct ACharacterSelectionSwitcher_C_OnNotifyEnd_BDB7978A405A08A3A09CF3BC042E4D40_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyBegin_BDB7978A405A08A3A09CF3BC042E4D40
struct ACharacterSelectionSwitcher_C_OnNotifyBegin_BDB7978A405A08A3A09CF3BC042E4D40_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnInterrupted_BDB7978A405A08A3A09CF3BC042E4D40
struct ACharacterSelectionSwitcher_C_OnInterrupted_BDB7978A405A08A3A09CF3BC042E4D40_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnBlendOut_BDB7978A405A08A3A09CF3BC042E4D40
struct ACharacterSelectionSwitcher_C_OnBlendOut_BDB7978A405A08A3A09CF3BC042E4D40_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnCompleted_BDB7978A405A08A3A09CF3BC042E4D40
struct ACharacterSelectionSwitcher_C_OnCompleted_BDB7978A405A08A3A09CF3BC042E4D40_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyEnd_6DC7882842E914A95C4ACD9AF2E9C943
struct ACharacterSelectionSwitcher_C_OnNotifyEnd_6DC7882842E914A95C4ACD9AF2E9C943_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnNotifyBegin_6DC7882842E914A95C4ACD9AF2E9C943
struct ACharacterSelectionSwitcher_C_OnNotifyBegin_6DC7882842E914A95C4ACD9AF2E9C943_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnInterrupted_6DC7882842E914A95C4ACD9AF2E9C943
struct ACharacterSelectionSwitcher_C_OnInterrupted_6DC7882842E914A95C4ACD9AF2E9C943_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnBlendOut_6DC7882842E914A95C4ACD9AF2E9C943
struct ACharacterSelectionSwitcher_C_OnBlendOut_6DC7882842E914A95C4ACD9AF2E9C943_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnCompleted_6DC7882842E914A95C4ACD9AF2E9C943
struct ACharacterSelectionSwitcher_C_OnCompleted_6DC7882842E914A95C4ACD9AF2E9C943_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ReceiveBeginPlay
struct ACharacterSelectionSwitcher_C_ReceiveBeginPlay_Params
{
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnShowCharacterSelector
struct ACharacterSelectionSwitcher_C_OnShowCharacterSelector_Params
{
	class UClass**                                     NewCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECharselectionCameraLocation*                      selectionLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SwitchToWeapon
struct ACharacterSelectionSwitcher_C_SwitchToWeapon_Params
{
	int*                                               WeaponIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.EquipSlot
struct ACharacterSelectionSwitcher_C_EquipSlot_Params
{
	int*                                               EquipSlot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.StartIdles
struct ACharacterSelectionSwitcher_C_StartIdles_Params
{
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SetIdleBreak
struct ACharacterSelectionSwitcher_C_SetIdleBreak_Params
{
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.Hide
struct ACharacterSelectionSwitcher_C_Hide_Params
{
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.Rotate
struct ACharacterSelectionSwitcher_C_Rotate_Params
{
	float*                                             Pitch;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.VanityLoop
struct ACharacterSelectionSwitcher_C_VanityLoop_Params
{
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.DoStuff
struct ACharacterSelectionSwitcher_C_DoStuff_Params
{
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.StartVanityIdles
struct ACharacterSelectionSwitcher_C_StartVanityIdles_Params
{
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnVanityItemEquipped
struct ACharacterSelectionSwitcher_C_OnVanityItemEquipped_Params
{
	EVanitySlot*                                       Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ShowViewer3D
struct ACharacterSelectionSwitcher_C_ShowViewer3D_Params
{
	class UClass**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECharselectionCameraLocation*                      selectionLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.Equip
struct ACharacterSelectionSwitcher_C_Equip_Params
{
	class UClass**                                     itemClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ReceiveTick
struct ACharacterSelectionSwitcher_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ShowEndScreen
struct ACharacterSelectionSwitcher_C_ShowEndScreen_Params
{
	struct FCharacterViewScene*                        viewScene;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ForgeLoop
struct ACharacterSelectionSwitcher_C_ForgeLoop_Params
{
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ForgeStart
struct ACharacterSelectionSwitcher_C_ForgeStart_Params
{
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.BreakEnd
struct ACharacterSelectionSwitcher_C_BreakEnd_Params
{
	class UAnimMontage**                               Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ForgeIdleLoop
struct ACharacterSelectionSwitcher_C_ForgeIdleLoop_Params
{
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnVictoryPoseChanged
struct ACharacterSelectionSwitcher_C_OnVictoryPoseChanged_Params
{
	class UVictoryPose**                               VictoryPose;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.PropPoseDone
struct ACharacterSelectionSwitcher_C_PropPoseDone_Params
{
	class UAnimMontage**                               Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.PoseDone
struct ACharacterSelectionSwitcher_C_PoseDone_Params
{
	class UAnimMontage**                               Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnCharacterRefresh
struct ACharacterSelectionSwitcher_C_OnCharacterRefresh_Params
{
};

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ExecuteUbergraph_CharacterSelectionSwitcher
struct ACharacterSelectionSwitcher_C_ExecuteUbergraph_CharacterSelectionSwitcher_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
