#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_GenericLabel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_GenericLabel.UI_GenericLabel_C.GetText
struct UUI_GenericLabel_C_GetText_Params
{
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function UI_GenericLabel.UI_GenericLabel_C.SetWrappingPolicy
struct UUI_GenericLabel_C_SetWrappingPolicy_Params
{
	ETextWrappingPolicy*                               WrappingPolicy;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GenericLabel.UI_GenericLabel_C.SetWrapTextAt
struct UUI_GenericLabel_C_SetWrapTextAt_Params
{
	float*                                             WrapTextAt;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GenericLabel.UI_GenericLabel_C.SetAutoWrapText
struct UUI_GenericLabel_C_SetAutoWrapText_Params
{
	bool*                                              AutoTextWrap;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GenericLabel.UI_GenericLabel_C.SetFontSize
struct UUI_GenericLabel_C_SetFontSize_Params
{
	int*                                               inFontSize;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GenericLabel.UI_GenericLabel_C.SetMinDesiredWidth
struct UUI_GenericLabel_C_SetMinDesiredWidth_Params
{
	float*                                             MinDesiredWidth;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GenericLabel.UI_GenericLabel_C.SetJustification
struct UUI_GenericLabel_C_SetJustification_Params
{
	TEnumAsByte<ETextJustify>*                         Justification;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GenericLabel.UI_GenericLabel_C.SetTextColor
struct UUI_GenericLabel_C_SetTextColor_Params
{
	TEnumAsByte<ENUM_MenuColors>*                      TextColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GenericLabel.UI_GenericLabel_C.SetText
struct UUI_GenericLabel_C_SetText_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_GenericLabel.UI_GenericLabel_C.SetMargin
struct UUI_GenericLabel_C_SetMargin_Params
{
	struct FMargin*                                    New_Margin;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GenericLabel.UI_GenericLabel_C.PreConstruct
struct UUI_GenericLabel_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GenericLabel.UI_GenericLabel_C.ExecuteUbergraph_UI_GenericLabel
struct UUI_GenericLabel_C_ExecuteUbergraph_UI_GenericLabel_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
