#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Salvage_FuelPod_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDroppodImpact
struct ABP_Salvage_FuelPod_C_OnDroppodImpact_Params
{
};

// Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDropStarted
struct ABP_Salvage_FuelPod_C_OnDropStarted_Params
{
};

// Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.ReceiveTick
struct ABP_Salvage_FuelPod_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
struct ABP_Salvage_FuelPod_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature
struct ABP_Salvage_FuelPod_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature_Params
{
	bool*                                              canUse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDefenseStart
struct ABP_Salvage_FuelPod_C_OnDefenseStart_Params
{
};

// Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDefenseComplete
struct ABP_Salvage_FuelPod_C_OnDefenseComplete_Params
{
};

// Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature
struct ABP_Salvage_FuelPod_C_BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.OnDefenseFailed
struct ABP_Salvage_FuelPod_C_OnDefenseFailed_Params
{
};

// Function BP_Salvage_FuelPod.BP_Salvage_FuelPod_C.ExecuteUbergraph_BP_Salvage_FuelPod
struct ABP_Salvage_FuelPod_C_ExecuteUbergraph_BP_Salvage_FuelPod_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
