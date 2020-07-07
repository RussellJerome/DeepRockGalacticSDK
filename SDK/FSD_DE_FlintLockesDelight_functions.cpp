// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_FlintLockesDelight_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.OnRep_Trigger Explosion
// (BlueprintCallable, BlueprintEvent)

void UDE_FlintLockesDelight_C::OnRep_Trigger_Explosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.OnRep_Trigger Explosion");

	UDE_FlintLockesDelight_C_OnRep_Trigger_Explosion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_FlintLockesDelight_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.ReceiveTick");

	UDE_FlintLockesDelight_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.OnStartEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_FlintLockesDelight_C::OnStartEffect(class APlayerCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.OnStartEffect");

	UDE_FlintLockesDelight_C_OnStartEffect_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.Trigger Explosion
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void UDE_FlintLockesDelight_C::Trigger_Explosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.Trigger Explosion");

	UDE_FlintLockesDelight_C_Trigger_Explosion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.OnStopEffect
// (Event, Protected, BlueprintEvent)

void UDE_FlintLockesDelight_C::OnStopEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.OnStopEffect");

	UDE_FlintLockesDelight_C_OnStopEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.Stop Effects
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void UDE_FlintLockesDelight_C::Stop_Effects()
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.Stop Effects");

	UDE_FlintLockesDelight_C_Stop_Effects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.ExecuteUbergraph_DE_FlintLockesDelight
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_FlintLockesDelight_C::ExecuteUbergraph_DE_FlintLockesDelight(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_FlintLockesDelight.DE_FlintLockesDelight_C.ExecuteUbergraph_DE_FlintLockesDelight");

	UDE_FlintLockesDelight_C_ExecuteUbergraph_DE_FlintLockesDelight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
