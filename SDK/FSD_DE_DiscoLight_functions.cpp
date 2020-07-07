// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DE_DiscoLight_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DE_DiscoLight.DE_DiscoLight_C.OnRep_Light
// (BlueprintCallable, BlueprintEvent)

void UDE_DiscoLight_C::OnRep_Light()
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_DiscoLight.DE_DiscoLight_C.OnRep_Light");

	UDE_DiscoLight_C_OnRep_Light_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_DiscoLight.DE_DiscoLight_C.OnLoaded_9A4F10A04AD1DAA8BA45FFA4A7DB3EEC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_DiscoLight_C::OnLoaded_9A4F10A04AD1DAA8BA45FFA4A7DB3EEC(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_DiscoLight.DE_DiscoLight_C.OnLoaded_9A4F10A04AD1DAA8BA45FFA4A7DB3EEC");

	UDE_DiscoLight_C_OnLoaded_9A4F10A04AD1DAA8BA45FFA4A7DB3EEC_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_DiscoLight.DE_DiscoLight_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UDE_DiscoLight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_DiscoLight.DE_DiscoLight_C.ReceiveBeginPlay");

	UDE_DiscoLight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_DiscoLight.DE_DiscoLight_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_DiscoLight_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_DiscoLight.DE_DiscoLight_C.ReceiveTick");

	UDE_DiscoLight_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_DiscoLight.DE_DiscoLight_C.OnStartEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_DiscoLight_C::OnStartEffect(class APlayerCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_DiscoLight.DE_DiscoLight_C.OnStartEffect");

	UDE_DiscoLight_C_OnStartEffect_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_DiscoLight.DE_DiscoLight_C.OnStopEffect
// (Event, Protected, BlueprintEvent)

void UDE_DiscoLight_C::OnStopEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_DiscoLight.DE_DiscoLight_C.OnStopEffect");

	UDE_DiscoLight_C_OnStopEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_DiscoLight.DE_DiscoLight_C.Set Light
// (BlueprintCallable, BlueprintEvent)

void UDE_DiscoLight_C::Set_Light()
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_DiscoLight.DE_DiscoLight_C.Set Light");

	UDE_DiscoLight_C_Set_Light_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DE_DiscoLight.DE_DiscoLight_C.ExecuteUbergraph_DE_DiscoLight
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDE_DiscoLight_C::ExecuteUbergraph_DE_DiscoLight(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_DiscoLight.DE_DiscoLight_C.ExecuteUbergraph_DE_DiscoLight");

	UDE_DiscoLight_C_ExecuteUbergraph_DE_DiscoLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
