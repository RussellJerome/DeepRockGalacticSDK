// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_Pistol_A_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_Pistol_A.WPN_Pistol_A_C.Receive_GetTPAnimationEventMesh
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStaticMeshComponent*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UStaticMeshComponent* AWPN_Pistol_A_C::Receive_GetTPAnimationEventMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Pistol_A.WPN_Pistol_A_C.Receive_GetTPAnimationEventMesh");

	AWPN_Pistol_A_C_Receive_GetTPAnimationEventMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WPN_Pistol_A.WPN_Pistol_A_C.Receive_GetFPAnimationEventMesh
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UFirstPersonStaticMeshComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFirstPersonStaticMeshComponent* AWPN_Pistol_A_C::Receive_GetFPAnimationEventMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Pistol_A.WPN_Pistol_A_C.Receive_GetFPAnimationEventMesh");

	AWPN_Pistol_A_C_Receive_GetFPAnimationEventMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WPN_Pistol_A.WPN_Pistol_A_C.GetGearStatEntry
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWPN_Pistol_A_C::GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Pistol_A.WPN_Pistol_A_C.GetGearStatEntry");

	AWPN_Pistol_A_C_GetGearStatEntry_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function WPN_Pistol_A.WPN_Pistol_A_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWPN_Pistol_A_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Pistol_A.WPN_Pistol_A_C.UserConstructionScript");

	AWPN_Pistol_A_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Pistol_A.WPN_Pistol_A_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWPN_Pistol_A_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Pistol_A.WPN_Pistol_A_C.ReceiveBeginPlay");

	AWPN_Pistol_A_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Pistol_A.WPN_Pistol_A_C.Receive_ReloadBegin
// (Event, Public, BlueprintEvent)

void AWPN_Pistol_A_C::Receive_ReloadBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Pistol_A.WPN_Pistol_A_C.Receive_ReloadBegin");

	AWPN_Pistol_A_C_Receive_ReloadBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Pistol_A.WPN_Pistol_A_C.Receive_ReloadEnd
// (Event, Public, BlueprintEvent)

void AWPN_Pistol_A_C::Receive_ReloadEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Pistol_A.WPN_Pistol_A_C.Receive_ReloadEnd");

	AWPN_Pistol_A_C_Receive_ReloadEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Pistol_A.WPN_Pistol_A_C.OnSkinChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class USkinEffect**            Skin                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_Pistol_A_C::OnSkinChanged(class USkinEffect** Skin)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Pistol_A.WPN_Pistol_A_C.OnSkinChanged");

	AWPN_Pistol_A_C_OnSkinChanged_Params params;
	params.Skin = Skin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Pistol_A.WPN_Pistol_A_C.ExecuteUbergraph_WPN_Pistol_A
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_Pistol_A_C::ExecuteUbergraph_WPN_Pistol_A(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Pistol_A.WPN_Pistol_A_C.ExecuteUbergraph_WPN_Pistol_A");

	AWPN_Pistol_A_C_ExecuteUbergraph_WPN_Pistol_A_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
