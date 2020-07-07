// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_Revolver_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_Revolver.WPN_Revolver_C.GetGearStatEntry
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWPN_Revolver_C::GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Revolver.WPN_Revolver_C.GetGearStatEntry");

	AWPN_Revolver_C_GetGearStatEntry_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function WPN_Revolver.WPN_Revolver_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWPN_Revolver_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Revolver.WPN_Revolver_C.UserConstructionScript");

	AWPN_Revolver_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Revolver.WPN_Revolver_C.Receive_ReloadBegin
// (Event, Public, BlueprintEvent)

void AWPN_Revolver_C::Receive_ReloadBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Revolver.WPN_Revolver_C.Receive_ReloadBegin");

	AWPN_Revolver_C_Receive_ReloadBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Revolver.WPN_Revolver_C.Receive_ReloadEnd
// (Event, Public, BlueprintEvent)

void AWPN_Revolver_C::Receive_ReloadEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Revolver.WPN_Revolver_C.Receive_ReloadEnd");

	AWPN_Revolver_C_Receive_ReloadEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Revolver.WPN_Revolver_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWPN_Revolver_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Revolver.WPN_Revolver_C.ReceiveBeginPlay");

	AWPN_Revolver_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Revolver.WPN_Revolver_C.OnSpreadChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         HorizontalSpread               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         VerticalSpread                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          isAtRest                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_Revolver_C::OnSpreadChanged_Event_1(float* HorizontalSpread, float* VerticalSpread, bool* isAtRest)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Revolver.WPN_Revolver_C.OnSpreadChanged_Event_1");

	AWPN_Revolver_C_OnSpreadChanged_Event_1_Params params;
	params.HorizontalSpread = HorizontalSpread;
	params.VerticalSpread = VerticalSpread;
	params.isAtRest = isAtRest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Revolver.WPN_Revolver_C.ExecuteUbergraph_WPN_Revolver
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_Revolver_C::ExecuteUbergraph_WPN_Revolver(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Revolver.WPN_Revolver_C.ExecuteUbergraph_WPN_Revolver");

	AWPN_Revolver_C_ExecuteUbergraph_WPN_Revolver_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
