#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ScreenOverlay_Afflictions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.FindOverlayWidget
struct UScreenOverlay_Afflictions_C_FindOverlayWidget_Params
{
	class UPlayerAfflictionOverlay**                   OverlayData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              CreateIfNew;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPlayerAfflictionOverlayWidget*              OutWidget;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.Construct
struct UScreenOverlay_Afflictions_C_Construct_Params
{
};

// Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.OnShowOverlay_Event
struct UScreenOverlay_Afflictions_C_OnShowOverlay_Event_Params
{
	class UPlayerAfflictionOverlay**                   Overlay;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.OnHideOverlay_Event
struct UScreenOverlay_Afflictions_C_OnHideOverlay_Event_Params
{
	class UPlayerAfflictionOverlay**                   Overlay;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScreenOverlay_Afflictions.ScreenOverlay_Afflictions_C.ExecuteUbergraph_ScreenOverlay_Afflictions
struct UScreenOverlay_Afflictions_C_ExecuteUbergraph_ScreenOverlay_Afflictions_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
