#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HoopsScore_Widget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HoopsScore_Widget.HoopsScore_Widget_C.SetScore
struct UHoopsScore_Widget_C_SetScore_Params
{
	int*                                               Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HoopsScore_Widget.HoopsScore_Widget_C.Construct
struct UHoopsScore_Widget_C_Construct_Params
{
};

// Function HoopsScore_Widget.HoopsScore_Widget_C.ExecuteUbergraph_HoopsScore_Widget
struct UHoopsScore_Widget_C_ExecuteUbergraph_HoopsScore_Widget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
