// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Grenade_Pheromone_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Grenade_Pheromone.Grenade_Pheromone_C.AddGearStateEntries
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGrenade_Pheromone_C::AddGearStateEntries(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Pheromone.Grenade_Pheromone_C.AddGearStateEntries");

	AGrenade_Pheromone_C_AddGearStateEntries_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function Grenade_Pheromone.Grenade_Pheromone_C.OnExploded
// (Event, Protected, BlueprintEvent)

void AGrenade_Pheromone_C::OnExploded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Pheromone.Grenade_Pheromone_C.OnExploded");

	AGrenade_Pheromone_C_OnExploded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_Pheromone.Grenade_Pheromone_C.ApplyPheromones
// (BlueprintCallable, BlueprintEvent)

void AGrenade_Pheromone_C::ApplyPheromones()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Pheromone.Grenade_Pheromone_C.ApplyPheromones");

	AGrenade_Pheromone_C_ApplyPheromones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_Pheromone.Grenade_Pheromone_C.ExecuteUbergraph_Grenade_Pheromone
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrenade_Pheromone_C::ExecuteUbergraph_Grenade_Pheromone(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Pheromone.Grenade_Pheromone_C.ExecuteUbergraph_Grenade_Pheromone");

	AGrenade_Pheromone_C_ExecuteUbergraph_Grenade_Pheromone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
