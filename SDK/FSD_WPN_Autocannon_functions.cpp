// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_Autocannon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_Autocannon.WPN_Autocannon_C.RoundStatValue
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText*                  InText                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString*                 Suffix                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool*                          KeepSign                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AWPN_Autocannon_C::RoundStatValue(struct FText* InText, class FString* Suffix, bool* KeepSign)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Autocannon.WPN_Autocannon_C.RoundStatValue");

	AWPN_Autocannon_C_RoundStatValue_Params params;
	params.InText = InText;
	params.Suffix = Suffix;
	params.KeepSign = KeepSign;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WPN_Autocannon.WPN_Autocannon_C.GetGearStatEntry
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWPN_Autocannon_C::GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Autocannon.WPN_Autocannon_C.GetGearStatEntry");

	AWPN_Autocannon_C_GetGearStatEntry_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function WPN_Autocannon.WPN_Autocannon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWPN_Autocannon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Autocannon.WPN_Autocannon_C.UserConstructionScript");

	AWPN_Autocannon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Autocannon.WPN_Autocannon_C.ShowCurentFireTime
// (BlueprintCallable, BlueprintEvent)

void AWPN_Autocannon_C::ShowCurentFireTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Autocannon.WPN_Autocannon_C.ShowCurentFireTime");

	AWPN_Autocannon_C_ShowCurentFireTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Autocannon.WPN_Autocannon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWPN_Autocannon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Autocannon.WPN_Autocannon_C.ReceiveBeginPlay");

	AWPN_Autocannon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Autocannon.WPN_Autocannon_C.RecieveUnequipped
// (Event, Protected, BlueprintEvent)

void AWPN_Autocannon_C::RecieveUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Autocannon.WPN_Autocannon_C.RecieveUnequipped");

	AWPN_Autocannon_C_RecieveUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Autocannon.WPN_Autocannon_C.RecieveEquipped
// (Event, Protected, BlueprintEvent)

void AWPN_Autocannon_C::RecieveEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Autocannon.WPN_Autocannon_C.RecieveEquipped");

	AWPN_Autocannon_C_RecieveEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Autocannon.WPN_Autocannon_C.Receive_IsFiringChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_Autocannon_C::Receive_IsFiringChanged(bool* NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Autocannon.WPN_Autocannon_C.Receive_IsFiringChanged");

	AWPN_Autocannon_C_Receive_IsFiringChanged_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Autocannon.WPN_Autocannon_C.BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature
// (BlueprintEvent)

void AWPN_Autocannon_C::BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Autocannon.WPN_Autocannon_C.BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature");

	AWPN_Autocannon_C_BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Autocannon.WPN_Autocannon_C.RecieveFiredWeapon
// (Event, Protected, BlueprintEvent)

void AWPN_Autocannon_C::RecieveFiredWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Autocannon.WPN_Autocannon_C.RecieveFiredWeapon");

	AWPN_Autocannon_C_RecieveFiredWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Autocannon.WPN_Autocannon_C.ExecuteUbergraph_WPN_Autocannon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_Autocannon_C::ExecuteUbergraph_WPN_Autocannon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Autocannon.WPN_Autocannon_C.ExecuteUbergraph_WPN_Autocannon");

	AWPN_Autocannon_C_ExecuteUbergraph_WPN_Autocannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
