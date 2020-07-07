#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_MenuLabel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Basic_MenuLabel.Basic_MenuLabel_C.SetJustification
struct UBasic_MenuLabel_C_SetJustification_Params
{
	TEnumAsByte<ETextJustify>*                         InJustification;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_MenuLabel.Basic_MenuLabel_C.SetTypeFace
struct UBasic_MenuLabel_C_SetTypeFace_Params
{
	TEnumAsByte<ENUM_CarbonTypeface>*                  Typeface;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_MenuLabel.Basic_MenuLabel_C.SetFontSize
struct UBasic_MenuLabel_C_SetFontSize_Params
{
	int*                                               inFontSize;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_MenuLabel.Basic_MenuLabel_C.SetText
struct UBasic_MenuLabel_C_SetText_Params
{
	struct FText*                                      NewText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Basic_MenuLabel.Basic_MenuLabel_C.PreConstruct
struct UBasic_MenuLabel_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_MenuLabel.Basic_MenuLabel_C.ExecuteUbergraph_Basic_MenuLabel
struct UBasic_MenuLabel_C_ExecuteUbergraph_Basic_MenuLabel_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
