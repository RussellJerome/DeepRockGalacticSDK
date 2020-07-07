#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Bulkhead01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Bulkhead01.BP_Bulkhead01_C.HasPlayersNearby
struct ABP_Bulkhead01_C_HasPlayersNearby_Params
{
	bool                                               AnyPlayers;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Bulkhead01.BP_Bulkhead01_C.OnRep_IsOpen
struct ABP_Bulkhead01_C_OnRep_IsOpen_Params
{
};

// Function BP_Bulkhead01.BP_Bulkhead01_C.Driver__FinishedFunc
struct ABP_Bulkhead01_C_Driver__FinishedFunc_Params
{
};

// Function BP_Bulkhead01.BP_Bulkhead01_C.Driver__UpdateFunc
struct ABP_Bulkhead01_C_Driver__UpdateFunc_Params
{
};

// Function BP_Bulkhead01.BP_Bulkhead01_C.TL_Open__FinishedFunc
struct ABP_Bulkhead01_C_TL_Open__FinishedFunc_Params
{
};

// Function BP_Bulkhead01.BP_Bulkhead01_C.TL_Open__UpdateFunc
struct ABP_Bulkhead01_C_TL_Open__UpdateFunc_Params
{
};

// Function BP_Bulkhead01.BP_Bulkhead01_C.Open
struct ABP_Bulkhead01_C_Open_Params
{
};

// Function BP_Bulkhead01.BP_Bulkhead01_C.BndEvt__TriggerBox_K2Node_ComponentBoundEvent_233_ComponentEndOverlapSignature__DelegateSignature
struct ABP_Bulkhead01_C_BndEvt__TriggerBox_K2Node_ComponentBoundEvent_233_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Bulkhead01.BP_Bulkhead01_C.BndEvt__TriggerBox_K2Node_ComponentBoundEvent_222_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Bulkhead01_C_BndEvt__TriggerBox_K2Node_ComponentBoundEvent_222_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Bulkhead01.BP_Bulkhead01_C.Close
struct ABP_Bulkhead01_C_Close_Params
{
};

// Function BP_Bulkhead01.BP_Bulkhead01_C.ReceiveTick
struct ABP_Bulkhead01_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Bulkhead01.BP_Bulkhead01_C.ExecuteUbergraph_BP_Bulkhead01
struct ABP_Bulkhead01_C_ExecuteUbergraph_BP_Bulkhead01_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
