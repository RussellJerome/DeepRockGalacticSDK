#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_LureTarget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_LureTarget.BP_LureTarget_C.GetIsTargetable
struct ABP_LureTarget_C_GetIsTargetable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LureTarget.BP_LureTarget_C.GetTargetCenterMass
struct ABP_LureTarget_C_GetTargetCenterMass_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LureTarget.BP_LureTarget_C.GetTargetHealthComponent
struct ABP_LureTarget_C_GetTargetHealthComponent_Params
{
	class UHealthComponentBase*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_LureTarget.BP_LureTarget_C.ShowDamageEffects
struct ABP_LureTarget_C_ShowDamageEffects_Params
{
	class UParticleSystem**                            particles;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   Orientation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LureTarget.BP_LureTarget_C.UserConstructionScript
struct ABP_LureTarget_C_UserConstructionScript_Params
{
};

// Function BP_LureTarget.BP_LureTarget_C.GrowHologramZ__FinishedFunc
struct ABP_LureTarget_C_GrowHologramZ__FinishedFunc_Params
{
};

// Function BP_LureTarget.BP_LureTarget_C.GrowHologramZ__UpdateFunc
struct ABP_LureTarget_C_GrowHologramZ__UpdateFunc_Params
{
};

// Function BP_LureTarget.BP_LureTarget_C.Disappear__FinishedFunc
struct ABP_LureTarget_C_Disappear__FinishedFunc_Params
{
};

// Function BP_LureTarget.BP_LureTarget_C.Disappear__UpdateFunc
struct ABP_LureTarget_C_Disappear__UpdateFunc_Params
{
};

// Function BP_LureTarget.BP_LureTarget_C.Glitch__FinishedFunc
struct ABP_LureTarget_C_Glitch__FinishedFunc_Params
{
};

// Function BP_LureTarget.BP_LureTarget_C.Glitch__UpdateFunc
struct ABP_LureTarget_C_Glitch__UpdateFunc_Params
{
};

// Function BP_LureTarget.BP_LureTarget_C.Glitch2__FinishedFunc
struct ABP_LureTarget_C_Glitch2__FinishedFunc_Params
{
};

// Function BP_LureTarget.BP_LureTarget_C.Glitch2__UpdateFunc
struct ABP_LureTarget_C_Glitch2__UpdateFunc_Params
{
};

// Function BP_LureTarget.BP_LureTarget_C.GlitchAnimationRate__FinishedFunc
struct ABP_LureTarget_C_GlitchAnimationRate__FinishedFunc_Params
{
};

// Function BP_LureTarget.BP_LureTarget_C.GlitchAnimationRate__UpdateFunc
struct ABP_LureTarget_C_GlitchAnimationRate__UpdateFunc_Params
{
};

// Function BP_LureTarget.BP_LureTarget_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HealthChangedSig__DelegateSignature
struct ABP_LureTarget_C_BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HealthChangedSig__DelegateSignature_Params
{
	float*                                             Health;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LureTarget.BP_LureTarget_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
struct ABP_LureTarget_C_BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature_Params
{
	class UHealthComponentBase**                       HealthComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_LureTarget.BP_LureTarget_C.ReceiveBeginPlay
struct ABP_LureTarget_C_ReceiveBeginPlay_Params
{
};

// Function BP_LureTarget.BP_LureTarget_C.ExecuteUbergraph_BP_LureTarget
struct ABP_LureTarget_C_ExecuteUbergraph_BP_LureTarget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
