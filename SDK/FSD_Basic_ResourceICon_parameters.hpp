#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_ResourceICon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Basic_ResourceICon.Basic_ResourceIcon_C.SetIconSize
struct UBasic_ResourceIcon_C_SetIconSize_Params
{
	float*                                             InSize;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ResourceICon.Basic_ResourceIcon_C.SetResource
struct UBasic_ResourceIcon_C_SetResource_Params
{
	class UResourceData**                              Resource;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ResourceICon.Basic_ResourceIcon_C.PreConstruct
struct UBasic_ResourceIcon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ResourceICon.Basic_ResourceIcon_C.ExecuteUbergraph_Basic_ResourceIcon
struct UBasic_ResourceIcon_C_ExecuteUbergraph_Basic_ResourceIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
