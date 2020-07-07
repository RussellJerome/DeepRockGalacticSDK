#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_GameEvent_Generic_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.RegisterGameEvent
struct UHUD_GameEvent_Generic_C_RegisterGameEvent_Params
{
	class AGameEvent**                                 GameEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.UpdateTime
struct UHUD_GameEvent_Generic_C_UpdateTime_Params
{
	float*                                             CurrentProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.Shutdown
struct UHUD_GameEvent_Generic_C_Shutdown_Params
{
};

// Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.Construct
struct UHUD_GameEvent_Generic_C_Construct_Params
{
};

// Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.ProgressChanged
struct UHUD_GameEvent_Generic_C_ProgressChanged_Params
{
	float*                                             CurrentProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.NumberObjectivesChanged
struct UHUD_GameEvent_Generic_C_NumberObjectivesChanged_Params
{
	int*                                               stageCompleted;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.PreConstruct
struct UHUD_GameEvent_Generic_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_GameEvent_Generic.HUD_GameEvent_Generic_C.ExecuteUbergraph_HUD_GameEvent_Generic
struct UHUD_GameEvent_Generic_C_ExecuteUbergraph_HUD_GameEvent_Generic_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
