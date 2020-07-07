#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_KPI_Tab_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_KPI_Tab.UI_KPI_Tab_C.HandleMouseEvent
struct UUI_KPI_Tab_C_HandleMouseEvent_Params
{
	struct FPointerEvent*                              InMouseEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool*                                              InUp;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutHandled;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_KPI_Tab.UI_KPI_Tab_C.HandleKeyEvent
struct UUI_KPI_Tab_C_HandleKeyEvent_Params
{
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              InUp;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutHandled;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
