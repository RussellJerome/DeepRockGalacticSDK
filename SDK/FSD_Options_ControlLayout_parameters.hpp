#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_ControlLayout_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Options_ControlLayout.Options_ControlLayout_C.Construct
struct UOptions_ControlLayout_C_Construct_Params
{
};

// Function Options_ControlLayout.Options_ControlLayout_C.OnInputSourceChanged
struct UOptions_ControlLayout_C_OnInputSourceChanged_Params
{
	EInputSource*                                      InputSource;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_ControlLayout.Options_ControlLayout_C.ExecuteUbergraph_Options_ControlLayout
struct UOptions_ControlLayout_C_ExecuteUbergraph_Options_ControlLayout_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
