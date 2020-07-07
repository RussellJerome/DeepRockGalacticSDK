// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_SawedOffShotgun_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_SawedOffShotgun.WPN_SawedOffShotgun_C.GetGearStatEntry
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWPN_SawedOffShotgun_C::GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_SawedOffShotgun.WPN_SawedOffShotgun_C.GetGearStatEntry");

	AWPN_SawedOffShotgun_C_GetGearStatEntry_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function WPN_SawedOffShotgun.WPN_SawedOffShotgun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWPN_SawedOffShotgun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_SawedOffShotgun.WPN_SawedOffShotgun_C.UserConstructionScript");

	AWPN_SawedOffShotgun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_SawedOffShotgun.WPN_SawedOffShotgun_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWPN_SawedOffShotgun_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_SawedOffShotgun.WPN_SawedOffShotgun_C.ReceiveBeginPlay");

	AWPN_SawedOffShotgun_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_SawedOffShotgun.WPN_SawedOffShotgun_C.ExecuteUbergraph_WPN_SawedOffShotgun
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_SawedOffShotgun_C::ExecuteUbergraph_WPN_SawedOffShotgun(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_SawedOffShotgun.WPN_SawedOffShotgun_C.ExecuteUbergraph_WPN_SawedOffShotgun");

	AWPN_SawedOffShotgun_C_ExecuteUbergraph_WPN_SawedOffShotgun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
