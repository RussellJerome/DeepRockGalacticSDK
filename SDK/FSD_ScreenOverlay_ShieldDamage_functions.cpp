// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ScreenOverlay_ShieldDamage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenOverlay_ShieldDamage_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.Tick");

	UScreenOverlay_ShieldDamage_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.OnArmorDamaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenOverlay_ShieldDamage_C::OnArmorDamaged(float* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.OnArmorDamaged");

	UScreenOverlay_ShieldDamage_C_OnArmorDamaged_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.Begin Splat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenOverlay_ShieldDamage_C::Begin_Splat(float* Duration, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.Begin Splat");

	UScreenOverlay_ShieldDamage_C_Begin_Splat_Params params;
	params.Duration = Duration;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScreenOverlay_ShieldDamage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.Construct");

	UScreenOverlay_ShieldDamage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.OnCharacterStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharacterState*               NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenOverlay_ShieldDamage_C::OnCharacterStateChanged(ECharacterState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.OnCharacterStateChanged");

	UScreenOverlay_ShieldDamage_C_OnCharacterStateChanged_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.End Splat
// (BlueprintCallable, BlueprintEvent)

void UScreenOverlay_ShieldDamage_C::End_Splat()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.End Splat");

	UScreenOverlay_ShieldDamage_C_End_Splat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.OnCameraModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharacterCameraMode*          NewCameraMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECharacterCameraMode*          OldCameraMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenOverlay_ShieldDamage_C::OnCameraModeChanged(ECharacterCameraMode* NewCameraMode, ECharacterCameraMode* OldCameraMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.OnCameraModeChanged");

	UScreenOverlay_ShieldDamage_C_OnCameraModeChanged_Params params;
	params.NewCameraMode = NewCameraMode;
	params.OldCameraMode = OldCameraMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.ExecuteUbergraph_ScreenOverlay_ShieldDamage
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScreenOverlay_ShieldDamage_C::ExecuteUbergraph_ScreenOverlay_ShieldDamage(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.ExecuteUbergraph_ScreenOverlay_ShieldDamage");

	UScreenOverlay_ShieldDamage_C_ExecuteUbergraph_ScreenOverlay_ShieldDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
