#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Promotion_Console_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Promotion_Console.BP_Promotion_Console_C.OnOpenConsole
struct ABP_Promotion_Console_C_OnOpenConsole_Params
{
	class ABP_PlayerController_SpaceRig_C**            InPlayerController;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Promotion_Console.BP_Promotion_Console_C.ExecuteUbergraph_BP_Promotion_Console
struct ABP_Promotion_Console_C_ExecuteUbergraph_BP_Promotion_Console_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
