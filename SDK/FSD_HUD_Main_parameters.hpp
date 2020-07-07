#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Main_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_Main.HUD_Main_C.ToggleHUD
struct UHUD_Main_C_ToggleHUD_Params
{
	bool*                                              IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Instant;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Main.HUD_Main_C.Destruct
struct UHUD_Main_C_Destruct_Params
{
};

// Function HUD_Main.HUD_Main_C.AllDwarvesDown
struct UHUD_Main_C_AllDwarvesDown_Params
{
};

// Function HUD_Main.HUD_Main_C.OnCameraModeChanged
struct UHUD_Main_C_OnCameraModeChanged_Params
{
	ECharacterCameraMode*                              NewCameraMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECharacterCameraMode*                              OldCameraMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Main.HUD_Main_C.UpdateCurrentCanvas
struct UHUD_Main_C_UpdateCurrentCanvas_Params
{
};

// Function HUD_Main.HUD_Main_C.OnCharacterStateChanged
struct UHUD_Main_C_OnCharacterStateChanged_Params
{
	ECharacterState*                                   NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Main.HUD_Main_C.PushEvent
struct UHUD_Main_C_PushEvent_Params
{
	class UWidget**                                    EventWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              Left;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Main.HUD_Main_C.Setup HUD Elements
struct UHUD_Main_C_Setup_HUD_Elements_Params
{
};

// Function HUD_Main.HUD_Main_C.Tick
struct UHUD_Main_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Main.HUD_Main_C.Construct
struct UHUD_Main_C_Construct_Params
{
};

// Function HUD_Main.HUD_Main_C.BndEvt__VG_Flashlight_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature
struct UHUD_Main_C_BndEvt__VG_Flashlight_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature_Params
{
	class UHUDVisibilityGroup**                        Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Main.HUD_Main_C.BndEvt__VG_Flares_K2Node_ComponentBoundEvent_1_VisibilityDelegate__DelegateSignature
struct UHUD_Main_C_BndEvt__VG_Flares_K2Node_ComponentBoundEvent_1_VisibilityDelegate__DelegateSignature_Params
{
	class UHUDVisibilityGroup**                        Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Main.HUD_Main_C.BndEvt__VG_Grenades_K2Node_ComponentBoundEvent_0_VisibilityDelegate__DelegateSignature
struct UHUD_Main_C_BndEvt__VG_Grenades_K2Node_ComponentBoundEvent_0_VisibilityDelegate__DelegateSignature_Params
{
	class UHUDVisibilityGroup**                        Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Main.HUD_Main_C.RefreshHUDElements
struct UHUD_Main_C_RefreshHUDElements_Params
{
};

// Function HUD_Main.HUD_Main_C.ExecuteUbergraph_HUD_Main
struct UHUD_Main_C_ExecuteUbergraph_HUD_Main_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
