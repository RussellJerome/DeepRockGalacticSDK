// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_DoubleDrills_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_DoubleDrills.WPN_DoubleDrills_C.GetGearStatEntry
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWPN_DoubleDrills_C::GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.GetGearStatEntry");

	AWPN_DoubleDrills_C_GetGearStatEntry_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.GetHeatingAudioSceneComponent
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* AWPN_DoubleDrills_C::GetHeatingAudioSceneComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.GetHeatingAudioSceneComponent");

	AWPN_DoubleDrills_C_GetHeatingAudioSceneComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.OnTemperatureChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Temperature                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Overheated                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_DoubleDrills_C::OnTemperatureChanged(float* Temperature, bool* Overheated)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.OnTemperatureChanged");

	AWPN_DoubleDrills_C_OnTemperatureChanged_Params params;
	params.Temperature = Temperature;
	params.Overheated = Overheated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.Increase FOV
// (BlueprintCallable, BlueprintEvent)

void AWPN_DoubleDrills_C::Increase_FOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.Increase FOV");

	AWPN_DoubleDrills_C_Increase_FOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.Decrease FOV
// (BlueprintCallable, BlueprintEvent)

void AWPN_DoubleDrills_C::Decrease_FOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.Decrease FOV");

	AWPN_DoubleDrills_C_Decrease_FOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.AddedToInventory
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       ItemOwner                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_DoubleDrills_C::AddedToInventory(class APlayerCharacter** ItemOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.AddedToInventory");

	AWPN_DoubleDrills_C_AddedToInventory_Params params;
	params.ItemOwner = ItemOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.BP_OnDrillDamage
// (Event, Public, BlueprintEvent)

void AWPN_DoubleDrills_C::BP_OnDrillDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.BP_OnDrillDamage");

	AWPN_DoubleDrills_C_BP_OnDrillDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.OnStartDrilling
// (Event, Public, BlueprintEvent)

void AWPN_DoubleDrills_C::OnStartDrilling()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.OnStartDrilling");

	AWPN_DoubleDrills_C_OnStartDrilling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.OnStopDrilling
// (Event, Public, BlueprintEvent)

void AWPN_DoubleDrills_C::OnStopDrilling()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.OnStopDrilling");

	AWPN_DoubleDrills_C_OnStopDrilling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.Receive_Overheated
// (Event, Protected, BlueprintEvent)

void AWPN_DoubleDrills_C::Receive_Overheated()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.Receive_Overheated");

	AWPN_DoubleDrills_C_Receive_Overheated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWPN_DoubleDrills_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.ReceiveBeginPlay");

	AWPN_DoubleDrills_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.Gunsling
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AWPN_DoubleDrills_C::Gunsling()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.Gunsling");

	AWPN_DoubleDrills_C_Gunsling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.RecieveCycledItem
// (Event, Protected, BlueprintEvent)

void AWPN_DoubleDrills_C::RecieveCycledItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.RecieveCycledItem");

	AWPN_DoubleDrills_C_RecieveCycledItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_DoubleDrills.WPN_DoubleDrills_C.ExecuteUbergraph_WPN_DoubleDrills
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_DoubleDrills_C::ExecuteUbergraph_WPN_DoubleDrills(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_DoubleDrills.WPN_DoubleDrills_C.ExecuteUbergraph_WPN_DoubleDrills");

	AWPN_DoubleDrills_C_ExecuteUbergraph_WPN_DoubleDrills_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
