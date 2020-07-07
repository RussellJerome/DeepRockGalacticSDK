#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_BG_CutCorner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Basic_BG_CutCorner.Basic_BG_CutCorner_C.PreConstruct
struct UBasic_BG_CutCorner_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_BG_CutCorner.Basic_BG_CutCorner_C.SetBorderColor
struct UBasic_BG_CutCorner_C_SetBorderColor_Params
{
	struct FLinearColor*                               InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_BG_CutCorner.Basic_BG_CutCorner_C.ExecuteUbergraph_Basic_BG_CutCorner
struct UBasic_BG_CutCorner_C_ExecuteUbergraph_Basic_BG_CutCorner_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
