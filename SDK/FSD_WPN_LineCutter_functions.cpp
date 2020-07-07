// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_LineCutter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_LineCutter.WPN_LineCutter_C.GetGearStatEntry
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWPN_LineCutter_C::GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LineCutter.WPN_LineCutter_C.GetGearStatEntry");

	AWPN_LineCutter_C_GetGearStatEntry_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function WPN_LineCutter.WPN_LineCutter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWPN_LineCutter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LineCutter.WPN_LineCutter_C.UserConstructionScript");

	AWPN_LineCutter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_LineCutter.WPN_LineCutter_C.Flicker Brightness__FinishedFunc
// (BlueprintEvent)

void AWPN_LineCutter_C::Flicker_Brightness__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LineCutter.WPN_LineCutter_C.Flicker Brightness__FinishedFunc");

	AWPN_LineCutter_C_Flicker_Brightness__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_LineCutter.WPN_LineCutter_C.Flicker Brightness__UpdateFunc
// (BlueprintEvent)

void AWPN_LineCutter_C::Flicker_Brightness__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LineCutter.WPN_LineCutter_C.Flicker Brightness__UpdateFunc");

	AWPN_LineCutter_C_Flicker_Brightness__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_LineCutter.WPN_LineCutter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWPN_LineCutter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LineCutter.WPN_LineCutter_C.ReceiveBeginPlay");

	AWPN_LineCutter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_LineCutter.WPN_LineCutter_C.OnFireWhileLastProjectileAlive
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ALineCutterProjectile**  Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_LineCutter_C::OnFireWhileLastProjectileAlive(class ALineCutterProjectile** Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LineCutter.WPN_LineCutter_C.OnFireWhileLastProjectileAlive");

	AWPN_LineCutter_C_OnFireWhileLastProjectileAlive_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_LineCutter.WPN_LineCutter_C.ExecuteUbergraph_WPN_LineCutter
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_LineCutter_C::ExecuteUbergraph_WPN_LineCutter(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LineCutter.WPN_LineCutter_C.ExecuteUbergraph_WPN_LineCutter");

	AWPN_LineCutter_C_ExecuteUbergraph_WPN_LineCutter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
