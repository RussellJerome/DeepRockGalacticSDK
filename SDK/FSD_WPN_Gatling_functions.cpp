// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_Gatling_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_Gatling.WPN_Gatling_C.GetGearStatEntry
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWPN_Gatling_C::GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Gatling.WPN_Gatling_C.GetGearStatEntry");

	AWPN_Gatling_C_GetGearStatEntry_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function WPN_Gatling.WPN_Gatling_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWPN_Gatling_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Gatling.WPN_Gatling_C.UserConstructionScript");

	AWPN_Gatling_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Gatling.WPN_Gatling_C.Receive_Overheated
// (Event, Protected, BlueprintEvent)

void AWPN_Gatling_C::Receive_Overheated()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Gatling.WPN_Gatling_C.Receive_Overheated");

	AWPN_Gatling_C_Receive_Overheated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Gatling.WPN_Gatling_C.Receive_IsFiringChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_Gatling_C::Receive_IsFiringChanged(bool* NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Gatling.WPN_Gatling_C.Receive_IsFiringChanged");

	AWPN_Gatling_C_Receive_IsFiringChanged_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Gatling.WPN_Gatling_C.RecieveEquipped
// (Event, Protected, BlueprintEvent)

void AWPN_Gatling_C::RecieveEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Gatling.WPN_Gatling_C.RecieveEquipped");

	AWPN_Gatling_C_RecieveEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Gatling.WPN_Gatling_C.RecieveUnequipped
// (Event, Protected, BlueprintEvent)

void AWPN_Gatling_C::RecieveUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Gatling.WPN_Gatling_C.RecieveUnequipped");

	AWPN_Gatling_C_RecieveUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Gatling.WPN_Gatling_C.All_SpawnHeatBurst
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AWPN_Gatling_C::All_SpawnHeatBurst()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Gatling.WPN_Gatling_C.All_SpawnHeatBurst");

	AWPN_Gatling_C_All_SpawnHeatBurst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Gatling.WPN_Gatling_C.TriggerCriticalOverheat
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AWPN_Gatling_C::TriggerCriticalOverheat()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Gatling.WPN_Gatling_C.TriggerCriticalOverheat");

	AWPN_Gatling_C_TriggerCriticalOverheat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Gatling.WPN_Gatling_C.OnTemperatureChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Temperature                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Overheated                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_Gatling_C::OnTemperatureChanged(float* Temperature, bool* Overheated)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Gatling.WPN_Gatling_C.OnTemperatureChanged");

	AWPN_Gatling_C_OnTemperatureChanged_Params params;
	params.Temperature = Temperature;
	params.Overheated = Overheated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Gatling.WPN_Gatling_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWPN_Gatling_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Gatling.WPN_Gatling_C.ReceiveBeginPlay");

	AWPN_Gatling_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Gatling.WPN_Gatling_C.OnSkinChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class USkinEffect**            Skin                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_Gatling_C::OnSkinChanged(class USkinEffect** Skin)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Gatling.WPN_Gatling_C.OnSkinChanged");

	AWPN_Gatling_C_OnSkinChanged_Params params;
	params.Skin = Skin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Gatling.WPN_Gatling_C.BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature
// (BlueprintEvent)

void AWPN_Gatling_C::BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Gatling.WPN_Gatling_C.BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature");

	AWPN_Gatling_C_BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Gatling.WPN_Gatling_C.ExecuteUbergraph_WPN_Gatling
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_Gatling_C::ExecuteUbergraph_WPN_Gatling(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Gatling.WPN_Gatling_C.ExecuteUbergraph_WPN_Gatling");

	AWPN_Gatling_C_ExecuteUbergraph_WPN_Gatling_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
