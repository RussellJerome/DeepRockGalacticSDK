#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Health_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_Health_Base.HUD_Health_Base_C.SetHealthBarAlpha
struct UHUD_Health_Base_C_SetHealthBarAlpha_Params
{
	float*                                             alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Health_Base.HUD_Health_Base_C.HasLowHealth
struct UHUD_Health_Base_C_HasLowHealth_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUD_Health_Base.HUD_Health_Base_C.HealthChanged
struct UHUD_Health_Base_C_HealthChanged_Params
{
	float*                                             Health;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Health_Base.HUD_Health_Base_C.Bind Health Component
struct UHUD_Health_Base_C_Bind_Health_Component_Params
{
	class UPlayerHealthComponent**                     HealthComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_Health_Base.HUD_Health_Base_C.PreConstruct
struct UHUD_Health_Base_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Health_Base.HUD_Health_Base_C.Set Health Pct
struct UHUD_Health_Base_C_Set_Health_Pct_Params
{
	float*                                             InPercent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Health_Base.HUD_Health_Base_C.Unbind Health Component
struct UHUD_Health_Base_C_Unbind_Health_Component_Params
{
};

// Function HUD_Health_Base.HUD_Health_Base_C.Bind To Player
struct UHUD_Health_Base_C_Bind_To_Player_Params
{
	class APlayerCharacter**                           Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Health_Base.HUD_Health_Base_C.OnHealthRegeneratingChanged_Event
struct UHUD_Health_Base_C_OnHealthRegeneratingChanged_Event_Params
{
	bool*                                              isRegenerating;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Health_Base.HUD_Health_Base_C.Unbind HealthChanged
struct UHUD_Health_Base_C_Unbind_HealthChanged_Params
{
};

// Function HUD_Health_Base.HUD_Health_Base_C.Unbind Regenerating Changed
struct UHUD_Health_Base_C_Unbind_Regenerating_Changed_Params
{
};

// Function HUD_Health_Base.HUD_Health_Base_C.Tick
struct UHUD_Health_Base_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Health_Base.HUD_Health_Base_C.ExecuteUbergraph_HUD_Health_Base
struct UHUD_Health_Base_C_ExecuteUbergraph_HUD_Health_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
