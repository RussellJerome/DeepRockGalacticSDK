#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Biome_ResourceIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_Biome_ResourceIcon.ITM_Biome_ResourceIcon_C.SetData
struct UITM_Biome_ResourceIcon_C_SetData_Params
{
	class UResourceData**                              Resource;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsScarce;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Biome_ResourceIcon.ITM_Biome_ResourceIcon_C.ExecuteUbergraph_ITM_Biome_ResourceIcon
struct UITM_Biome_ResourceIcon_C_ExecuteUbergraph_ITM_Biome_ResourceIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
