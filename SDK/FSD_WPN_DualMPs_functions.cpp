// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_DualMPs_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_DualMPs.WPN_DualMPs_C.GetGearStatEntry
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWPN_DualMPs_C::GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DualMPs.WPN_DualMPs_C.GetGearStatEntry");

	AWPN_DualMPs_C_GetGearStatEntry_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function WPN_DualMPs.WPN_DualMPs_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWPN_DualMPs_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DualMPs.WPN_DualMPs_C.UserConstructionScript");

	AWPN_DualMPs_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_DualMPs.WPN_DualMPs_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWPN_DualMPs_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DualMPs.WPN_DualMPs_C.ReceiveBeginPlay");

	AWPN_DualMPs_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_DualMPs.WPN_DualMPs_C.ExecuteUbergraph_WPN_DualMPs
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_DualMPs_C::ExecuteUbergraph_WPN_DualMPs(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DualMPs.WPN_DualMPs_C.ExecuteUbergraph_WPN_DualMPs");

	AWPN_DualMPs_C_ExecuteUbergraph_WPN_DualMPs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
