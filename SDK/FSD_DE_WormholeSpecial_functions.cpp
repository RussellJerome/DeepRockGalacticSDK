// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_WormholeSpecial_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DE_WormholeSpecial.DE_WormholeSpecial_C.Disable Older Active Wormhole Effects
// (Public, BlueprintCallable, BlueprintEvent)

void UDE_WormholeSpecial_C::Disable_Older_Active_Wormhole_Effects()
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_WormholeSpecial.DE_WormholeSpecial_C.Disable Older Active Wormhole Effects");

	UDE_WormholeSpecial_C_Disable_Older_Active_Wormhole_Effects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_WormholeSpecial.DE_WormholeSpecial_C.IsLastActiveWormholeEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           was_last_effect                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDE_WormholeSpecial_C::IsLastActiveWormholeEffect(bool* was_last_effect)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_WormholeSpecial.DE_WormholeSpecial_C.IsLastActiveWormholeEffect");

	UDE_WormholeSpecial_C_IsLastActiveWormholeEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (was_last_effect != nullptr)
		*was_last_effect = params.was_last_effect;
}


// Function DE_WormholeSpecial.DE_WormholeSpecial_C.Set Original position
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDE_WormholeSpecial_C::Set_Original_position()
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_WormholeSpecial.DE_WormholeSpecial_C.Set Original position");

	UDE_WormholeSpecial_C_Set_Original_position_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_WormholeSpecial.DE_WormholeSpecial_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_WormholeSpecial_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_WormholeSpecial.DE_WormholeSpecial_C.ReceiveTick");

	UDE_WormholeSpecial_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_WormholeSpecial.DE_WormholeSpecial_C.OnStartEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_WormholeSpecial_C::OnStartEffect(class APlayerCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_WormholeSpecial.DE_WormholeSpecial_C.OnStartEffect");

	UDE_WormholeSpecial_C_OnStartEffect_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_WormholeSpecial.DE_WormholeSpecial_C.OnStopEffect
// (Event, Protected, BlueprintEvent)

void UDE_WormholeSpecial_C::OnStopEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_WormholeSpecial.DE_WormholeSpecial_C.OnStopEffect");

	UDE_WormholeSpecial_C_OnStopEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_WormholeSpecial.DE_WormholeSpecial_C.Spawn Teleport Effects
// (BlueprintCallable, BlueprintEvent)

void UDE_WormholeSpecial_C::Spawn_Teleport_Effects()
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_WormholeSpecial.DE_WormholeSpecial_C.Spawn Teleport Effects");

	UDE_WormholeSpecial_C_Spawn_Teleport_Effects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_WormholeSpecial.DE_WormholeSpecial_C.Disable Active Location Effects
// (BlueprintCallable, BlueprintEvent)

void UDE_WormholeSpecial_C::Disable_Active_Location_Effects()
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_WormholeSpecial.DE_WormholeSpecial_C.Disable Active Location Effects");

	UDE_WormholeSpecial_C_Disable_Active_Location_Effects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_WormholeSpecial.DE_WormholeSpecial_C.ExecuteUbergraph_DE_WormholeSpecial
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_WormholeSpecial_C::ExecuteUbergraph_DE_WormholeSpecial(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_WormholeSpecial.DE_WormholeSpecial_C.ExecuteUbergraph_DE_WormholeSpecial");

	UDE_WormholeSpecial_C_ExecuteUbergraph_DE_WormholeSpecial_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
