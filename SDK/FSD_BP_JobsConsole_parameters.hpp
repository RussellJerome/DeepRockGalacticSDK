#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_JobsConsole_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_JobsConsole.BP_JobsConsole_C.IsNewPlayer
struct ABP_JobsConsole_C_IsNewPlayer_Params
{
	class ABP_PlayerController_SpaceRig_C**            PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNewPlayer;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JobsConsole.BP_JobsConsole_C.ReceiveBeginPlay
struct ABP_JobsConsole_C_ReceiveBeginPlay_Params
{
};

// Function BP_JobsConsole.BP_JobsConsole_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
struct ABP_JobsConsole_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JobsConsole.BP_JobsConsole_C.ExecuteUbergraph_BP_JobsConsole
struct ABP_JobsConsole_C_ExecuteUbergraph_BP_JobsConsole_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
