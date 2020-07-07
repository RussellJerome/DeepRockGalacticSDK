#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_TerrainScanner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_TerrainScanner.ITM_TerrainScanner_C.AddedToInventory
struct AITM_TerrainScanner_C_AddedToInventory_Params
{
	class APlayerCharacter**                           ItemOwner;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_TerrainScanner.ITM_TerrainScanner_C.OnTerrainScannerPressed
struct AITM_TerrainScanner_C_OnTerrainScannerPressed_Params
{
};

// Function ITM_TerrainScanner.ITM_TerrainScanner_C.OnTerrainScannerReleased
struct AITM_TerrainScanner_C_OnTerrainScannerReleased_Params
{
};

// Function ITM_TerrainScanner.ITM_TerrainScanner_C.ExecuteUbergraph_ITM_TerrainScanner
struct AITM_TerrainScanner_C_ExecuteUbergraph_ITM_TerrainScanner_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
