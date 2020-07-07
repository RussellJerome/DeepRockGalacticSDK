#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_BoscoAbillityIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.SetProgress
struct UHUD_BoscoAbillityIcon_C_SetProgress_Params
{
	float*                                             Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              DisableAnim;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.Init
struct UHUD_BoscoAbillityIcon_C_Init_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBoscoAbillityComponent**                    Abillity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.PreConstruct
struct UHUD_BoscoAbillityIcon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.On Flare Production Finished
struct UHUD_BoscoAbillityIcon_C_On_Flare_Production_Finished_Params
{
};

// Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.OnChargeUsed
struct UHUD_BoscoAbillityIcon_C_OnChargeUsed_Params
{
	int*                                               aCurrentCharges;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.ExecuteUbergraph_HUD_BoscoAbillityIcon
struct UHUD_BoscoAbillityIcon_C_ExecuteUbergraph_HUD_BoscoAbillityIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
