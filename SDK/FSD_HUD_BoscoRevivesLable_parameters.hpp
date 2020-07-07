#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_BoscoRevivesLable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C.PreConstruct
struct UHUD_BoscoRevivesLable_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C.Construct
struct UHUD_BoscoRevivesLable_C_Construct_Params
{
};

// Function HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C.OnReviveCountChangedEvent
struct UHUD_BoscoRevivesLable_C_OnReviveCountChangedEvent_Params
{
	int*                                               ReviveCount;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_BoscoRevivesLable.HUD_BoscoRevivesLable_C.ExecuteUbergraph_HUD_BoscoRevivesLable
struct UHUD_BoscoRevivesLable_C_ExecuteUbergraph_HUD_BoscoRevivesLable_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
