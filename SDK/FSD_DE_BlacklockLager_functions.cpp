// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_BlacklockLager_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DE_BlacklockLager.DE_BlacklockLager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_BlacklockLager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_BlacklockLager.DE_BlacklockLager_C.ReceiveTick");

	UDE_BlacklockLager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_BlacklockLager.DE_BlacklockLager_C.OnStartEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_BlacklockLager_C::OnStartEffect(class APlayerCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_BlacklockLager.DE_BlacklockLager_C.OnStartEffect");

	UDE_BlacklockLager_C_OnStartEffect_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_BlacklockLager.DE_BlacklockLager_C.Activate Effects
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void UDE_BlacklockLager_C::Activate_Effects()
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_BlacklockLager.DE_BlacklockLager_C.Activate Effects");

	UDE_BlacklockLager_C_Activate_Effects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_BlacklockLager.DE_BlacklockLager_C.OnStopEffect
// (Event, Protected, BlueprintEvent)

void UDE_BlacklockLager_C::OnStopEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_BlacklockLager.DE_BlacklockLager_C.OnStopEffect");

	UDE_BlacklockLager_C_OnStopEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_BlacklockLager.DE_BlacklockLager_C.ExecuteUbergraph_DE_BlacklockLager
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_BlacklockLager_C::ExecuteUbergraph_DE_BlacklockLager(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_BlacklockLager.DE_BlacklockLager_C.ExecuteUbergraph_DE_BlacklockLager");

	UDE_BlacklockLager_C_ExecuteUbergraph_DE_BlacklockLager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
