#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ShadowBG_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ShadowBG.ShadowBG_C.SetEdgeSharpness
struct UShadowBG_C_SetEdgeSharpness_Params
{
	float*                                             EdgeSharpness1;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShadowBG.ShadowBG_C.SetColor
struct UShadowBG_C_SetColor_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShadowBG.ShadowBG_C.PreConstruct
struct UShadowBG_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShadowBG.ShadowBG_C.ExecuteUbergraph_ShadowBG
struct UShadowBG_C_ExecuteUbergraph_ShadowBG_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
