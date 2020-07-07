// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Main_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Main.HUD_Main_C.ToggleHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Main_C::ToggleHUD(bool* IsVisible, bool* Instant)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.ToggleHUD");

	UHUD_Main_C_ToggleHUD_Params params;
	params.IsVisible = IsVisible;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Main.HUD_Main_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_Main_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.Destruct");

	UHUD_Main_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Main.HUD_Main_C.AllDwarvesDown
// (BlueprintCallable, BlueprintEvent)

void UHUD_Main_C::AllDwarvesDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.AllDwarvesDown");

	UHUD_Main_C_AllDwarvesDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Main.HUD_Main_C.OnCameraModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharacterCameraMode*          NewCameraMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ECharacterCameraMode*          OldCameraMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Main_C::OnCameraModeChanged(ECharacterCameraMode* NewCameraMode, ECharacterCameraMode* OldCameraMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.OnCameraModeChanged");

	UHUD_Main_C_OnCameraModeChanged_Params params;
	params.NewCameraMode = NewCameraMode;
	params.OldCameraMode = OldCameraMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Main.HUD_Main_C.UpdateCurrentCanvas
// (BlueprintCallable, BlueprintEvent)

void UHUD_Main_C::UpdateCurrentCanvas()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.UpdateCurrentCanvas");

	UHUD_Main_C_UpdateCurrentCanvas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Main.HUD_Main_C.OnCharacterStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECharacterState*               NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Main_C::OnCharacterStateChanged(ECharacterState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.OnCharacterStateChanged");

	UHUD_Main_C_OnCharacterStateChanged_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Main.HUD_Main_C.PushEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                EventWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          Left                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Main_C::PushEvent(class UWidget** EventWidget, bool* Left)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.PushEvent");

	UHUD_Main_C_PushEvent_Params params;
	params.EventWidget = EventWidget;
	params.Left = Left;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Main.HUD_Main_C.Setup HUD Elements
// (BlueprintCallable, BlueprintEvent)

void UHUD_Main_C::Setup_HUD_Elements()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.Setup HUD Elements");

	UHUD_Main_C_Setup_HUD_Elements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Main.HUD_Main_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Main_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.Tick");

	UHUD_Main_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Main.HUD_Main_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_Main_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.Construct");

	UHUD_Main_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Main.HUD_Main_C.BndEvt__VG_Flashlight_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UHUDVisibilityGroup**    Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Main_C::BndEvt__VG_Flashlight_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature(class UHUDVisibilityGroup** Group, bool* IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.BndEvt__VG_Flashlight_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature");

	UHUD_Main_C_BndEvt__VG_Flashlight_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature_Params params;
	params.Group = Group;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Main.HUD_Main_C.BndEvt__VG_Flares_K2Node_ComponentBoundEvent_1_VisibilityDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UHUDVisibilityGroup**    Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Main_C::BndEvt__VG_Flares_K2Node_ComponentBoundEvent_1_VisibilityDelegate__DelegateSignature(class UHUDVisibilityGroup** Group, bool* IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.BndEvt__VG_Flares_K2Node_ComponentBoundEvent_1_VisibilityDelegate__DelegateSignature");

	UHUD_Main_C_BndEvt__VG_Flares_K2Node_ComponentBoundEvent_1_VisibilityDelegate__DelegateSignature_Params params;
	params.Group = Group;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Main.HUD_Main_C.BndEvt__VG_Grenades_K2Node_ComponentBoundEvent_0_VisibilityDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UHUDVisibilityGroup**    Group                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Main_C::BndEvt__VG_Grenades_K2Node_ComponentBoundEvent_0_VisibilityDelegate__DelegateSignature(class UHUDVisibilityGroup** Group, bool* IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.BndEvt__VG_Grenades_K2Node_ComponentBoundEvent_0_VisibilityDelegate__DelegateSignature");

	UHUD_Main_C_BndEvt__VG_Grenades_K2Node_ComponentBoundEvent_0_VisibilityDelegate__DelegateSignature_Params params;
	params.Group = Group;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Main.HUD_Main_C.RefreshHUDElements
// (BlueprintCallable, BlueprintEvent)

void UHUD_Main_C::RefreshHUDElements()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.RefreshHUDElements");

	UHUD_Main_C_RefreshHUDElements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Main.HUD_Main_C.ExecuteUbergraph_HUD_Main
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Main_C::ExecuteUbergraph_HUD_Main(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.ExecuteUbergraph_HUD_Main");

	UHUD_Main_C_ExecuteUbergraph_HUD_Main_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
