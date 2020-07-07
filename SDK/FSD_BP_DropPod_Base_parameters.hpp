#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_DropPod_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_DropPod_Base.BP_DropPod_Base_C.AnyPlayersOnRamp
struct ABP_DropPod_Base_C_AnyPlayersOnRamp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.HandleRampPhotosensitivity
struct ABP_DropPod_Base_C_HandleRampPhotosensitivity_Params
{
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.SetPathBlockersEnabled
struct ABP_DropPod_Base_C_SetPathBlockersEnabled_Params
{
	bool*                                              enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.DestroyIfClose
struct ABP_DropPod_Base_C_DestroyIfClose_Params
{
	TArray<class AActor*>                              Actors;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float*                                             DistanceSQ;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.RemoveDangerousCaveItems
struct ABP_DropPod_Base_C_RemoveDangerousCaveItems_Params
{
	float*                                             distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.SetAllPlayersAnsel
struct ABP_DropPod_Base_C_SetAllPlayersAnsel_Params
{
	bool*                                              active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.GetDonkeyReturnPickupLocation
struct ABP_DropPod_Base_C_GetDonkeyReturnPickupLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.SetDoorState
struct ABP_DropPod_Base_C_SetDoorState_Params
{
	TEnumAsByte<EDroppodDoorState>*                    DoorState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.GetCountDown
struct ABP_DropPod_Base_C_GetCountDown_Params
{
	bool*                                              First;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_Widget_DropPod_AltitudeMeter_C*          AsBP_Count_Down_Actor;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.OnRep_MuleInstance
struct ABP_DropPod_Base_C_OnRep_MuleInstance_Params
{
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.OnMuleLoaded
struct ABP_DropPod_Base_C_OnMuleLoaded_Params
{
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.GetMule
struct ABP_DropPod_Base_C_GetMule_Params
{
	class ABP_Donkey_C*                                Donkey;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.SetStandingDown
struct ABP_DropPod_Base_C_SetStandingDown_Params
{
	bool*                                              IsStandingDown;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.CloseRamp
struct ABP_DropPod_Base_C_CloseRamp_Params
{
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.OpenRamp
struct ABP_DropPod_Base_C_OpenRamp_Params
{
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.OnAllPlayersLeftPod
struct ABP_DropPod_Base_C_OnAllPlayersLeftPod_Params
{
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.SetPreferredCharacter
struct ABP_DropPod_Base_C_SetPreferredCharacter_Params
{
	class UChildActorComponent**                       Spawn;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TSoftObjectPtr<class UClass>*                      Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.UserConstructionScript
struct ABP_DropPod_Base_C_UserConstructionScript_Params
{
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_1__FinishedFunc
struct ABP_DropPod_Base_C_Timeline_1__FinishedFunc_Params
{
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_1__UpdateFunc
struct ABP_DropPod_Base_C_Timeline_1__UpdateFunc_Params
{
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_2__FinishedFunc
struct ABP_DropPod_Base_C_Timeline_2__FinishedFunc_Params
{
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_2__UpdateFunc
struct ABP_DropPod_Base_C_Timeline_2__UpdateFunc_Params
{
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_3__FinishedFunc
struct ABP_DropPod_Base_C_Timeline_3__FinishedFunc_Params
{
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_3__UpdateFunc
struct ABP_DropPod_Base_C_Timeline_3__UpdateFunc_Params
{
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_4__FinishedFunc
struct ABP_DropPod_Base_C_Timeline_4__FinishedFunc_Params
{
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_4__UpdateFunc
struct ABP_DropPod_Base_C_Timeline_4__UpdateFunc_Params
{
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_0__FinishedFunc
struct ABP_DropPod_Base_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.Timeline_0__UpdateFunc
struct ABP_DropPod_Base_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.ReceiveBeginPlay
struct ABP_DropPod_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.ReceiveActorBeginOverlap
struct ABP_DropPod_Base_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.ReceiveActorEndOverlap
struct ABP_DropPod_Base_C_ReceiveActorEndOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.StartDeparture
struct ABP_DropPod_Base_C_StartDeparture_Params
{
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.OnDroppodImpact
struct ABP_DropPod_Base_C_OnDroppodImpact_Params
{
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.Start Donkey Unload Sequence
struct ABP_DropPod_Base_C_Start_Donkey_Unload_Sequence_Params
{
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.Unload Donkey
struct ABP_DropPod_Base_C_Unload_Donkey_Params
{
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.OnDrillingStarted
struct ABP_DropPod_Base_C_OnDrillingStarted_Params
{
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.Load Donkey
struct ABP_DropPod_Base_C_Load_Donkey_Params
{
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.Fade to Black
struct ABP_DropPod_Base_C_Fade_to_Black_Params
{
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_DropPod_Base_C_BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_DropPod_Base_C_BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__KillSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_DropPod_Base_C_BndEvt__KillSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.DrillRotate
struct ABP_DropPod_Base_C_DrillRotate_Params
{
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.OnCharacterEnter
struct ABP_DropPod_Base_C_OnCharacterEnter_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.OnCharacterExit
struct ABP_DropPod_Base_C_OnCharacterExit_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.SetMuleInstance
struct ABP_DropPod_Base_C_SetMuleInstance_Params
{
	class ADonkeyCharacter**                           Donkey;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.DropPodSetAnsel
struct ABP_DropPod_Base_C_DropPodSetAnsel_Params
{
	bool*                                              active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.AllSetAnsel
struct ABP_DropPod_Base_C_AllSetAnsel_Params
{
	bool*                                              active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__InSidePodArea_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_DropPod_Base_C_BndEvt__InSidePodArea_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.BndEvt__InSidePodArea_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature
struct ABP_DropPod_Base_C_BndEvt__InSidePodArea_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.MakeTruckerDicesMove
struct ABP_DropPod_Base_C_MakeTruckerDicesMove_Params
{
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.OnRep_RampState
struct ABP_DropPod_Base_C_OnRep_RampState_Params
{
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.OnGeneratedMissionChanged
struct ABP_DropPod_Base_C_OnGeneratedMissionChanged_Params
{
	class UGeneratedMission**                          OutGeneratedMission;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPod_Base.BP_DropPod_Base_C.ExecuteUbergraph_BP_DropPod_Base
struct ABP_DropPod_Base_C_ExecuteUbergraph_BP_DropPod_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
