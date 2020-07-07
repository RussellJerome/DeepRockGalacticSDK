// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_M1000_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_M1000.WPN_M1000_C.GetGearStatEntry
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWPN_M1000_C::GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_M1000.WPN_M1000_C.GetGearStatEntry");

	AWPN_M1000_C_GetGearStatEntry_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function WPN_M1000.WPN_M1000_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWPN_M1000_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_M1000.WPN_M1000_C.UserConstructionScript");

	AWPN_M1000_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_M1000.WPN_M1000_C.RecieveEquipped
// (Event, Protected, BlueprintEvent)

void AWPN_M1000_C::RecieveEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_M1000.WPN_M1000_C.RecieveEquipped");

	AWPN_M1000_C_RecieveEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_M1000.WPN_M1000_C.Recieve_UpdateMeshses
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          IsFirstPerson                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_M1000_C::Recieve_UpdateMeshses(bool* IsFirstPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_M1000.WPN_M1000_C.Recieve_UpdateMeshses");

	AWPN_M1000_C_Recieve_UpdateMeshses_Params params;
	params.IsFirstPerson = IsFirstPerson;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_M1000.WPN_M1000_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWPN_M1000_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_M1000.WPN_M1000_C.ReceiveBeginPlay");

	AWPN_M1000_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_M1000.WPN_M1000_C.ExecuteUbergraph_WPN_M1000
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_M1000_C::ExecuteUbergraph_WPN_M1000(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_M1000.WPN_M1000_C.ExecuteUbergraph_WPN_M1000");

	AWPN_M1000_C_ExecuteUbergraph_WPN_M1000_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
