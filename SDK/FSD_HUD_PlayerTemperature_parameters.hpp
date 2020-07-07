#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_PlayerTemperature_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.SetFaded
struct UHUD_PlayerTemperature_C_SetFaded_Params
{
	bool*                                              FadeOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.UpdateTemperature
struct UHUD_PlayerTemperature_C_UpdateTemperature_Params
{
	float*                                             InTemperature;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InChange;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.UpdateArrows
struct UHUD_PlayerTemperature_C_UpdateArrows_Params
{
};

// Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.Construct
struct UHUD_PlayerTemperature_C_Construct_Params
{
};

// Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnTemperatureChanged
struct UHUD_PlayerTemperature_C_OnTemperatureChanged_Params
{
	float*                                             Temperature;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Change;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.PreConstruct
struct UHUD_PlayerTemperature_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnTemperatureChangeRate_Event
struct UHUD_PlayerTemperature_C_OnTemperatureChangeRate_Event_Params
{
	int*                                               ChangeRate;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.ShowTemperature
struct UHUD_PlayerTemperature_C_ShowTemperature_Params
{
};

// Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnBarVisibilityChanged
struct UHUD_PlayerTemperature_C_OnBarVisibilityChanged_Params
{
	bool*                                              barVisible;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnTemperatureStateChanged
struct UHUD_PlayerTemperature_C_OnTemperatureStateChanged_Params
{
	EPlayerTemperatureState*                           State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.ExecuteUbergraph_HUD_PlayerTemperature
struct UHUD_PlayerTemperature_C_ExecuteUbergraph_HUD_PlayerTemperature_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
