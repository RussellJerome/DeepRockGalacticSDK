#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_InputSpecific_Widget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Basic_InputSpecific_Widget.Basic_InputSpecific_Widget_C.Construct
struct UBasic_InputSpecific_Widget_C_Construct_Params
{
};

// Function Basic_InputSpecific_Widget.Basic_InputSpecific_Widget_C.OnInputSourceChanged
struct UBasic_InputSpecific_Widget_C_OnInputSourceChanged_Params
{
	EInputSource*                                      InputSource;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_InputSpecific_Widget.Basic_InputSpecific_Widget_C.ExecuteUbergraph_Basic_InputSpecific_Widget
struct UBasic_InputSpecific_Widget_C_ExecuteUbergraph_Basic_InputSpecific_Widget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
