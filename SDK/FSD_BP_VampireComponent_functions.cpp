// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_VampireComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_VampireComponent.BP_VampireComponent_C.OnEnemyKilled
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer*  enemyTags                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AActor**                 enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageClass**           DamageClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VampireComponent_C::OnEnemyKilled(struct FGameplayTagContainer* enemyTags, class AActor** enemy, class UDamageClass** DamageClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VampireComponent.BP_VampireComponent_C.OnEnemyKilled");

	UBP_VampireComponent_C_OnEnemyKilled_Params params;
	params.enemyTags = enemyTags;
	params.enemy = enemy;
	params.DamageClass = DamageClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VampireComponent.BP_VampireComponent_C.Receive_OnInitialized
// (Event, Protected, BlueprintEvent)

void UBP_VampireComponent_C::Receive_OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VampireComponent.BP_VampireComponent_C.Receive_OnInitialized");

	UBP_VampireComponent_C_Receive_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VampireComponent.BP_VampireComponent_C.Client_VampireTriggered
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void UBP_VampireComponent_C::Client_VampireTriggered()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VampireComponent.BP_VampireComponent_C.Client_VampireTriggered");

	UBP_VampireComponent_C_Client_VampireTriggered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VampireComponent.BP_VampireComponent_C.ExecuteUbergraph_BP_VampireComponent
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_VampireComponent_C::ExecuteUbergraph_BP_VampireComponent(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VampireComponent.BP_VampireComponent_C.ExecuteUbergraph_BP_VampireComponent");

	UBP_VampireComponent_C_ExecuteUbergraph_BP_VampireComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
