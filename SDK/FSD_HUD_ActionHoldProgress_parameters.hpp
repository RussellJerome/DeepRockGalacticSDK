#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_ActionHoldProgress_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.PreConstruct
struct UHUD_ActionHoldProgress_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.Construct
struct UHUD_ActionHoldProgress_C_Construct_Params
{
};

// Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.OnActionHoldProgress
struct UHUD_ActionHoldProgress_C_OnActionHoldProgress_Params
{
	struct FText*                                      Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.ExecuteUbergraph_HUD_ActionHoldProgress
struct UHUD_ActionHoldProgress_C_ExecuteUbergraph_HUD_ActionHoldProgress_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
