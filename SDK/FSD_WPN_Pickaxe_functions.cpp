// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_Pickaxe_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_Pickaxe.WPN_Pickaxe_C.GetGearStatEntry
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFSDPlayerState**        PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWPN_Pickaxe_C::GetGearStatEntry(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Pickaxe.WPN_Pickaxe_C.GetGearStatEntry");

	AWPN_Pickaxe_C_GetGearStatEntry_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function WPN_Pickaxe.WPN_Pickaxe_C.SpecialTargetDamageEffects
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                ImpactPoint                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                ImpactNormal                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AWPN_Pickaxe_C::SpecialTargetDamageEffects(struct FVector* ImpactPoint, struct FVector* ImpactNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Pickaxe.WPN_Pickaxe_C.SpecialTargetDamageEffects");

	AWPN_Pickaxe_C_SpecialTargetDamageEffects_Params params;
	params.ImpactPoint = ImpactPoint;
	params.ImpactNormal = ImpactNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Pickaxe.WPN_Pickaxe_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWPN_Pickaxe_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Pickaxe.WPN_Pickaxe_C.ReceiveBeginPlay");

	AWPN_Pickaxe_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WPN_Pickaxe.WPN_Pickaxe_C.ExecuteUbergraph_WPN_Pickaxe
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWPN_Pickaxe_C::ExecuteUbergraph_WPN_Pickaxe(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Pickaxe.WPN_Pickaxe_C.ExecuteUbergraph_WPN_Pickaxe");

	AWPN_Pickaxe_C_ExecuteUbergraph_WPN_Pickaxe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
