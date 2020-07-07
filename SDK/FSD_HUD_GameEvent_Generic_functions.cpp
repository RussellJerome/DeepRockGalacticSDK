// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_GameEvent_Generic_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.RegisterGameEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameEvent**             GameEvent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_GameEvent_Generic_C::RegisterGameEvent(class AGameEvent** GameEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.RegisterGameEvent");

	UHUD_GameEvent_Generic_C_RegisterGameEvent_Params params;
	params.GameEvent = GameEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.UpdateTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         CurrentProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_GameEvent_Generic_C::UpdateTime(float* CurrentProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.UpdateTime");

	UHUD_GameEvent_Generic_C_UpdateTime_Params params;
	params.CurrentProgress = CurrentProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.Shutdown
// (BlueprintCallable, BlueprintEvent)

void UHUD_GameEvent_Generic_C::Shutdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.Shutdown");

	UHUD_GameEvent_Generic_C_Shutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_GameEvent_Generic_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.Construct");

	UHUD_GameEvent_Generic_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.ProgressChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         CurrentProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_GameEvent_Generic_C::ProgressChanged(float* CurrentProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.ProgressChanged");

	UHUD_GameEvent_Generic_C_ProgressChanged_Params params;
	params.CurrentProgress = CurrentProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.NumberObjectivesChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           stageCompleted                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_GameEvent_Generic_C::NumberObjectivesChanged(int* stageCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.NumberObjectivesChanged");

	UHUD_GameEvent_Generic_C_NumberObjectivesChanged_Params params;
	params.stageCompleted = stageCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_GameEvent_Generic_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.PreConstruct");

	UHUD_GameEvent_Generic_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.ExecuteUbergraph_HUD_GameEvent_Generic
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_GameEvent_Generic_C::ExecuteUbergraph_HUD_GameEvent_Generic(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.ExecuteUbergraph_HUD_GameEvent_Generic");

	UHUD_GameEvent_Generic_C_ExecuteUbergraph_HUD_GameEvent_Generic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
