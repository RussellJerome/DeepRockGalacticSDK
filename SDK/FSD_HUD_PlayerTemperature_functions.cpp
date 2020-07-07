// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_PlayerTemperature_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.SetFaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          FadeOut                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerTemperature_C::SetFaded(bool* FadeOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.SetFaded");

	UHUD_PlayerTemperature_C_SetFaded_Params params;
	params.FadeOut = FadeOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.UpdateTemperature
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InTemperature                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         InChange                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerTemperature_C::UpdateTemperature(float* InTemperature, float* InChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.UpdateTemperature");

	UHUD_PlayerTemperature_C_UpdateTemperature_Params params;
	params.InTemperature = InTemperature;
	params.InChange = InChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.UpdateArrows
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_PlayerTemperature_C::UpdateArrows()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.UpdateArrows");

	UHUD_PlayerTemperature_C_UpdateArrows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_PlayerTemperature_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.Construct");

	UHUD_PlayerTemperature_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnTemperatureChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Temperature                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Change                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerTemperature_C::OnTemperatureChanged(float* Temperature, float* Change)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnTemperatureChanged");

	UHUD_PlayerTemperature_C_OnTemperatureChanged_Params params;
	params.Temperature = Temperature;
	params.Change = Change;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerTemperature_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.PreConstruct");

	UHUD_PlayerTemperature_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnTemperatureChangeRate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ChangeRate                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerTemperature_C::OnTemperatureChangeRate_Event(int* ChangeRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnTemperatureChangeRate_Event");

	UHUD_PlayerTemperature_C_OnTemperatureChangeRate_Event_Params params;
	params.ChangeRate = ChangeRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.ShowTemperature
// (BlueprintCallable, BlueprintEvent)

void UHUD_PlayerTemperature_C::ShowTemperature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.ShowTemperature");

	UHUD_PlayerTemperature_C_ShowTemperature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnBarVisibilityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          barVisible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerTemperature_C::OnBarVisibilityChanged(bool* barVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnBarVisibilityChanged");

	UHUD_PlayerTemperature_C_OnBarVisibilityChanged_Params params;
	params.barVisible = barVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnTemperatureStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerTemperatureState*       State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerTemperature_C::OnTemperatureStateChanged(EPlayerTemperatureState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnTemperatureStateChanged");

	UHUD_PlayerTemperature_C_OnTemperatureStateChanged_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.ExecuteUbergraph_HUD_PlayerTemperature
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_PlayerTemperature_C::ExecuteUbergraph_HUD_PlayerTemperature(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.ExecuteUbergraph_HUD_PlayerTemperature");

	UHUD_PlayerTemperature_C_ExecuteUbergraph_HUD_PlayerTemperature_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
