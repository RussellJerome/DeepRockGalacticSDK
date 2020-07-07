// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Frozen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Frozen.HUD_Frozen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Frozen_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Frozen.HUD_Frozen_C.PreConstruct");

	UHUD_Frozen_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Frozen.HUD_Frozen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_Frozen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Frozen.HUD_Frozen_C.Construct");

	UHUD_Frozen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Frozen.HUD_Frozen_C.OnCharacterStateChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharacterState*               NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Frozen_C::OnCharacterStateChanged_Event(ECharacterState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Frozen.HUD_Frozen_C.OnCharacterStateChanged_Event");

	UHUD_Frozen_C_OnCharacterStateChanged_Event_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Frozen.HUD_Frozen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Frozen_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Frozen.HUD_Frozen_C.Tick");

	UHUD_Frozen_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Frozen.HUD_Frozen_C.SetProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         CurrentProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Frozen_C::SetProgress(float* CurrentProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Frozen.HUD_Frozen_C.SetProgress");

	UHUD_Frozen_C_SetProgress_Params params;
	params.CurrentProgress = CurrentProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Frozen.HUD_Frozen_C.ExecuteUbergraph_HUD_Frozen
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Frozen_C::ExecuteUbergraph_HUD_Frozen(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Frozen.HUD_Frozen_C.ExecuteUbergraph_HUD_Frozen");

	UHUD_Frozen_C_ExecuteUbergraph_HUD_Frozen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
