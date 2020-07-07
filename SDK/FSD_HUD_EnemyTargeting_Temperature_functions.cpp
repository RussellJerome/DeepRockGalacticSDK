// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_EnemyTargeting_Temperature_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C.SetColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Fill_Color                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           BackgroundColor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Revert                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_EnemyTargeting_Temperature_C::SetColors(struct FLinearColor* Fill_Color, struct FLinearColor* BackgroundColor, bool* Revert)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C.SetColors");

	UHUD_EnemyTargeting_Temperature_C_SetColors_Params params;
	params.Fill_Color = Fill_Color;
	params.BackgroundColor = BackgroundColor;
	params.Revert = Revert;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C.SetTemperatureEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InEffect                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_EnemyTargeting_Temperature_C::SetTemperatureEffect(float* InEffect, bool* Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C.SetTemperatureEffect");

	UHUD_EnemyTargeting_Temperature_C_SetTemperatureEffect_Params params;
	params.InEffect = InEffect;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_EnemyTargeting_Temperature_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C.Tick");

	UHUD_EnemyTargeting_Temperature_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_EnemyTargeting_Temperature_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C.PreConstruct");

	UHUD_EnemyTargeting_Temperature_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C.ExecuteUbergraph_HUD_EnemyTargeting_Temperature
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_EnemyTargeting_Temperature_C::ExecuteUbergraph_HUD_EnemyTargeting_Temperature(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_Temperature.HUD_EnemyTargeting_Temperature_C.ExecuteUbergraph_HUD_EnemyTargeting_Temperature");

	UHUD_EnemyTargeting_Temperature_C_ExecuteUbergraph_HUD_EnemyTargeting_Temperature_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
