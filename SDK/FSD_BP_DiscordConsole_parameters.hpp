#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_DiscordConsole_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_DiscordConsole.BP_DiscordConsole_C.ValidGetPlayer
struct ABP_DiscordConsole_C_ValidGetPlayer_Params
{
	class ABP_PlayerController_SpaceRig_C*             Player;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DiscordConsole.BP_DiscordConsole_C.SetUsable
struct ABP_DiscordConsole_C_SetUsable_Params
{
	bool*                                              Usable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DiscordConsole.BP_DiscordConsole_C.Answer
struct ABP_DiscordConsole_C_Answer_Params
{
	bool*                                              Yes;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DiscordConsole.BP_DiscordConsole_C.ReceiveBeginPlay
struct ABP_DiscordConsole_C_ReceiveBeginPlay_Params
{
};

// Function BP_DiscordConsole.BP_DiscordConsole_C.ReceiveTick
struct ABP_DiscordConsole_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DiscordConsole.BP_DiscordConsole_C.UserIn
struct ABP_DiscordConsole_C_UserIn_Params
{
	bool*                                              isInServer;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DiscordConsole.BP_DiscordConsole_C.BndEvt__ProxmityTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_DiscordConsole_C_BndEvt__ProxmityTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_DiscordConsole.BP_DiscordConsole_C.BndEvt__ProxmityTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
struct ABP_DiscordConsole_C_BndEvt__ProxmityTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DiscordConsole.BP_DiscordConsole_C.RefreshUsable
struct ABP_DiscordConsole_C_RefreshUsable_Params
{
};

// Function BP_DiscordConsole.BP_DiscordConsole_C.OnUsedClient
struct ABP_DiscordConsole_C_OnUsedClient_Params
{
	class ABP_PlayerControllerBase_C**                 user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DiscordConsole.BP_DiscordConsole_C.callRefreshUsable
struct ABP_DiscordConsole_C_callRefreshUsable_Params
{
};

// Function BP_DiscordConsole.BP_DiscordConsole_C.BndEvt__BP_DiscordInstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature
struct ABP_DiscordConsole_C_BndEvt__BP_DiscordInstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DiscordConsole.BP_DiscordConsole_C.ExecuteUbergraph_BP_DiscordConsole
struct ABP_DiscordConsole_C_ExecuteUbergraph_BP_DiscordConsole_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
