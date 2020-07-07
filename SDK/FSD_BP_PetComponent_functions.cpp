// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PetComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PetComponent.BP_PetComponent_C.SetGameplayTags
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFSDPawn**               self2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PetComponent_C::SetGameplayTags(class AFSDPawn** self2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PetComponent.BP_PetComponent_C.SetGameplayTags");

	UBP_PetComponent_C_SetGameplayTags_Params params;
	params.self2 = self2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PetComponent.BP_PetComponent_C.ActivateMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent** Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_PetComponent_C::ActivateMaterial(class USkeletalMeshComponent** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PetComponent.BP_PetComponent_C.ActivateMaterial");

	UBP_PetComponent_C_ActivateMaterial_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PetComponent.BP_PetComponent_C.OnLoaded_2EDD9CD4487CCB079DB91DB3612F9E9C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PetComponent_C::OnLoaded_2EDD9CD4487CCB079DB91DB3612F9E9C(class UClass** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PetComponent.BP_PetComponent_C.OnLoaded_2EDD9CD4487CCB079DB91DB3612F9E9C");

	UBP_PetComponent_C_OnLoaded_2EDD9CD4487CCB079DB91DB3612F9E9C_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PetComponent.BP_PetComponent_C.OnDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHealthComponentBase**   HealthComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_PetComponent_C::OnDeath(class UHealthComponentBase** HealthComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PetComponent.BP_PetComponent_C.OnDeath");

	UBP_PetComponent_C_OnDeath_Params params;
	params.HealthComponent = HealthComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PetComponent.BP_PetComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_PetComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PetComponent.BP_PetComponent_C.ReceiveBeginPlay");

	UBP_PetComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PetComponent.BP_PetComponent_C.OnAttackDamageDealt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         FloatValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PetComponent_C::OnAttackDamageDealt(float* FloatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PetComponent.BP_PetComponent_C.OnAttackDamageDealt");

	UBP_PetComponent_C_OnAttackDamageDealt_Params params;
	params.FloatValue = FloatValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PetComponent.BP_PetComponent_C.OnDeath_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHealthComponentBase**   HealthComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_PetComponent_C::OnDeath_Event_1(class UHealthComponentBase** HealthComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PetComponent.BP_PetComponent_C.OnDeath_Event_1");

	UBP_PetComponent_C_OnDeath_Event_1_Params params;
	params.HealthComponent = HealthComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PetComponent.BP_PetComponent_C.ExecuteUbergraph_BP_PetComponent
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PetComponent_C::ExecuteUbergraph_BP_PetComponent(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PetComponent.BP_PetComponent_C.ExecuteUbergraph_BP_PetComponent");

	UBP_PetComponent_C_ExecuteUbergraph_BP_PetComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
