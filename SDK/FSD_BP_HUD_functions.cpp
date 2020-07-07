// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_HUD_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_HUD.BP_HUD_C.IsInitialized
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HUD_C::IsInitialized(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.IsInitialized");

	ABP_HUD_C_IsInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_HUD.BP_HUD_C.CreateQuickCheatsIfNotCreated
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HUD_C::CreateQuickCheatsIfNotCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.CreateQuickCheatsIfNotCreated");

	ABP_HUD_C_CreateQuickCheatsIfNotCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD.BP_HUD_C.PushEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                EventWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          Left                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUD_C::PushEvent(class UWidget** EventWidget, bool* Left)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.PushEvent");

	ABP_HUD_C_PushEvent_Params params;
	params.EventWidget = EventWidget;
	params.Left = Left;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD.BP_HUD_C.CreateCheatsIfNotCreated
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HUD_C::CreateCheatsIfNotCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.CreateCheatsIfNotCreated");

	ABP_HUD_C_CreateCheatsIfNotCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD.BP_HUD_C.RemoveAllWidgetsFromParents
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HUD_C::RemoveAllWidgetsFromParents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.RemoveAllWidgetsFromParents");

	ABP_HUD_C_RemoveAllWidgetsFromParents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD.BP_HUD_C.AddAllWidgetToViewport
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HUD_C::AddAllWidgetToViewport()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.AddAllWidgetToViewport");

	ABP_HUD_C_AddAllWidgetToViewport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD.BP_HUD_C.AddWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_HUD_C::AddWidget(class UClass** Class, class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.AddWidget");

	ABP_HUD_C_AddWidget_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BP_HUD.BP_HUD_C.OnLoaded_73E4B65F44516401F86CB88F7530B278
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUD_C::OnLoaded_73E4B65F44516401F86CB88F7530B278(class UClass** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.OnLoaded_73E4B65F44516401F86CB88F7530B278");

	ABP_HUD_C_OnLoaded_73E4B65F44516401F86CB88F7530B278_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD.BP_HUD_C.PlayerSpawned
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUD_C::PlayerSpawned(class APlayerCharacter** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.PlayerSpawned");

	ABP_HUD_C_PlayerSpawned_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD.BP_HUD_C.RadarPointAdded
// (Event, Public, BlueprintEvent)
// Parameters:
// class URadarPointComponent**   radarPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_HUD_C::RadarPointAdded(class URadarPointComponent** radarPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.RadarPointAdded");

	ABP_HUD_C_RadarPointAdded_Params params;
	params.radarPoint = radarPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD.BP_HUD_C.HandleSeamlessTravel
// (Event, Public, BlueprintEvent)

void ABP_HUD_C::HandleSeamlessTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.HandleSeamlessTravel");

	ABP_HUD_C_HandleSeamlessTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD.BP_HUD_C.OnVisibilityChanged
// (Event, Protected, BlueprintEvent)

void ABP_HUD_C::OnVisibilityChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.OnVisibilityChanged");

	ABP_HUD_C_OnVisibilityChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD.BP_HUD_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_HUD_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.ReceiveDestroyed");

	ABP_HUD_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD.BP_HUD_C.OnHit_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageClass**           DamageClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          anyHealthLost                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUD_C::OnHit_Event(float* Damage, class UDamageClass** DamageClass, class AActor** DamageCauser, bool* anyHealthLost)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.OnHit_Event");

	ABP_HUD_C_OnHit_Event_Params params;
	params.Damage = Damage;
	params.DamageClass = DamageClass;
	params.DamageCauser = DamageCauser;
	params.anyHealthLost = anyHealthLost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD.BP_HUD_C.OnEndLevelReceived_Event
// (BlueprintCallable, BlueprintEvent)

void ABP_HUD_C::OnEndLevelReceived_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.OnEndLevelReceived_Event");

	ABP_HUD_C_OnEndLevelReceived_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD.BP_HUD_C.OnShowMainMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_HUD_C::OnShowMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.OnShowMainMenu");

	ABP_HUD_C_OnShowMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD.BP_HUD_C.QuickCheatMenuRequest
// (BlueprintCallable, BlueprintEvent)

void ABP_HUD_C::QuickCheatMenuRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.QuickCheatMenuRequest");

	ABP_HUD_C_QuickCheatMenuRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD.BP_HUD_C.CheatMenuRequest
// (BlueprintCallable, BlueprintEvent)

void ABP_HUD_C::CheatMenuRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.CheatMenuRequest");

	ABP_HUD_C_CheatMenuRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUD.BP_HUD_C.ExecuteUbergraph_BP_HUD
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUD_C::ExecuteUbergraph_BP_HUD(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.ExecuteUbergraph_BP_HUD");

	ABP_HUD_C_ExecuteUbergraph_BP_HUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
