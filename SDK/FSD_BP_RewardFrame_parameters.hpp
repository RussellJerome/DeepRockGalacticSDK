#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_RewardFrame_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_RewardFrame.BP_RewardFrame_C.AddEventProgress
struct ABP_RewardFrame_C_AddEventProgress_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_RewardFrame.BP_RewardFrame_C.AdvanceOneObjective
struct ABP_RewardFrame_C_AdvanceOneObjective_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_RewardFrame.BP_RewardFrame_C.SetupEvent
struct ABP_RewardFrame_C_SetupEvent_Params
{
	class AGameEvent**                                 GameEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_RewardFrame.BP_RewardFrame_C.GetLocalPlayerDispenser
struct ABP_RewardFrame_C_GetLocalPlayerDispenser_Params
{
	class AEventRewardDispenser*                       OutDispenser;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardFrame.BP_RewardFrame_C.AllDispensersFinished
struct ABP_RewardFrame_C_AllDispensersFinished_Params
{
	bool                                               IsFinished;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardFrame.BP_RewardFrame_C.SetupDispenser
struct ABP_RewardFrame_C_SetupDispenser_Params
{
	class AEventRewardDispenser**                      Dispenser;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardFrame.BP_RewardFrame_C.GetRandomPlayer
struct ABP_RewardFrame_C_GetRandomPlayer_Params
{
	class APlayerCharacter*                            Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardFrame.BP_RewardFrame_C.UpdateLights
struct ABP_RewardFrame_C_UpdateLights_Params
{
};

// Function BP_RewardFrame.BP_RewardFrame_C.AlignDispensers
struct ABP_RewardFrame_C_AlignDispensers_Params
{
};

// Function BP_RewardFrame.BP_RewardFrame_C.StartEventUI
struct ABP_RewardFrame_C_StartEventUI_Params
{
};

// Function BP_RewardFrame.BP_RewardFrame_C.UserConstructionScript
struct ABP_RewardFrame_C_UserConstructionScript_Params
{
};

// Function BP_RewardFrame.BP_RewardFrame_C.AttentionLightTimeLine__FinishedFunc
struct ABP_RewardFrame_C_AttentionLightTimeLine__FinishedFunc_Params
{
};

// Function BP_RewardFrame.BP_RewardFrame_C.AttentionLightTimeLine__UpdateFunc
struct ABP_RewardFrame_C_AttentionLightTimeLine__UpdateFunc_Params
{
};

// Function BP_RewardFrame.BP_RewardFrame_C.OnEventOpened
struct ABP_RewardFrame_C_OnEventOpened_Params
{
};

// Function BP_RewardFrame.BP_RewardFrame_C.OnEventProgress
struct ABP_RewardFrame_C_OnEventProgress_Params
{
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardFrame.BP_RewardFrame_C.ReceiveBeginPlay
struct ABP_RewardFrame_C_ReceiveBeginPlay_Params
{
};

// Function BP_RewardFrame.BP_RewardFrame_C.BndEvt__EventUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
struct ABP_RewardFrame_C_BndEvt__EventUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardFrame.BP_RewardFrame_C.OnEventFinished
struct ABP_RewardFrame_C_OnEventFinished_Params
{
	bool*                                              eventSuccess;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardFrame.BP_RewardFrame_C.OnEventTriggered
struct ABP_RewardFrame_C_OnEventTriggered_Params
{
};

// Function BP_RewardFrame.BP_RewardFrame_C.BndEvt__EventUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature
struct ABP_RewardFrame_C_BndEvt__EventUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature_Params
{
	bool*                                              canUse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardFrame.BP_RewardFrame_C.Toggle Attention Light
struct ABP_RewardFrame_C_Toggle_Attention_Light_Params
{
	bool*                                              inVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RewardFrame.BP_RewardFrame_C.Recall Key
struct ABP_RewardFrame_C_Recall_Key_Params
{
};

// Function BP_RewardFrame.BP_RewardFrame_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_RewardFrame_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_RewardFrame.BP_RewardFrame_C.EnableGravity
struct ABP_RewardFrame_C_EnableGravity_Params
{
};

// Function BP_RewardFrame.BP_RewardFrame_C.ExecuteUbergraph_BP_RewardFrame
struct ABP_RewardFrame_C_ExecuteUbergraph_BP_RewardFrame_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
