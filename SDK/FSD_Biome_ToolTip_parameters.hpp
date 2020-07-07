#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Biome_ToolTip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Biome_ToolTip.Biome_ToolTip_C.SetData
struct UBiome_ToolTip_C_SetData_Params
{
	class UResourceData**                              ResourceA;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UResourceData**                              ResourceB;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Biome_ToolTip.Biome_ToolTip_C.SetPostionAndAlignment
struct UBiome_ToolTip_C_SetPostionAndAlignment_Params
{
	struct FVector2D*                                  InPosition;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  InAlignment;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Biome_ToolTip.Biome_ToolTip_C.SetTarget
struct UBiome_ToolTip_C_SetTarget_Params
{
	class UWidget**                                    Target_Widget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Biome_ToolTip.Biome_ToolTip_C.PreConstruct
struct UBiome_ToolTip_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Biome_ToolTip.Biome_ToolTip_C.Set Tool Tip Owner
struct UBiome_ToolTip_C_Set_Tool_Tip_Owner_Params
{
	class UWidget**                                    Owner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Biome_ToolTip.Biome_ToolTip_C.ExecuteUbergraph_Biome_ToolTip
struct UBiome_ToolTip_C_ExecuteUbergraph_Biome_ToolTip_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
