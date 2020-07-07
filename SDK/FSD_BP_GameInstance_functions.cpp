// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_GameInstance_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GameInstance.BP_GameInstance_C.IsEligibleForRetirementAassignment
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           EligibleForRetirementAssignment (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GameInstance_C::IsEligibleForRetirementAassignment(bool* EligibleForRetirementAssignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.IsEligibleForRetirementAassignment");

	UBP_GameInstance_C_IsEligibleForRetirementAassignment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EligibleForRetirementAssignment != nullptr)
		*EligibleForRetirementAssignment = params.EligibleForRetirementAssignment;
}


// Function BP_GameInstance.BP_GameInstance_C.SetEligibleForRetirementAssignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsEligible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameInstance_C::SetEligibleForRetirementAssignment(bool* IsEligible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.SetEligibleForRetirementAssignment");

	UBP_GameInstance_C_SetEligibleForRetirementAssignment_Params params;
	params.IsEligible = IsEligible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameInstance.BP_GameInstance_C.OnFailure_D72617F2470A6492F0633884F8A94A97
// (BlueprintCallable, BlueprintEvent)

void UBP_GameInstance_C::OnFailure_D72617F2470A6492F0633884F8A94A97()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnFailure_D72617F2470A6492F0633884F8A94A97");

	UBP_GameInstance_C_OnFailure_D72617F2470A6492F0633884F8A94A97_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameInstance.BP_GameInstance_C.OnSuccess_D72617F2470A6492F0633884F8A94A97
// (BlueprintCallable, BlueprintEvent)

void UBP_GameInstance_C::OnSuccess_D72617F2470A6492F0633884F8A94A97()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnSuccess_D72617F2470A6492F0633884F8A94A97");

	UBP_GameInstance_C_OnSuccess_D72617F2470A6492F0633884F8A94A97_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameInstance.BP_GameInstance_C.OnFailure_E6A52403462766A65D96D581DEE58F2A
// (BlueprintCallable, BlueprintEvent)

void UBP_GameInstance_C::OnFailure_E6A52403462766A65D96D581DEE58F2A()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnFailure_E6A52403462766A65D96D581DEE58F2A");

	UBP_GameInstance_C_OnFailure_E6A52403462766A65D96D581DEE58F2A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameInstance.BP_GameInstance_C.OnSuccess_E6A52403462766A65D96D581DEE58F2A
// (BlueprintCallable, BlueprintEvent)

void UBP_GameInstance_C::OnSuccess_E6A52403462766A65D96D581DEE58F2A()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnSuccess_E6A52403462766A65D96D581DEE58F2A");

	UBP_GameInstance_C_OnSuccess_E6A52403462766A65D96D581DEE58F2A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameInstance.BP_GameInstance_C.ReceiveInit
// (Event, Public, BlueprintEvent)

void UBP_GameInstance_C::ReceiveInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.ReceiveInit");

	UBP_GameInstance_C_ReceiveInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameInstance.BP_GameInstance_C.JoinFriendInvite
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult* Session                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_GameInstance_C::JoinFriendInvite(struct FBlueprintSessionResult* Session)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.JoinFriendInvite");

	UBP_GameInstance_C_JoinFriendInvite_Params params;
	params.Session = Session;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameInstance.BP_GameInstance_C.OnLoadComplete
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString*                 MapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_GameInstance_C::OnLoadComplete(class FString* MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnLoadComplete");

	UBP_GameInstance_C_OnLoadComplete_Params params;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameInstance_C::ExecuteUbergraph_BP_GameInstance(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance");

	UBP_GameInstance_C_ExecuteUbergraph_BP_GameInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameInstance.BP_GameInstance_C.OnEligibleForRetirementAssignment__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_GameInstance_C**     GameInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameInstance_C::OnEligibleForRetirementAssignment__DelegateSignature(class UBP_GameInstance_C** GameInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnEligibleForRetirementAssignment__DelegateSignature");

	UBP_GameInstance_C_OnEligibleForRetirementAssignment__DelegateSignature_Params params;
	params.GameInstance = GameInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameInstance.BP_GameInstance_C.OnAvailableCraftingItems__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TScriptInterface<class UCraftable>> NewItems                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_GameInstance_C::OnAvailableCraftingItems__DelegateSignature(TArray<TScriptInterface<class UCraftable>>* NewItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnAvailableCraftingItems__DelegateSignature");

	UBP_GameInstance_C_OnAvailableCraftingItems__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewItems != nullptr)
		*NewItems = params.NewItems;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
