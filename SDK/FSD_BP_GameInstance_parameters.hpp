#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_GameInstance_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_GameInstance.BP_GameInstance_C.IsEligibleForRetirementAassignment
struct UBP_GameInstance_C_IsEligibleForRetirementAassignment_Params
{
	bool                                               EligibleForRetirementAssignment;                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameInstance.BP_GameInstance_C.SetEligibleForRetirementAssignment
struct UBP_GameInstance_C_SetEligibleForRetirementAssignment_Params
{
	bool*                                              IsEligible;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameInstance.BP_GameInstance_C.OnFailure_D72617F2470A6492F0633884F8A94A97
struct UBP_GameInstance_C_OnFailure_D72617F2470A6492F0633884F8A94A97_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.OnSuccess_D72617F2470A6492F0633884F8A94A97
struct UBP_GameInstance_C_OnSuccess_D72617F2470A6492F0633884F8A94A97_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.OnFailure_E6A52403462766A65D96D581DEE58F2A
struct UBP_GameInstance_C_OnFailure_E6A52403462766A65D96D581DEE58F2A_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.OnSuccess_E6A52403462766A65D96D581DEE58F2A
struct UBP_GameInstance_C_OnSuccess_E6A52403462766A65D96D581DEE58F2A_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.ReceiveInit
struct UBP_GameInstance_C_ReceiveInit_Params
{
};

// Function BP_GameInstance.BP_GameInstance_C.JoinFriendInvite
struct UBP_GameInstance_C_JoinFriendInvite_Params
{
	struct FBlueprintSessionResult*                    Session;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_GameInstance.BP_GameInstance_C.OnLoadComplete
struct UBP_GameInstance_C_OnLoadComplete_Params
{
	class FString*                                     MapName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance
struct UBP_GameInstance_C_ExecuteUbergraph_BP_GameInstance_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameInstance.BP_GameInstance_C.OnEligibleForRetirementAssignment__DelegateSignature
struct UBP_GameInstance_C_OnEligibleForRetirementAssignment__DelegateSignature_Params
{
	class UBP_GameInstance_C**                         GameInstance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameInstance.BP_GameInstance_C.OnAvailableCraftingItems__DelegateSignature
struct UBP_GameInstance_C_OnAvailableCraftingItems__DelegateSignature_Params
{
	TArray<TScriptInterface<class UCraftable>>         NewItems;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
