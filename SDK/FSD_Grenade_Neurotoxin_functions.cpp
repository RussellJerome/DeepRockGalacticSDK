// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Grenade_Neurotoxin_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Grenade_Neurotoxin.Grenade_Neurotoxin_C.AddGearStateEntries
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGrenade_Neurotoxin_C::AddGearStateEntries(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Neurotoxin.Grenade_Neurotoxin_C.AddGearStateEntries");

	AGrenade_Neurotoxin_C_AddGearStateEntries_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function Grenade_Neurotoxin.Grenade_Neurotoxin_C.OnExploded
// (Event, Protected, BlueprintEvent)

void AGrenade_Neurotoxin_C::OnExploded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Neurotoxin.Grenade_Neurotoxin_C.OnExploded");

	AGrenade_Neurotoxin_C_OnExploded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Grenade_Neurotoxin.Grenade_Neurotoxin_C.ExecuteUbergraph_Grenade_Neurotoxin
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGrenade_Neurotoxin_C::ExecuteUbergraph_Grenade_Neurotoxin(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Grenade_Neurotoxin.Grenade_Neurotoxin_C.ExecuteUbergraph_Grenade_Neurotoxin");

	AGrenade_Neurotoxin_C_ExecuteUbergraph_Grenade_Neurotoxin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
