#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TOOLTIP_ServerEntry_Biome_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TOOLTIP_ServerEntry_Biome.TOOLTIP_ServerEntry_Biome_C.SetData
struct UTOOLTIP_ServerEntry_Biome_C_SetData_Params
{
	class UBiome**                                     InBiome;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TOOLTIP_ServerEntry_Biome.TOOLTIP_ServerEntry_Biome_C.PreConstruct
struct UTOOLTIP_ServerEntry_Biome_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TOOLTIP_ServerEntry_Biome.TOOLTIP_ServerEntry_Biome_C.ExecuteUbergraph_TOOLTIP_ServerEntry_Biome
struct UTOOLTIP_ServerEntry_Biome_C_ExecuteUbergraph_TOOLTIP_ServerEntry_Biome_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
