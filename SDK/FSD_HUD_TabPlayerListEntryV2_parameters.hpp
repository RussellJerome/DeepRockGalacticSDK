#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_TabPlayerListEntryV2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.UpdateStats
struct UHUD_TabPlayerListEntryV2_C_UpdateStats_Params
{
};

// Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.Update
struct UHUD_TabPlayerListEntryV2_C_Update_Params
{
	class AFSDPlayerState**                            State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.Tick
struct UHUD_TabPlayerListEntryV2_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.PreConstruct
struct UHUD_TabPlayerListEntryV2_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.ShowInfoBar
struct UHUD_TabPlayerListEntryV2_C_ShowInfoBar_Params
{
	bool*                                              shouldShow;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TabPlayerListEntryV2.HUD_TabPlayerListEntryV2_C.ExecuteUbergraph_HUD_TabPlayerListEntryV2
struct UHUD_TabPlayerListEntryV2_C_ExecuteUbergraph_HUD_TabPlayerListEntryV2_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
