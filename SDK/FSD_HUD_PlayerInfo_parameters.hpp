#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_PlayerInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_PlayerInfo.HUD_PlayerInfo_C.SetElementVisibility
struct UHUD_PlayerInfo_C_SetElementVisibility_Params
{
	bool*                                              Name,_Class___Icon;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Health___Shield;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerInfo.HUD_PlayerInfo_C.ShowDynamically
struct UHUD_PlayerInfo_C_ShowDynamically_Params
{
};

// Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnCharacterStateChanged_Event
struct UHUD_PlayerInfo_C_OnCharacterStateChanged_Event_Params
{
	ECharacterState*                                   NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnHealthChanged_Event
struct UHUD_PlayerInfo_C_OnHealthChanged_Event_Params
{
	float*                                             Health;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnLaserPointerPressed_Event
struct UHUD_PlayerInfo_C_OnLaserPointerPressed_Event_Params
{
};

// Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnLaserPointerReleased_Event
struct UHUD_PlayerInfo_C_OnLaserPointerReleased_Event_Params
{
};

// Function HUD_PlayerInfo.HUD_PlayerInfo_C.VisibilityModeChanged
struct UHUD_PlayerInfo_C_VisibilityModeChanged_Params
{
};

// Function HUD_PlayerInfo.HUD_PlayerInfo_C.BndEvt__HG_ClassName_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature
struct UHUD_PlayerInfo_C_BndEvt__HG_ClassName_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature_Params
{
	class UHUDVisibilityGroup**                        Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerInfo.HUD_PlayerInfo_C.BndEvt__HG_HealthShield_K2Node_ComponentBoundEvent_3_VisibilityDelegate__DelegateSignature
struct UHUD_PlayerInfo_C_BndEvt__HG_HealthShield_K2Node_ComponentBoundEvent_3_VisibilityDelegate__DelegateSignature_Params
{
	class UHUDVisibilityGroup**                        Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnFirePressed_Event
struct UHUD_PlayerInfo_C_OnFirePressed_Event_Params
{
};

// Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnFireReleased_Event
struct UHUD_PlayerInfo_C_OnFireReleased_Event_Params
{
};

// Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnSupplyStatusChangedEvent
struct UHUD_PlayerInfo_C_OnSupplyStatusChangedEvent_Params
{
	float*                                             ammoStatus01;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             healthStatus01;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerInfo.HUD_PlayerInfo_C.ShowAmmoCounter
struct UHUD_PlayerInfo_C_ShowAmmoCounter_Params
{
};

// Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnBeginHoveringEvent
struct UHUD_PlayerInfo_C_OnBeginHoveringEvent_Params
{
	class UUsableComponentBase**                       Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_PlayerInfo.HUD_PlayerInfo_C.OnEndHoveringEvent_Event
struct UHUD_PlayerInfo_C_OnEndHoveringEvent_Event_Params
{
};

// Function HUD_PlayerInfo.HUD_PlayerInfo_C.PreConstruct
struct UHUD_PlayerInfo_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerInfo.HUD_PlayerInfo_C.Construct
struct UHUD_PlayerInfo_C_Construct_Params
{
};

// Function HUD_PlayerInfo.HUD_PlayerInfo_C.ExecuteUbergraph_HUD_PlayerInfo
struct UHUD_PlayerInfo_C_ExecuteUbergraph_HUD_PlayerInfo_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
