#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Itembar_Icon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.SetSelected
struct UHUD_Itembar_Icon_C_SetSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.OnUnselect
struct UHUD_Itembar_Icon_C_OnUnselect_Params
{
};

// Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.OnSelect
struct UHUD_Itembar_Icon_C_OnSelect_Params
{
};

// Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.PreConstruct
struct UHUD_Itembar_Icon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.OnInit
struct UHUD_Itembar_Icon_C_OnInit_Params
{
};

// Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.ExecuteUbergraph_HUD_Itembar_Icon
struct UHUD_Itembar_Icon_C_ExecuteUbergraph_HUD_Itembar_Icon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
