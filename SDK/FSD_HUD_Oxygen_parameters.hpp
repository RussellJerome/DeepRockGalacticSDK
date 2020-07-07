#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Oxygen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_Oxygen.HUD_Oxygen_C.SetProgress
struct UHUD_Oxygen_C_SetProgress_Params
{
	float*                                             CurrentProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Oxygen.HUD_Oxygen_C.OnOxygenChanged_Event_1
struct UHUD_Oxygen_C_OnOxygenChanged_Event_1_Params
{
	int*                                               oxygenLevel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Oxygen.HUD_Oxygen_C.OnOxygenReplenishingEvent_Event_1
struct UHUD_Oxygen_C_OnOxygenReplenishingEvent_Event_1_Params
{
	bool*                                              IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Oxygen.HUD_Oxygen_C.40PercentOxygenLeft
struct UHUD_Oxygen_C__40PercentOxygenLeft_Params
{
};

// Function HUD_Oxygen.HUD_Oxygen_C.Construct
struct UHUD_Oxygen_C_Construct_Params
{
};

// Function HUD_Oxygen.HUD_Oxygen_C.PreConstruct
struct UHUD_Oxygen_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Oxygen.HUD_Oxygen_C.ExecuteUbergraph_HUD_Oxygen
struct UHUD_Oxygen_C_ExecuteUbergraph_HUD_Oxygen_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
