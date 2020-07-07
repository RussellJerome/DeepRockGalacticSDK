#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_BoscoAbillityCounter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.CreateIcons
struct UHUD_BoscoAbillityCounter_C_CreateIcons_Params
{
	int*                                               IconCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.PreConstruct
struct UHUD_BoscoAbillityCounter_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.Construct
struct UHUD_BoscoAbillityCounter_C_Construct_Params
{
};

// Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.OnItemsLoaded
struct UHUD_BoscoAbillityCounter_C_OnItemsLoaded_Params
{
};

// Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.OnAbillityChargeProgress
struct UHUD_BoscoAbillityCounter_C_OnAbillityChargeProgress_Params
{
	float*                                             aProgress;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               aNextIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.OnBoscoChanged
struct UHUD_BoscoAbillityCounter_C_OnBoscoChanged_Params
{
	class ABosco**                                     Bosco;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.ExecuteUbergraph_HUD_BoscoAbillityCounter
struct UHUD_BoscoAbillityCounter_C_ExecuteUbergraph_HUD_BoscoAbillityCounter_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
