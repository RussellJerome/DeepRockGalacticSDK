#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_CabinOwnerSign_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.SetPlayerName
struct ABP_CabinOwnerSign_C_SetPlayerName_Params
{
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.UserConstructionScript
struct ABP_CabinOwnerSign_C_UserConstructionScript_Params
{
};

// Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.SetCabinOwner
struct ABP_CabinOwnerSign_C_SetCabinOwner_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.ChangeName
struct ABP_CabinOwnerSign_C_ChangeName_Params
{
	class FString*                                     NewName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.ReceiveBeginPlay
struct ABP_CabinOwnerSign_C_ReceiveBeginPlay_Params
{
};

// Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.ExecuteUbergraph_BP_CabinOwnerSign
struct ABP_CabinOwnerSign_C_ExecuteUbergraph_BP_CabinOwnerSign_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
