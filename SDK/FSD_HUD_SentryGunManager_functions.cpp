// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_SentryGunManager_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_SentryGunManager.HUD_SentryGunManager_C.ItemEquipped
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsEquipped                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryGunManager_C::ItemEquipped(bool* IsEquipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.ItemEquipped");

	UHUD_SentryGunManager_C_ItemEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEquipped != nullptr)
		*IsEquipped = params.IsEquipped;
}


// Function HUD_SentryGunManager.HUD_SentryGunManager_C.OutOfAmmo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OutOfAmmo                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryGunManager_C::OutOfAmmo(bool* OutOfAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.OutOfAmmo");

	UHUD_SentryGunManager_C_OutOfAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutOfAmmo != nullptr)
		*OutOfAmmo = params.OutOfAmmo;
}


// Function HUD_SentryGunManager.HUD_SentryGunManager_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryGunManager_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.PreConstruct");

	UHUD_SentryGunManager_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryGunManager.HUD_SentryGunManager_C.AddSentry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryGunManager_C::AddSentry(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.AddSentry");

	UHUD_SentryGunManager_C_AddSentry_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryGunManager.HUD_SentryGunManager_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_SentryGunManager_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.Construct");

	UHUD_SentryGunManager_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnItemsLoaded
// (BlueprintCallable, BlueprintEvent)

void UHUD_SentryGunManager_C::OnItemsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnItemsLoaded");

	UHUD_SentryGunManager_C_OnItemsLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnActiveItemsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARecallableSentryGunItem** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryGunManager_C::OnActiveItemsChanged(class ARecallableSentryGunItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnActiveItemsChanged");

	UHUD_SentryGunManager_C_OnActiveItemsChanged_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnItemCurrentAmountChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryGunManager_C::OnItemCurrentAmountChanged(int* amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnItemCurrentAmountChanged");

	UHUD_SentryGunManager_C_OnItemCurrentAmountChanged_Params params;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryGunManager.HUD_SentryGunManager_C.Update Dynamic Visibility
// (BlueprintCallable, BlueprintEvent)

void UHUD_SentryGunManager_C::Update_Dynamic_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.Update Dynamic Visibility");

	UHUD_SentryGunManager_C_Update_Dynamic_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnSentryStateChanged_Event
// (BlueprintCallable, BlueprintEvent)

void UHUD_SentryGunManager_C::OnSentryStateChanged_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnSentryStateChanged_Event");

	UHUD_SentryGunManager_C_OnSentryStateChanged_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryGunManager.HUD_SentryGunManager_C.Setup Dynamic Visibility
// (BlueprintCallable, BlueprintEvent)

void UHUD_SentryGunManager_C::Setup_Dynamic_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.Setup Dynamic Visibility");

	UHUD_SentryGunManager_C_Setup_Dynamic_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnLaserPointerPressed_Event
// (BlueprintCallable, BlueprintEvent)

void UHUD_SentryGunManager_C::OnLaserPointerPressed_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnLaserPointerPressed_Event");

	UHUD_SentryGunManager_C_OnLaserPointerPressed_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnLaserPointerReleased_Event
// (BlueprintCallable, BlueprintEvent)

void UHUD_SentryGunManager_C::OnLaserPointerReleased_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.OnLaserPointerReleased_Event");

	UHUD_SentryGunManager_C_OnLaserPointerReleased_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_SentryGunManager.HUD_SentryGunManager_C.ExecuteUbergraph_HUD_SentryGunManager
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_SentryGunManager_C::ExecuteUbergraph_HUD_SentryGunManager(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryGunManager.HUD_SentryGunManager_C.ExecuteUbergraph_HUD_SentryGunManager");

	UHUD_SentryGunManager_C_ExecuteUbergraph_HUD_SentryGunManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
