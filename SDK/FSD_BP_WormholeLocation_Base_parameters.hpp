#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_WormholeLocation_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_WormholeLocation_Base.BP_WormholeLocation_Base_C.OnPlayerEnterLocation
struct ABP_WormholeLocation_Base_C_OnPlayerEnterLocation_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WormholeLocation_Base.BP_WormholeLocation_Base_C.OnPlayerLeaveLocation
struct ABP_WormholeLocation_Base_C_OnPlayerLeaveLocation_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WormholeLocation_Base.BP_WormholeLocation_Base_C.ExecuteUbergraph_BP_WormholeLocation_Base
struct ABP_WormholeLocation_Base_C_ExecuteUbergraph_BP_WormholeLocation_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
