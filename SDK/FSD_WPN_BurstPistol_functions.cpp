// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_BurstPistol_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_BurstPistol.WPN_BurstPistol_C.GetGearStatEntry
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWPN_BurstPistol_C::GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_BurstPistol.WPN_BurstPistol_C.GetGearStatEntry");

	AWPN_BurstPistol_C_GetGearStatEntry_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function WPN_BurstPistol.WPN_BurstPistol_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWPN_BurstPistol_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_BurstPistol.WPN_BurstPistol_C.UserConstructionScript");

	AWPN_BurstPistol_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_BurstPistol.WPN_BurstPistol_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWPN_BurstPistol_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_BurstPistol.WPN_BurstPistol_C.ReceiveBeginPlay");

	AWPN_BurstPistol_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_BurstPistol.WPN_BurstPistol_C.Receive_ReloadBegin
// (Event, Public, BlueprintEvent)

void AWPN_BurstPistol_C::Receive_ReloadBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_BurstPistol.WPN_BurstPistol_C.Receive_ReloadBegin");

	AWPN_BurstPistol_C_Receive_ReloadBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_BurstPistol.WPN_BurstPistol_C.Receive_ReloadEnd
// (Event, Public, BlueprintEvent)

void AWPN_BurstPistol_C::Receive_ReloadEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_BurstPistol.WPN_BurstPistol_C.Receive_ReloadEnd");

	AWPN_BurstPistol_C_Receive_ReloadEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_BurstPistol.WPN_BurstPistol_C.ExecuteUbergraph_WPN_BurstPistol
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_BurstPistol_C::ExecuteUbergraph_WPN_BurstPistol(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_BurstPistol.WPN_BurstPistol_C.ExecuteUbergraph_WPN_BurstPistol");

	AWPN_BurstPistol_C_ExecuteUbergraph_WPN_BurstPistol_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
