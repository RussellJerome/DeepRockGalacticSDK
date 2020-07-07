// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_ChargeBlaster_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.FadeOutIfValid
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*         AC                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)

void AWPN_ChargeBlaster_C::FadeOutIfValid(class UAudioComponent** AC)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.FadeOutIfValid");

	AWPN_ChargeBlaster_C_FadeOutIfValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AC != nullptr)
		*AC = params.AC;
}


// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.HandleHeatAudio
// (Public, BlueprintCallable, BlueprintEvent)

void AWPN_ChargeBlaster_C::HandleHeatAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.HandleHeatAudio");

	AWPN_ChargeBlaster_C_HandleHeatAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.HandleChargeAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         charge                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_ChargeBlaster_C::HandleChargeAudio(float* charge)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.HandleChargeAudio");

	AWPN_ChargeBlaster_C_HandleChargeAudio_Params params;
	params.charge = charge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.GetGearStatEntry
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWPN_ChargeBlaster_C::GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.GetGearStatEntry");

	AWPN_ChargeBlaster_C_GetGearStatEntry_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWPN_ChargeBlaster_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.UserConstructionScript");

	AWPN_ChargeBlaster_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.OnHeatChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         charge                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_ChargeBlaster_C::OnHeatChanged_Event_1(float* charge)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.OnHeatChanged_Event_1");

	AWPN_ChargeBlaster_C_OnHeatChanged_Event_1_Params params;
	params.charge = charge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.ChargeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         charge                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_ChargeBlaster_C::ChargeChanged(float* charge)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.ChargeChanged");

	AWPN_ChargeBlaster_C_ChargeChanged_Params params;
	params.charge = charge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.RecieveUnequipped
// (Event, Protected, BlueprintEvent)

void AWPN_ChargeBlaster_C::RecieveUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.RecieveUnequipped");

	AWPN_ChargeBlaster_C_RecieveUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.ReceiveOverheatedChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          isOverheated                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_ChargeBlaster_C::ReceiveOverheatedChanged(bool* isOverheated)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.ReceiveOverheatedChanged");

	AWPN_ChargeBlaster_C_ReceiveOverheatedChanged_Params params;
	params.isOverheated = isOverheated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.OnSkinChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class USkinEffect**            Skin                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_ChargeBlaster_C::OnSkinChanged(class USkinEffect** Skin)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.OnSkinChanged");

	AWPN_ChargeBlaster_C_OnSkinChanged_Params params;
	params.Skin = Skin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.AddedToInventory
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       ItemOwner                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_ChargeBlaster_C::AddedToInventory(class APlayerCharacter** ItemOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.AddedToInventory");

	AWPN_ChargeBlaster_C_AddedToInventory_Params params;
	params.ItemOwner = ItemOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.ExecuteUbergraph_WPN_ChargeBlaster
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_ChargeBlaster_C::ExecuteUbergraph_WPN_ChargeBlaster(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ChargeBlaster.WPN_ChargeBlaster_C.ExecuteUbergraph_WPN_ChargeBlaster");

	AWPN_ChargeBlaster_C_ExecuteUbergraph_WPN_ChargeBlaster_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
