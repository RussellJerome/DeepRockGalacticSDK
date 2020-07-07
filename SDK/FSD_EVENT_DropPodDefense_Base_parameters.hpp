#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_EVENT_DropPodDefense_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.OnRep_DefendingPlayerCount
struct AEVENT_DropPodDefense_Base_C_OnRep_DefendingPlayerCount_Params
{
};

// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.UpdateDefenderCount
struct AEVENT_DropPodDefense_Base_C_UpdateDefenderCount_Params
{
};

// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.GetDefenderBonus
struct AEVENT_DropPodDefense_Base_C_GetDefenderBonus_Params
{
	int*                                               DefendingPlayers;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.AnyPlayersDefending
struct AEVENT_DropPodDefense_Base_C_AnyPlayersDefending_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.OnRep_Progress
struct AEVENT_DropPodDefense_Base_C_OnRep_Progress_Params
{
};

// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.UserConstructionScript
struct AEVENT_DropPodDefense_Base_C_UserConstructionScript_Params
{
};

// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ReceiveBeginPlay
struct AEVENT_DropPodDefense_Base_C_ReceiveBeginPlay_Params
{
};

// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ReceiveTick
struct AEVENT_DropPodDefense_Base_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AEVENT_DropPodDefense_Base_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct AEVENT_DropPodDefense_Base_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.EventSucceded
struct AEVENT_DropPodDefense_Base_C_EventSucceded_Params
{
};

// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.EventFailed
struct AEVENT_DropPodDefense_Base_C_EventFailed_Params
{
};

// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ExecuteUbergraph_EVENT_DropPodDefense_Base
struct AEVENT_DropPodDefense_Base_C_ExecuteUbergraph_EVENT_DropPodDefense_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.DefenderCountUpdated__DelegateSignature
struct AEVENT_DropPodDefense_Base_C_DefenderCountUpdated__DelegateSignature_Params
{
	int*                                               DefenderCount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.ProgressUpdated__DelegateSignature
struct AEVENT_DropPodDefense_Base_C_ProgressUpdated__DelegateSignature_Params
{
	float*                                             NewProgress;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.DefendFailed__DelegateSignature
struct AEVENT_DropPodDefense_Base_C_DefendFailed__DelegateSignature_Params
{
};

// Function EVENT_DropPodDefense_Base.EVENT_DropPodDefense_Base_C.DefendSucceded__DelegateSignature
struct AEVENT_DropPodDefense_Base_C_DefendSucceded__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
