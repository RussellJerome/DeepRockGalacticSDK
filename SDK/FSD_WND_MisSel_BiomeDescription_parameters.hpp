#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_MisSel_BiomeDescription_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WND_MisSel_BiomeDescription.WND_MisSel_BiomeDescription_C.SetData
struct UWND_MisSel_BiomeDescription_C_SetData_Params
{
	class UBiome**                                     Biome;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_MisSel_BiomeDescription.WND_MisSel_BiomeDescription_C.PreConstruct
struct UWND_MisSel_BiomeDescription_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_MisSel_BiomeDescription.WND_MisSel_BiomeDescription_C.ExecuteUbergraph_WND_MisSel_BiomeDescription
struct UWND_MisSel_BiomeDescription_C_ExecuteUbergraph_WND_MisSel_BiomeDescription_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
