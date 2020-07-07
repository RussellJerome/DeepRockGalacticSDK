#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_ShowFPS_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Options_ShowFPS.Options_ShowFPS_C.Construct
struct UOptions_ShowFPS_C_Construct_Params
{
};

// Function Options_ShowFPS.Options_ShowFPS_C.OnShowFPSChanged
struct UOptions_ShowFPS_C_OnShowFPSChanged_Params
{
	bool*                                              NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_ShowFPS.Options_ShowFPS_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature
struct UOptions_ShowFPS_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature_Params
{
	bool*                                              IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_ShowFPS.Options_ShowFPS_C.ExecuteUbergraph_Options_ShowFPS
struct UOptions_ShowFPS_C_ExecuteUbergraph_Options_ShowFPS_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
