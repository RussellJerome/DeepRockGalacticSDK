// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_SMG_OneHand_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.GetGearStatEntry
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWPN_SMG_OneHand_C::GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.GetGearStatEntry");

	AWPN_SMG_OneHand_C_GetGearStatEntry_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWPN_SMG_OneHand_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.UserConstructionScript");

	AWPN_SMG_OneHand_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.RecieveEquipped
// (Event, Protected, BlueprintEvent)

void AWPN_SMG_OneHand_C::RecieveEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.RecieveEquipped");

	AWPN_SMG_OneHand_C_RecieveEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Recieve_UpdateMeshses
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          IsFirstPerson                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_SMG_OneHand_C::Recieve_UpdateMeshses(bool* IsFirstPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Recieve_UpdateMeshses");

	AWPN_SMG_OneHand_C_Recieve_UpdateMeshses_Params params;
	params.IsFirstPerson = IsFirstPerson;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWPN_SMG_OneHand_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.ReceiveBeginPlay");

	AWPN_SMG_OneHand_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Receive_ReloadBegin
// (Event, Public, BlueprintEvent)

void AWPN_SMG_OneHand_C::Receive_ReloadBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Receive_ReloadBegin");

	AWPN_SMG_OneHand_C_Receive_ReloadBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Receive_ReloadEnd
// (Event, Public, BlueprintEvent)

void AWPN_SMG_OneHand_C::Receive_ReloadEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.Receive_ReloadEnd");

	AWPN_SMG_OneHand_C_Receive_ReloadEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.ExecuteUbergraph_WPN_SMG_OneHand
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_SMG_OneHand_C::ExecuteUbergraph_WPN_SMG_OneHand(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_SMG_OneHand.WPN_SMG_OneHand_C.ExecuteUbergraph_WPN_SMG_OneHand");

	AWPN_SMG_OneHand_C_ExecuteUbergraph_WPN_SMG_OneHand_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
