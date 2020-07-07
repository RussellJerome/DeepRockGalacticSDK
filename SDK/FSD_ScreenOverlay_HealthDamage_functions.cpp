// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ScreenOverlay_HealthDamage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.CheckForLowHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         StartAnimTime                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenOverlay_HealthDamage_C::CheckForLowHealth(float* StartAnimTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.CheckForLowHealth");

	UScreenOverlay_HealthDamage_C_CheckForLowHealth_Params params;
	params.StartAnimTime = StartAnimTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.Begin Splat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenOverlay_HealthDamage_C::Begin_Splat(float* Duration, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.Begin Splat");

	UScreenOverlay_HealthDamage_C_Begin_Splat_Params params;
	params.Duration = Duration;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenOverlay_HealthDamage_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.Tick");

	UScreenOverlay_HealthDamage_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.OnDamageTaken_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenOverlay_HealthDamage_C::OnDamageTaken_Event(float* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.OnDamageTaken_Event");

	UScreenOverlay_HealthDamage_C_OnDamageTaken_Event_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.OnCharacterStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharacterState*               NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenOverlay_HealthDamage_C::OnCharacterStateChanged(ECharacterState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.OnCharacterStateChanged");

	UScreenOverlay_HealthDamage_C_OnCharacterStateChanged_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.End Splat
// (BlueprintCallable, BlueprintEvent)

void UScreenOverlay_HealthDamage_C::End_Splat()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.End Splat");

	UScreenOverlay_HealthDamage_C_End_Splat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.OnCameraModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharacterCameraMode*          NewCameraMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECharacterCameraMode*          OldCameraMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenOverlay_HealthDamage_C::OnCameraModeChanged(ECharacterCameraMode* NewCameraMode, ECharacterCameraMode* OldCameraMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.OnCameraModeChanged");

	UScreenOverlay_HealthDamage_C_OnCameraModeChanged_Params params;
	params.NewCameraMode = NewCameraMode;
	params.OldCameraMode = OldCameraMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.UpdateBloodColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenOverlay_HealthDamage_C::UpdateBloodColor(bool* NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.UpdateBloodColor");

	UScreenOverlay_HealthDamage_C_UpdateBloodColor_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScreenOverlay_HealthDamage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.Construct");

	UScreenOverlay_HealthDamage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.OnUpdateHealthImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenOverlay_HealthDamage_C::OnUpdateHealthImage(float* Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.OnUpdateHealthImage");

	UScreenOverlay_HealthDamage_C_OnUpdateHealthImage_Params params;
	params.Health = Health;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.ExecuteUbergraph_ScreenOverlay_HealthDamage
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenOverlay_HealthDamage_C::ExecuteUbergraph_ScreenOverlay_HealthDamage(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.ExecuteUbergraph_ScreenOverlay_HealthDamage");

	UScreenOverlay_HealthDamage_C_ExecuteUbergraph_ScreenOverlay_HealthDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
