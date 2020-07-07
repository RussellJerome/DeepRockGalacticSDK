// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Flares_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Flares.HUD_Flares_C.CreateIcons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           IconCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Flares_C::CreateIcons(int* IconCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Flares.HUD_Flares_C.CreateIcons");

	UHUD_Flares_C_CreateIcons_Params params;
	params.IconCount = IconCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Flares.HUD_Flares_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Flares_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Flares.HUD_Flares_C.PreConstruct");

	UHUD_Flares_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Flares.HUD_Flares_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_Flares_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Flares.HUD_Flares_C.Construct");

	UHUD_Flares_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Flares.HUD_Flares_C.OnItemsLoaded
// (BlueprintCallable, BlueprintEvent)

void UHUD_Flares_C::OnItemsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Flares.HUD_Flares_C.OnItemsLoaded");

	UHUD_Flares_C_OnItemsLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Flares.HUD_Flares_C.OnFlareProduction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NextIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Flares_C::OnFlareProduction(int* NextIndex, float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Flares.HUD_Flares_C.OnFlareProduction");

	UHUD_Flares_C_OnFlareProduction_Params params;
	params.NextIndex = NextIndex;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Flares.HUD_Flares_C.Setup Dynamic HUD
// (BlueprintCallable, BlueprintEvent)

void UHUD_Flares_C::Setup_Dynamic_HUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Flares.HUD_Flares_C.Setup Dynamic HUD");

	UHUD_Flares_C_Setup_Dynamic_HUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Flares.HUD_Flares_C.OnFlareThrown_Event
// (BlueprintCallable, BlueprintEvent)

void UHUD_Flares_C::OnFlareThrown_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Flares.HUD_Flares_C.OnFlareThrown_Event");

	UHUD_Flares_C_OnFlareThrown_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Flares.HUD_Flares_C.OnFlareCountChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           CurrentCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryComponent**    Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_Flares_C::OnFlareCountChanged(int* CurrentCount, class UInventoryComponent** Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Flares.HUD_Flares_C.OnFlareCountChanged");

	UHUD_Flares_C_OnFlareCountChanged_Params params;
	params.CurrentCount = CurrentCount;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Flares.HUD_Flares_C.UpdateVisibility
// (BlueprintCallable, BlueprintEvent)

void UHUD_Flares_C::UpdateVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Flares.HUD_Flares_C.UpdateVisibility");

	UHUD_Flares_C_UpdateVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Flares.HUD_Flares_C.OnLaserPointerPressed
// (BlueprintCallable, BlueprintEvent)

void UHUD_Flares_C::OnLaserPointerPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Flares.HUD_Flares_C.OnLaserPointerPressed");

	UHUD_Flares_C_OnLaserPointerPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Flares.HUD_Flares_C.OnLaserPointerReleased_Event
// (BlueprintCallable, BlueprintEvent)

void UHUD_Flares_C::OnLaserPointerReleased_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Flares.HUD_Flares_C.OnLaserPointerReleased_Event");

	UHUD_Flares_C_OnLaserPointerReleased_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Flares.HUD_Flares_C.ExecuteUbergraph_HUD_Flares
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Flares_C::ExecuteUbergraph_HUD_Flares(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Flares.HUD_Flares_C.ExecuteUbergraph_HUD_Flares");

	UHUD_Flares_C_ExecuteUbergraph_HUD_Flares_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
