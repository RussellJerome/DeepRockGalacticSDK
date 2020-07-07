// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_CrosshairManager_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_CrosshairManager.HUD_CrosshairManager_C.UnregisterEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UHUD_CrosshairManager_C::UnregisterEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.UnregisterEvents");

	UHUD_CrosshairManager_C_UnregisterEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 InDebugText                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UHUD_CrosshairManager_C::UpdateVisibility(class FString* InDebugText)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.UpdateVisibility");

	UHUD_CrosshairManager_C_UpdateVisibility_Params params;
	params.InDebugText = InDebugText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.SetCrosshair
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AItem**                  InEquippedItem                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CrosshairManager_C::SetCrosshair(class AItem** InEquippedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.SetCrosshair");

	UHUD_CrosshairManager_C_SetCrosshair_Params params;
	params.InEquippedItem = InEquippedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnToggleMapTool
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CrosshairManager_C::OnToggleMapTool(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnToggleMapTool");

	UHUD_CrosshairManager_C_OnToggleMapTool_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnDepositingEnd_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResourceBank**          ResourceBank                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_CrosshairManager_C::OnDepositingEnd_Event(class UResourceBank** ResourceBank)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnDepositingEnd_Event");

	UHUD_CrosshairManager_C_OnDepositingEnd_Event_Params params;
	params.ResourceBank = ResourceBank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnDepositingBegin_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResourceBank**          ResourceBank                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHUD_CrosshairManager_C::OnDepositingBegin_Event(class UResourceBank** ResourceBank)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnDepositingBegin_Event");

	UHUD_CrosshairManager_C_OnDepositingBegin_Event_Params params;
	params.ResourceBank = ResourceBank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnCameraModeChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharacterCameraMode*          NewCameraMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECharacterCameraMode*          OldCameraMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CrosshairManager_C::OnCameraModeChanged_Event(ECharacterCameraMode* NewCameraMode, ECharacterCameraMode* OldCameraMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnCameraModeChanged_Event");

	UHUD_CrosshairManager_C_OnCameraModeChanged_Event_Params params;
	params.NewCameraMode = NewCameraMode;
	params.OldCameraMode = OldCameraMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.Debug
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString*                 Msg                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor*           TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CrosshairManager_C::Debug(class FString* Msg, struct FLinearColor* TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.Debug");

	UHUD_CrosshairManager_C_Debug_Params params;
	params.Msg = Msg;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnCharacterStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharacterState*               NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CrosshairManager_C::OnCharacterStateChanged(ECharacterState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnCharacterStateChanged");

	UHUD_CrosshairManager_C_OnCharacterStateChanged_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_CrosshairManager_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.Destruct");

	UHUD_CrosshairManager_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_CrosshairManager_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.Construct");

	UHUD_CrosshairManager_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.On Inventory Ready
// (BlueprintCallable, BlueprintEvent)

void UHUD_CrosshairManager_C::On_Inventory_Ready()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.On Inventory Ready");

	UHUD_CrosshairManager_C_On_Inventory_Ready_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnItemsLoaded
// (BlueprintCallable, BlueprintEvent)

void UHUD_CrosshairManager_C::OnItemsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnItemsLoaded");

	UHUD_CrosshairManager_C_OnItemsLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.ExecuteUbergraph_HUD_CrosshairManager
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CrosshairManager_C::ExecuteUbergraph_HUD_CrosshairManager(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.ExecuteUbergraph_HUD_CrosshairManager");

	UHUD_CrosshairManager_C_ExecuteUbergraph_HUD_CrosshairManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
