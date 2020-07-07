#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BlurBackground_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BlurBackground.BlurBackground_C.SetBlur
struct UBlurBackground_C_SetBlur_Params
{
	float*                                             InBlur;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlurBackground.BlurBackground_C.SetColor
struct UBlurBackground_C_SetColor_Params
{
	struct FLinearColor*                               Tint;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlurBackground.BlurBackground_C.PreConstruct
struct UBlurBackground_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlurBackground.BlurBackground_C.ExecuteUbergraph_BlurBackground
struct UBlurBackground_C_ExecuteUbergraph_BlurBackground_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
