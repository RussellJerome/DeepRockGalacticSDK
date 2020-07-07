#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_MapTool_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_MapTool.HUD_MapTool_C.Construct
struct UHUD_MapTool_C_Construct_Params
{
};

// Function HUD_MapTool.HUD_MapTool_C.OnToggleMapTool
struct UHUD_MapTool_C_OnToggleMapTool_Params
{
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_MapTool.HUD_MapTool_C.PreConstruct
struct UHUD_MapTool_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_MapTool.HUD_MapTool_C.OnMainTurnOnFinished
struct UHUD_MapTool_C_OnMainTurnOnFinished_Params
{
};

// Function HUD_MapTool.HUD_MapTool_C.ExecuteUbergraph_HUD_MapTool
struct UHUD_MapTool_C_ExecuteUbergraph_HUD_MapTool_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
