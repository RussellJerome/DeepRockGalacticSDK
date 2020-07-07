#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_DropPod_Escape_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.GetFrontLocation
struct ABP_DropPod_Escape_Base_C_GetFrontLocation_Params
{
	struct FVector                                     DoorLocation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.IsAnyCharacterInEscapePod
struct ABP_DropPod_Escape_Base_C_IsAnyCharacterInEscapePod_Params
{
	bool                                               EscapePodPopulated;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.LockCharactersInPod
struct ABP_DropPod_Escape_Base_C_LockCharactersInPod_Params
{
};

// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.UserConstructionScript
struct ABP_DropPod_Escape_Base_C_UserConstructionScript_Params
{
};

// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnDroppodImpact
struct ABP_DropPod_Escape_Base_C_OnDroppodImpact_Params
{
};

// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnAllDwavesInsidePod
struct ABP_DropPod_Escape_Base_C_OnAllDwavesInsidePod_Params
{
	bool*                                              AllInside;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_DropPod_Escape_Base_C_BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_DropPod_Escape_Base_C_BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnDrillingStarted
struct ABP_DropPod_Escape_Base_C_OnDrillingStarted_Params
{
};

// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.ReceiveBeginPlay
struct ABP_DropPod_Escape_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnDonkeyReachedDropShip
struct ABP_DropPod_Escape_Base_C_OnDonkeyReachedDropShip_Params
{
};

// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnDeparting
struct ABP_DropPod_Escape_Base_C_OnDeparting_Params
{
};

// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.RecieveReturnTimerExpired
struct ABP_DropPod_Escape_Base_C_RecieveReturnTimerExpired_Params
{
};

// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnPrepForTakeOff
struct ABP_DropPod_Escape_Base_C_OnPrepForTakeOff_Params
{
};

// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnMuleLoaded
struct ABP_DropPod_Escape_Base_C_OnMuleLoaded_Params
{
};

// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnCharacterEnter
struct ABP_DropPod_Escape_Base_C_OnCharacterEnter_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.OnCharacterExit
struct ABP_DropPod_Escape_Base_C_OnCharacterExit_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.HandleHurryShouts
struct ABP_DropPod_Escape_Base_C_HandleHurryShouts_Params
{
};

// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature
struct ABP_DropPod_Escape_Base_C_BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature_Params
{
};

// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature
struct ABP_DropPod_Escape_Base_C_BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature_Params
{
};

// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.RecieveReturnTimerFifteenSecondWarning
struct ABP_DropPod_Escape_Base_C_RecieveReturnTimerFifteenSecondWarning_Params
{
};

// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.ForceTakeoff
struct ABP_DropPod_Escape_Base_C_ForceTakeoff_Params
{
};

// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature
struct ABP_DropPod_Escape_Base_C_BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature_Params
{
	bool*                                              IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DropPod_Escape_Base.BP_DropPod_Escape_Base_C.ExecuteUbergraph_BP_DropPod_Escape_Base
struct ABP_DropPod_Escape_Base_C_ExecuteUbergraph_BP_DropPod_Escape_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
