#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_DefaultLabel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetTextColor
struct UHUD_DefaultLabel_C_SetTextColor_Params
{
	TEnumAsByte<ENUM_MenuColors>*                      ColorSelector;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetOutlineSettings
struct UHUD_DefaultLabel_C_SetOutlineSettings_Params
{
	struct FFontOutlineSettings*                       InFontInfo_OutlineSettings;                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetJustification
struct UHUD_DefaultLabel_C_SetJustification_Params
{
	TEnumAsByte<ETextJustify>*                         InJustification;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetTypeFace
struct UHUD_DefaultLabel_C_SetTypeFace_Params
{
	TEnumAsByte<ENUM_AcuminCondensedTypeface>*         Typeface;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetFontSize
struct UHUD_DefaultLabel_C_SetFontSize_Params
{
	int*                                               inFontSize;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_DefaultLabel.HUD_DefaultLabel_C.SetText
struct UHUD_DefaultLabel_C_SetText_Params
{
	struct FText*                                      NewText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HUD_DefaultLabel.HUD_DefaultLabel_C.PreConstruct
struct UHUD_DefaultLabel_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_DefaultLabel.HUD_DefaultLabel_C.ExecuteUbergraph_HUD_DefaultLabel
struct UHUD_DefaultLabel_C_ExecuteUbergraph_HUD_DefaultLabel_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
