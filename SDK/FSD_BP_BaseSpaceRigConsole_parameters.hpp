#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_BaseSpaceRigConsole_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.ShowNotification
struct ABP_BaseSpaceRigConsole_C_ShowNotification_Params
{
	bool*                                              IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.SetCreateMenuOnStartUp
struct ABP_BaseSpaceRigConsole_C_SetCreateMenuOnStartUp_Params
{
	bool*                                              InCreateOnStartUp;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.IsNewPlayer
struct ABP_BaseSpaceRigConsole_C_IsNewPlayer_Params
{
	class ABP_PlayerController_SpaceRig_C**            PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNewPlayer;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.UserConstructionScript
struct ABP_BaseSpaceRigConsole_C_UserConstructionScript_Params
{
};

// Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.ReceiveBeginPlay
struct ABP_BaseSpaceRigConsole_C_ReceiveBeginPlay_Params
{
};

// Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
struct ABP_BaseSpaceRigConsole_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.OnOpenConsole
struct ABP_BaseSpaceRigConsole_C_OnOpenConsole_Params
{
	class ABP_PlayerController_SpaceRig_C**            InPlayerController;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.OnWindowCreated
struct ABP_BaseSpaceRigConsole_C_OnWindowCreated_Params
{
	class UWindowWidget**                              WindowWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C.ExecuteUbergraph_BP_BaseSpaceRigConsole
struct ABP_BaseSpaceRigConsole_C_ExecuteUbergraph_BP_BaseSpaceRigConsole_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
