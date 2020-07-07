#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_ForgeConsole_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ForgeConsole.BP_ForgeConsole_C.OnWindowCreated
struct ABP_ForgeConsole_C_OnWindowCreated_Params
{
	class UWindowWidget**                              WindowWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ForgeConsole.BP_ForgeConsole_C.UpdateNotificationBanner
struct ABP_ForgeConsole_C_UpdateNotificationBanner_Params
{
};

// Function BP_ForgeConsole.BP_ForgeConsole_C.ExecuteUbergraph_BP_ForgeConsole
struct ABP_ForgeConsole_C_ExecuteUbergraph_BP_ForgeConsole_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
