#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_CraftingConsole_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CraftingConsole.BP_CraftingConsole_C.IsNewPlayer
struct ABP_CraftingConsole_C_IsNewPlayer_Params
{
	class ABP_PlayerController_SpaceRig_C**            PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNewPlayer;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CraftingConsole.BP_CraftingConsole_C.Timeline_0__FinishedFunc
struct ABP_CraftingConsole_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_CraftingConsole.BP_CraftingConsole_C.Timeline_0__UpdateFunc
struct ABP_CraftingConsole_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_CraftingConsole.BP_CraftingConsole_C.ReceiveBeginPlay
struct ABP_CraftingConsole_C_ReceiveBeginPlay_Params
{
};

// Function BP_CraftingConsole.BP_CraftingConsole_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
struct ABP_CraftingConsole_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CraftingConsole.BP_CraftingConsole_C.ExecuteUbergraph_BP_CraftingConsole
struct ABP_CraftingConsole_C_ExecuteUbergraph_BP_CraftingConsole_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
