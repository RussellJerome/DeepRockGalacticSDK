// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_ObjectivesBox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.CreateObjectiveWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObjective**             Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_ObjectivesBox_C::CreateObjectiveWidget(class UObjective** Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.CreateObjectiveWidget");

	UHUD_ObjectivesBox_C_CreateObjectiveWidget_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_ObjectivesBox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.Construct");

	UHUD_ObjectivesBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnObjectiveAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObjective**             Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_ObjectivesBox_C::OnObjectiveAdded(class UObjective** Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnObjectiveAdded");

	UHUD_ObjectivesBox_C_OnObjectiveAdded_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.Add Objective
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObjective**             Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_ObjectivesBox_C::Add_Objective(class UObjective** Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.Add Objective");

	UHUD_ObjectivesBox_C_Add_Objective_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnObjectiveUpdatedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObjective**             Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_ObjectivesBox_C::OnObjectiveUpdatedEvent(class UObjective** Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnObjectiveUpdatedEvent");

	UHUD_ObjectivesBox_C_OnObjectiveUpdatedEvent_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnLaserPointerPressed
// (BlueprintCallable, BlueprintEvent)

void UHUD_ObjectivesBox_C::OnLaserPointerPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnLaserPointerPressed");

	UHUD_ObjectivesBox_C_OnLaserPointerPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnLaserPointerReleased
// (BlueprintCallable, BlueprintEvent)

void UHUD_ObjectivesBox_C::OnLaserPointerReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnLaserPointerReleased");

	UHUD_ObjectivesBox_C_OnLaserPointerReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.ShowDynamically
// (BlueprintCallable, BlueprintEvent)

void UHUD_ObjectivesBox_C::ShowDynamically()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.ShowDynamically");

	UHUD_ObjectivesBox_C_ShowDynamically_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.Setup Deep Dive Label
// (BlueprintCallable, BlueprintEvent)

void UHUD_ObjectivesBox_C::Setup_Deep_Dive_Label()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.Setup Deep Dive Label");

	UHUD_ObjectivesBox_C_Setup_Deep_Dive_Label_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnGameEventCompletedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  GameEventName                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UHUD_ObjectivesBox_C::OnGameEventCompletedEvent(struct FText* GameEventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnGameEventCompletedEvent");

	UHUD_ObjectivesBox_C_OnGameEventCompletedEvent_Params params;
	params.GameEventName = GameEventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.SetVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          inVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          animate                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_ObjectivesBox_C::SetVisible(bool* inVisible, bool* animate)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.SetVisible");

	UHUD_ObjectivesBox_C_SetVisible_Params params;
	params.inVisible = inVisible;
	params.animate = animate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.AnimFinished
// (BlueprintCallable, BlueprintEvent)

void UHUD_ObjectivesBox_C::AnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.AnimFinished");

	UHUD_ObjectivesBox_C_AnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.ExecuteUbergraph_HUD_ObjectivesBox
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_ObjectivesBox_C::ExecuteUbergraph_HUD_ObjectivesBox(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.ExecuteUbergraph_HUD_ObjectivesBox");

	UHUD_ObjectivesBox_C_ExecuteUbergraph_HUD_ObjectivesBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
