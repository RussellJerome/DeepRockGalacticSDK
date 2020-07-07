#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_IntoxicationComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ToPercentStr
struct UBP_IntoxicationComponent_C_ToPercentStr_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      PercentString;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.MyLerp
struct UBP_IntoxicationComponent_C_MyLerp_Params
{
	float*                                             Current_Value;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Target_Value;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Delta_Time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.SetPostProcessStrength
struct UBP_IntoxicationComponent_C_SetPostProcessStrength_Params
{
	float*                                             NewStrength;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.GetAlcoholPct
struct UBP_IntoxicationComponent_C_GetAlcoholPct_Params
{
	EDrinkableAlcoholStrength*                         Strength;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Lerp Movement Stength
struct UBP_IntoxicationComponent_C_Lerp_Movement_Stength_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Push Effects
struct UBP_IntoxicationComponent_C_Push_Effects_Params
{
};

// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Pop Effects
struct UBP_IntoxicationComponent_C_Pop_Effects_Params
{
	class FString*                                     DebugReason;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceiveDrunkTick
struct UBP_IntoxicationComponent_C_ReceiveDrunkTick_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrunkTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceivePassOutDrunk
struct UBP_IntoxicationComponent_C_ReceivePassOutDrunk_Params
{
};

// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.Lerp Post Process Strength
struct UBP_IntoxicationComponent_C_Lerp_Post_Process_Strength_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceiveDrunkEnd
struct UBP_IntoxicationComponent_C_ReceiveDrunkEnd_Params
{
};

// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ReceiveDrunkBegin
struct UBP_IntoxicationComponent_C_ReceiveDrunkBegin_Params
{
};

// Function BP_IntoxicationComponent.BP_IntoxicationComponent_C.ExecuteUbergraph_BP_IntoxicationComponent
struct UBP_IntoxicationComponent_C_ExecuteUbergraph_BP_IntoxicationComponent_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
