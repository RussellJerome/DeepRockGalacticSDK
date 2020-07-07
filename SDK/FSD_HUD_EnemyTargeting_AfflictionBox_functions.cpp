// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_EnemyTargeting_AfflictionBox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.SetAfflictionComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPawnAfflictionComponent** InAfflictionComponent          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_EnemyTargeting_AfflictionBox_C::SetAfflictionComponent(class UPawnAfflictionComponent** InAfflictionComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.SetAfflictionComponent");

	UHUD_EnemyTargeting_AfflictionBox_C_SetAfflictionComponent_Params params;
	params.InAfflictionComponent = InAfflictionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ToggleIgnoreAfflictions
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPawnAffliction*> affliction                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          ShouldIgnore                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_EnemyTargeting_AfflictionBox_C::ToggleIgnoreAfflictions(bool* ShouldIgnore, TArray<class UPawnAffliction*>* affliction)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ToggleIgnoreAfflictions");

	UHUD_EnemyTargeting_AfflictionBox_C_ToggleIgnoreAfflictions_Params params;
	params.ShouldIgnore = ShouldIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (affliction != nullptr)
		*affliction = params.affliction;
}


// Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ToggleIgnoreAffliction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPawnAffliction**        affliction                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShouldIgnore                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_EnemyTargeting_AfflictionBox_C::ToggleIgnoreAffliction(class UPawnAffliction** affliction, bool* ShouldIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ToggleIgnoreAffliction");

	UHUD_EnemyTargeting_AfflictionBox_C_ToggleIgnoreAffliction_Params params;
	params.affliction = affliction;
	params.ShouldIgnore = ShouldIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ClearAfflictions
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_EnemyTargeting_AfflictionBox_C::ClearAfflictions()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ClearAfflictions");

	UHUD_EnemyTargeting_AfflictionBox_C_ClearAfflictions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ToggleAffliction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPawnAffliction**        InAffliction                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          inVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_EnemyTargeting_AfflictionBox_C::ToggleAffliction(class UPawnAffliction** InAffliction, bool* inVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ToggleAffliction");

	UHUD_EnemyTargeting_AfflictionBox_C_ToggleAffliction_Params params;
	params.InAffliction = InAffliction;
	params.inVisible = inVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.SetTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 InAfflictionTarget             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_EnemyTargeting_AfflictionBox_C::SetTarget(class AActor** InAfflictionTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.SetTarget");

	UHUD_EnemyTargeting_AfflictionBox_C_SetTarget_Params params;
	params.InAfflictionTarget = InAfflictionTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.OnAfflictionActivatedEvent_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPawnAffliction**        affliction                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_EnemyTargeting_AfflictionBox_C::OnAfflictionActivatedEvent_Event(class UPawnAffliction** affliction)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.OnAfflictionActivatedEvent_Event");

	UHUD_EnemyTargeting_AfflictionBox_C_OnAfflictionActivatedEvent_Event_Params params;
	params.affliction = affliction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.OnAfflictionDeactivatedEvent_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPawnAffliction**        affliction                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_EnemyTargeting_AfflictionBox_C::OnAfflictionDeactivatedEvent_Event(class UPawnAffliction** affliction)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.OnAfflictionDeactivatedEvent_Event");

	UHUD_EnemyTargeting_AfflictionBox_C_OnAfflictionDeactivatedEvent_Event_Params params;
	params.affliction = affliction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_EnemyTargeting_AfflictionBox_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.PreConstruct");

	UHUD_EnemyTargeting_AfflictionBox_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ExecuteUbergraph_HUD_EnemyTargeting_AfflictionBox
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_EnemyTargeting_AfflictionBox_C::ExecuteUbergraph_HUD_EnemyTargeting_AfflictionBox(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting_AfflictionBox.HUD_EnemyTargeting_AfflictionBox_C.ExecuteUbergraph_HUD_EnemyTargeting_AfflictionBox");

	UHUD_EnemyTargeting_AfflictionBox_C_ExecuteUbergraph_HUD_EnemyTargeting_AfflictionBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
