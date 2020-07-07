// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Grenade_Cluster_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Grenade_Cluster.Grenade_Cluster_C.AddGearStateEntries
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGrenade_Cluster_C::AddGearStateEntries(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Cluster.Grenade_Cluster_C.AddGearStateEntries");

	AGrenade_Cluster_C_AddGearStateEntries_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function Grenade_Cluster.Grenade_Cluster_C.OnExploded
// (Event, Protected, BlueprintEvent)

void AGrenade_Cluster_C::OnExploded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Cluster.Grenade_Cluster_C.OnExploded");

	AGrenade_Cluster_C_OnExploded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_Cluster.Grenade_Cluster_C.ExecuteUbergraph_Grenade_Cluster
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrenade_Cluster_C::ExecuteUbergraph_Grenade_Cluster(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Cluster.Grenade_Cluster_C.ExecuteUbergraph_Grenade_Cluster");

	AGrenade_Cluster_C_ExecuteUbergraph_Grenade_Cluster_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
