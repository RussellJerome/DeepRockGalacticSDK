// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_DetPack_Detonator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.GetGearStatEntry
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWPN_DetPack_Detonator_C::GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.GetGearStatEntry");

	AWPN_DetPack_Detonator_C_GetGearStatEntry_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWPN_DetPack_Detonator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.UserConstructionScript");

	AWPN_DetPack_Detonator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.RecieveStartUsing
// (Event, Protected, BlueprintEvent)

void AWPN_DetPack_Detonator_C::RecieveStartUsing()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.RecieveStartUsing");

	AWPN_DetPack_Detonator_C_RecieveStartUsing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.RecieveEquipped
// (Event, Protected, BlueprintEvent)

void AWPN_DetPack_Detonator_C::RecieveEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.RecieveEquipped");

	AWPN_DetPack_Detonator_C_RecieveEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.ReceiveResupply
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         percentage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_DetPack_Detonator_C::ReceiveResupply(float* percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.ReceiveResupply");

	AWPN_DetPack_Detonator_C_ReceiveResupply_Params params;
	params.percentage = percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.Receive_OnRep_IsDetonatorOut
// (Event, Protected, BlueprintEvent)

void AWPN_DetPack_Detonator_C::Receive_OnRep_IsDetonatorOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.Receive_OnRep_IsDetonatorOut");

	AWPN_DetPack_Detonator_C_Receive_OnRep_IsDetonatorOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.ExecuteUbergraph_WPN_DetPack_Detonator
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_DetPack_Detonator_C::ExecuteUbergraph_WPN_DetPack_Detonator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DetPack_Detonator.WPN_DetPack_Detonator_C.ExecuteUbergraph_WPN_DetPack_Detonator");

	AWPN_DetPack_Detonator_C_ExecuteUbergraph_WPN_DetPack_Detonator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
