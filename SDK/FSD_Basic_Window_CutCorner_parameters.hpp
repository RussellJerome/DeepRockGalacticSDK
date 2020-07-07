#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_Window_CutCorner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Basic_Window_CutCorner.Basic_Window_CutCorner_C.PreConstruct
struct UBasic_Window_CutCorner_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_Window_CutCorner.Basic_Window_CutCorner_C.SetBackgroundTint
struct UBasic_Window_CutCorner_C_SetBackgroundTint_Params
{
	struct FLinearColor*                               InColorAndOpacity;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_Window_CutCorner.Basic_Window_CutCorner_C.SetColorbarColor
struct UBasic_Window_CutCorner_C_SetColorbarColor_Params
{
	TEnumAsByte<ENUM_MenuColors>*                      Colorbar_Tint;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_Window_CutCorner.Basic_Window_CutCorner_C.ExecuteUbergraph_Basic_Window_CutCorner
struct UBasic_Window_CutCorner_C_ExecuteUbergraph_Basic_Window_CutCorner_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
