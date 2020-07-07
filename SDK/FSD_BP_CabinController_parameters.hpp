#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_CabinController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CabinController.BP_CabinController_C.OnRep_OwnerState
struct ABP_CabinController_C_OnRep_OwnerState_Params
{
};

// Function BP_CabinController.BP_CabinController_C.ReceiveBeginPlay
struct ABP_CabinController_C_ReceiveBeginPlay_Params
{
};

// Function BP_CabinController.BP_CabinController_C.RemoveOwner
struct ABP_CabinController_C_RemoveOwner_Params
{
};

// Function BP_CabinController.BP_CabinController_C.Set Cabin Owner
struct ABP_CabinController_C_Set_Cabin_Owner_Params
{
	class AFSDPlayerController**                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CabinController.BP_CabinController_C.Controller leave
struct ABP_CabinController_C_Controller_leave_Params
{
	class AActor**                                     DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CabinController.BP_CabinController_C.ExecuteUbergraph_BP_CabinController
struct ABP_CabinController_C_ExecuteUbergraph_BP_CabinController_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
