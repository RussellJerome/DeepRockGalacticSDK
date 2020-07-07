#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_WormholeLocation_OutsideBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_WormholeLocation_OutsideBase.BP_WormholeLocation_OutsideBase_C.OnPlayerEnterLocation
struct ABP_WormholeLocation_OutsideBase_C_OnPlayerEnterLocation_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WormholeLocation_OutsideBase.BP_WormholeLocation_OutsideBase_C.OnPlayerLeaveLocation
struct ABP_WormholeLocation_OutsideBase_C_OnPlayerLeaveLocation_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WormholeLocation_OutsideBase.BP_WormholeLocation_OutsideBase_C.ExecuteUbergraph_BP_WormholeLocation_OutsideBase
struct ABP_WormholeLocation_OutsideBase_C_ExecuteUbergraph_BP_WormholeLocation_OutsideBase_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
