// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Oxygen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Oxygen.HUD_Oxygen_C.SetProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         CurrentProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Oxygen_C::SetProgress(float* CurrentProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Oxygen.HUD_Oxygen_C.SetProgress");

	UHUD_Oxygen_C_SetProgress_Params params;
	params.CurrentProgress = CurrentProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Oxygen.HUD_Oxygen_C.OnOxygenChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           oxygenLevel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Oxygen_C::OnOxygenChanged_Event_1(int* oxygenLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Oxygen.HUD_Oxygen_C.OnOxygenChanged_Event_1");

	UHUD_Oxygen_C_OnOxygenChanged_Event_1_Params params;
	params.oxygenLevel = oxygenLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Oxygen.HUD_Oxygen_C.OnOxygenReplenishingEvent_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Oxygen_C::OnOxygenReplenishingEvent_Event_1(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Oxygen.HUD_Oxygen_C.OnOxygenReplenishingEvent_Event_1");

	UHUD_Oxygen_C_OnOxygenReplenishingEvent_Event_1_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Oxygen.HUD_Oxygen_C.40PercentOxygenLeft
// (BlueprintCallable, BlueprintEvent)

void UHUD_Oxygen_C::_40PercentOxygenLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Oxygen.HUD_Oxygen_C.40PercentOxygenLeft");

	UHUD_Oxygen_C__40PercentOxygenLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Oxygen.HUD_Oxygen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_Oxygen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Oxygen.HUD_Oxygen_C.Construct");

	UHUD_Oxygen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Oxygen.HUD_Oxygen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Oxygen_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Oxygen.HUD_Oxygen_C.PreConstruct");

	UHUD_Oxygen_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Oxygen.HUD_Oxygen_C.ExecuteUbergraph_HUD_Oxygen
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Oxygen_C::ExecuteUbergraph_HUD_Oxygen(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Oxygen.HUD_Oxygen_C.ExecuteUbergraph_HUD_Oxygen");

	UHUD_Oxygen_C_ExecuteUbergraph_HUD_Oxygen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
