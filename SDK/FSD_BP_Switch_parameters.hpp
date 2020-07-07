#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Switch_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Switch.BP_Switch_C.SelectNext
struct ABP_Switch_C_SelectNext_Params
{
};

// Function BP_Switch.BP_Switch_C.SelectPrevious
struct ABP_Switch_C_SelectPrevious_Params
{
};

// Function BP_Switch.BP_Switch_C.RegisterSwitch
struct ABP_Switch_C_RegisterSwitch_Params
{
};

// Function BP_Switch.BP_Switch_C.SetSelection
struct ABP_Switch_C_SetSelection_Params
{
	int*                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Switch.BP_Switch_C.ReceiveBeginPlay
struct ABP_Switch_C_ReceiveBeginPlay_Params
{
};

// Function BP_Switch.BP_Switch_C.OnSetNodeVisibility
struct ABP_Switch_C_OnSetNodeVisibility_Params
{
	bool*                                              NewVisibility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Switch.BP_Switch_C.ExecuteUbergraph_BP_Switch
struct ABP_Switch_C_ExecuteUbergraph_BP_Switch_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
