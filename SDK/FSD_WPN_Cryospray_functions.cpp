// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_Cryospray_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_Cryospray.WPN_Cryospray_C.GetGearStatEntry
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWPN_Cryospray_C::GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Cryospray.WPN_Cryospray_C.GetGearStatEntry");

	AWPN_Cryospray_C_GetGearStatEntry_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function WPN_Cryospray.WPN_Cryospray_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWPN_Cryospray_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Cryospray.WPN_Cryospray_C.UserConstructionScript");

	AWPN_Cryospray_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Cryospray.WPN_Cryospray_C.BndEvt__Aggregator_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_Cryospray_C::BndEvt__Aggregator_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature(int* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Cryospray.WPN_Cryospray_C.BndEvt__Aggregator_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature");

	AWPN_Cryospray_C_BndEvt__Aggregator_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Cryospray.WPN_Cryospray_C.Update Ammo Display
// (BlueprintCallable, BlueprintEvent)

void AWPN_Cryospray_C::Update_Ammo_Display()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Cryospray.WPN_Cryospray_C.Update Ammo Display");

	AWPN_Cryospray_C_Update_Ammo_Display_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Cryospray.WPN_Cryospray_C.ReceiveRepressurisingChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_Cryospray_C::ReceiveRepressurisingChanged(bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Cryospray.WPN_Cryospray_C.ReceiveRepressurisingChanged");

	AWPN_Cryospray_C_ReceiveRepressurisingChanged_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Cryospray.WPN_Cryospray_C.RecieveEquipped
// (Event, Protected, BlueprintEvent)

void AWPN_Cryospray_C::RecieveEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Cryospray.WPN_Cryospray_C.RecieveEquipped");

	AWPN_Cryospray_C_RecieveEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Cryospray.WPN_Cryospray_C.RecieveUnequipped
// (Event, Protected, BlueprintEvent)

void AWPN_Cryospray_C::RecieveUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Cryospray.WPN_Cryospray_C.RecieveUnequipped");

	AWPN_Cryospray_C_RecieveUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Cryospray.WPN_Cryospray_C.Toggle RepressurerisingFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          on                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_Cryospray_C::Toggle_RepressurerisingFX(bool* on)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Cryospray.WPN_Cryospray_C.Toggle RepressurerisingFX");

	AWPN_Cryospray_C_Toggle_RepressurerisingFX_Params params;
	params.on = on;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Cryospray.WPN_Cryospray_C.OnProjectileLaunched
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AWPN_Cryospray_C::OnProjectileLaunched(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Cryospray.WPN_Cryospray_C.OnProjectileLaunched");

	AWPN_Cryospray_C_OnProjectileLaunched_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Cryospray.WPN_Cryospray_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWPN_Cryospray_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Cryospray.WPN_Cryospray_C.ReceiveBeginPlay");

	AWPN_Cryospray_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Cryospray.WPN_Cryospray_C.OnPreProjectileLaunch
// (Event, Protected, BlueprintEvent)

void AWPN_Cryospray_C::OnPreProjectileLaunch()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Cryospray.WPN_Cryospray_C.OnPreProjectileLaunch");

	AWPN_Cryospray_C_OnPreProjectileLaunch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Cryospray.WPN_Cryospray_C.ExecuteUbergraph_WPN_Cryospray
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_Cryospray_C::ExecuteUbergraph_WPN_Cryospray(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Cryospray.WPN_Cryospray_C.ExecuteUbergraph_WPN_Cryospray");

	AWPN_Cryospray_C_ExecuteUbergraph_WPN_Cryospray_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
