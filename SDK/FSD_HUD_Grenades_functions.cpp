// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Grenades_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Grenades.HUD_Grenades_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Grenades_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Grenades.HUD_Grenades_C.PreConstruct");

	UHUD_Grenades_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Grenades.HUD_Grenades_C.OnGrenadeCountChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           CurrentCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Grenades_C::OnGrenadeCountChanged(int* CurrentCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Grenades.HUD_Grenades_C.OnGrenadeCountChanged");

	UHUD_Grenades_C_OnGrenadeCountChanged_Params params;
	params.CurrentCount = CurrentCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Grenades.HUD_Grenades_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_Grenades_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Grenades.HUD_Grenades_C.Construct");

	UHUD_Grenades_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Grenades.HUD_Grenades_C.Setup Dynamic HUD
// (BlueprintCallable, BlueprintEvent)

void UHUD_Grenades_C::Setup_Dynamic_HUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Grenades.HUD_Grenades_C.Setup Dynamic HUD");

	UHUD_Grenades_C_Setup_Dynamic_HUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Grenades.HUD_Grenades_C.OnItemEquipped_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Grenades_C::OnItemEquipped_Event(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Grenades.HUD_Grenades_C.OnItemEquipped_Event");

	UHUD_Grenades_C_OnItemEquipped_Event_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Grenades.HUD_Grenades_C.OnItemUnequipped_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Grenades_C::OnItemUnequipped_Event(class AItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Grenades.HUD_Grenades_C.OnItemUnequipped_Event");

	UHUD_Grenades_C_OnItemUnequipped_Event_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Grenades.HUD_Grenades_C.Update Visibility
// (BlueprintCallable, BlueprintEvent)

void UHUD_Grenades_C::Update_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Grenades.HUD_Grenades_C.Update Visibility");

	UHUD_Grenades_C_Update_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Grenades.HUD_Grenades_C.OnLaserPointerPressed
// (BlueprintCallable, BlueprintEvent)

void UHUD_Grenades_C::OnLaserPointerPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Grenades.HUD_Grenades_C.OnLaserPointerPressed");

	UHUD_Grenades_C_OnLaserPointerPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Grenades.HUD_Grenades_C.OnLaserPointerReleased
// (BlueprintCallable, BlueprintEvent)

void UHUD_Grenades_C::OnLaserPointerReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Grenades.HUD_Grenades_C.OnLaserPointerReleased");

	UHUD_Grenades_C_OnLaserPointerReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Grenades.HUD_Grenades_C.ExecuteUbergraph_HUD_Grenades
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Grenades_C::ExecuteUbergraph_HUD_Grenades(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Grenades.HUD_Grenades_C.ExecuteUbergraph_HUD_Grenades");

	UHUD_Grenades_C_ExecuteUbergraph_HUD_Grenades_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
