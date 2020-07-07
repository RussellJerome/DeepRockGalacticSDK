#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PlayerCharacter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GotoNextSelfiePoint
struct ABP_PlayerCharacter_C_GotoNextSelfiePoint_Params
{
	bool*                                              ForceExitSelfieMode;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetActiveSelfiePoint
struct ABP_PlayerCharacter_C_SetActiveSelfiePoint_Params
{
	class UBP_SelfiePoint_C**                          InSelfiePoint;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DamageCausesReaction
struct ABP_PlayerCharacter_C_DamageCausesReaction_Params
{
	class UDamageClass**                               DamageClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDownCameraAttachPoint
struct ABP_PlayerCharacter_C_GetDownCameraAttachPoint_Params
{
	class USceneComponent*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDownCameraRotationPoint
struct ABP_PlayerCharacter_C_GetDownCameraRotationPoint_Params
{
	class USceneComponent*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChromaEffect
struct ABP_PlayerCharacter_C_ChromaEffect_Params
{
	EFSDChromaEffect*                                  effect;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CharacterAudioThrottled
struct ABP_PlayerCharacter_C_CharacterAudioThrottled_Params
{
	class USoundBase**                                 Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDialogDataAsset**                           Shout;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateHeadLight
struct ABP_PlayerCharacter_C_UpdateHeadLight_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShieldRegenTimeline__FinishedFunc
struct ABP_PlayerCharacter_C_ShieldRegenTimeline__FinishedFunc_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShieldRegenTimeline__UpdateFunc
struct ABP_PlayerCharacter_C_ShieldRegenTimeline__UpdateFunc_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Emergency Timeline__FinishedFunc
struct ABP_PlayerCharacter_C_Emergency_Timeline__FinishedFunc_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Emergency Timeline__UpdateFunc
struct ABP_PlayerCharacter_C_Emergency_Timeline__UpdateFunc_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_P_K2Node_InputKeyEvent_17
struct ABP_PlayerCharacter_C_InpActEvt_P_K2Node_InputKeyEvent_17_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_16
struct ABP_PlayerCharacter_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_16_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftShift_K2Node_InputKeyEvent_15
struct ABP_PlayerCharacter_C_InpActEvt_LeftShift_K2Node_InputKeyEvent_15_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_14
struct ABP_PlayerCharacter_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_14_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftControl_K2Node_InputKeyEvent_13
struct ABP_PlayerCharacter_C_InpActEvt_LeftControl_K2Node_InputKeyEvent_13_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageDown_K2Node_InputKeyEvent_12
struct ABP_PlayerCharacter_C_InpActEvt_PageDown_K2Node_InputKeyEvent_12_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageDown_K2Node_InputKeyEvent_11
struct ABP_PlayerCharacter_C_InpActEvt_PageDown_K2Node_InputKeyEvent_11_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageUp_K2Node_InputKeyEvent_10
struct ABP_PlayerCharacter_C_InpActEvt_PageUp_K2Node_InputKeyEvent_10_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageUp_K2Node_InputKeyEvent_9
struct ABP_PlayerCharacter_C_InpActEvt_PageUp_K2Node_InputKeyEvent_9_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Home_K2Node_InputKeyEvent_8
struct ABP_PlayerCharacter_C_InpActEvt_Home_K2Node_InputKeyEvent_8_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Home_K2Node_InputKeyEvent_7
struct ABP_PlayerCharacter_C_InpActEvt_Home_K2Node_InputKeyEvent_7_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_End_K2Node_InputKeyEvent_6
struct ABP_PlayerCharacter_C_InpActEvt_End_K2Node_InputKeyEvent_6_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_End_K2Node_InputKeyEvent_5
struct ABP_PlayerCharacter_C_InpActEvt_End_K2Node_InputKeyEvent_5_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Insert_K2Node_InputKeyEvent_4
struct ABP_PlayerCharacter_C_InpActEvt_Insert_K2Node_InputKeyEvent_4_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Insert_K2Node_InputKeyEvent_3
struct ABP_PlayerCharacter_C_InpActEvt_Insert_K2Node_InputKeyEvent_3_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Delete_K2Node_InputKeyEvent_2
struct ABP_PlayerCharacter_C_InpActEvt_Delete_K2Node_InputKeyEvent_2_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Delete_K2Node_InputKeyEvent_1
struct ABP_PlayerCharacter_C_InpActEvt_Delete_K2Node_InputKeyEvent_1_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BP_OnControllerReady
struct ABP_PlayerCharacter_C_BP_OnControllerReady_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveBeginPlay
struct ABP_PlayerCharacter_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_ArmorHealedSig__DelegateSignature
struct ABP_PlayerCharacter_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_ArmorHealedSig__DelegateSignature_Params
{
	float*                                             amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopRegenAudio
struct ABP_PlayerCharacter_C_StopRegenAudio_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BP_OnUpdateMeshes
struct ABP_PlayerCharacter_C_BP_OnUpdateMeshes_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CharacterState Changed
struct ABP_PlayerCharacter_C_CharacterState_Changed_Params
{
	ECharacterState*                                   NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature
struct ABP_PlayerCharacter_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature_Params
{
	float*                                             amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature
struct ABP_PlayerCharacter_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature_Params
{
	float*                                             amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Init Selfie Cam
struct ABP_PlayerCharacter_C_Init_Selfie_Cam_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetDustVisible
struct ABP_PlayerCharacter_C_SetDustVisible_Params
{
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveOnHeadlightOn
struct ABP_PlayerCharacter_C_ReceiveOnHeadlightOn_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetSaveGameIDInEditor
struct ABP_PlayerCharacter_C_ResetSaveGameIDInEditor_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.On Temporary Buff Changed
struct ABP_PlayerCharacter_C_On_Temporary_Buff_Changed_Params
{
	class UTemporaryBuff**                             buff;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerCharacter**                           AffectedPlayer;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Request change in gravity scale
struct ABP_PlayerCharacter_C_Request_change_in_gravity_scale_Params
{
	float*                                             New_Gravity_Scale;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.MixerClientSpawnConfettii
struct ABP_PlayerCharacter_C_MixerClientSpawnConfettii_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.MixerServerSpawnConfettii
struct ABP_PlayerCharacter_C_MixerServerSpawnConfettii_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.MixerSpawnConfetti
struct ABP_PlayerCharacter_C_MixerSpawnConfetti_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PrepareForEndScreen
struct ABP_PlayerCharacter_C_PrepareForEndScreen_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature
struct ABP_PlayerCharacter_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageClass**                               DamageClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              anyHealthLost;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature
struct ABP_PlayerCharacter_C_BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageClass**                               DamageClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              anyHealthLost;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Activate Temporary buff on server
struct ABP_PlayerCharacter_C_Activate_Temporary_buff_on_server_Params
{
	class UTemporaryBuff**                             buff;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerCharacter**                           Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Receive_ShowFieldMedicInstantReviveEffects
struct ABP_PlayerCharacter_C_Receive_ShowFieldMedicInstantReviveEffects_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1
struct ABP_PlayerCharacter_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1_Params
{
	float*                                             AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2
struct ABP_PlayerCharacter_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2_Params
{
	float*                                             AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelfieZoom
struct ABP_PlayerCharacter_C_SelfieZoom_Params
{
	float*                                             InDelta;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TickSelfieZoom
struct ABP_PlayerCharacter_C_TickSelfieZoom_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelfieMoveUp
struct ABP_PlayerCharacter_C_SelfieMoveUp_Params
{
	float*                                             InDirection;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TickSelfieMoveUp
struct ABP_PlayerCharacter_C_TickSelfieMoveUp_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelfieMoveRight
struct ABP_PlayerCharacter_C_SelfieMoveRight_Params
{
	float*                                             InDirection;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TickSelfieMoveRight
struct ABP_PlayerCharacter_C_TickSelfieMoveRight_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteUbergraph_BP_PlayerCharacter
struct ABP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
