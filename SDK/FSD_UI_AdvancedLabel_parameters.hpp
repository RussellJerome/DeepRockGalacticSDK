#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_AdvancedLabel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetPreviewAs
struct UUI_AdvancedLabel_C_SetPreviewAs_Params
{
	EInputSource*                                      PreviewAs;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetTints
struct UUI_AdvancedLabel_C_SetTints_Params
{
	struct FLinearColor*                               Text_Tint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Key_Name_Tint;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               PC__Icon_Tint;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Controller_Icon_Tint;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetKeyNameTint
struct UUI_AdvancedLabel_C_SetKeyNameTint_Params
{
	struct FLinearColor*                               Key_Name_Tint;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetIconTint
struct UUI_AdvancedLabel_C_SetIconTint_Params
{
	struct FLinearColor*                               PC__Icon_Tint;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Controller_Icon_Tint;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetTextTint
struct UUI_AdvancedLabel_C_SetTextTint_Params
{
	struct FLinearColor*                               Text_Tint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnNewLine
struct UUI_AdvancedLabel_C_OnNewLine_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnAddIcon
struct UUI_AdvancedLabel_C_OnAddIcon_Params
{
	class FString*                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FActionIconMapping*                         Icon;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnAddKeyName
struct UUI_AdvancedLabel_C_OnAddKeyName_Params
{
	class FString*                                     Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnAddString
struct UUI_AdvancedLabel_C_OnAddString_Params
{
	class FString*                                     Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnReset
struct UUI_AdvancedLabel_C_OnReset_Params
{
};

// Function UI_AdvancedLabel.UI_AdvancedLabel_C.ExecuteUbergraph_UI_AdvancedLabel
struct UUI_AdvancedLabel_C_ExecuteUbergraph_UI_AdvancedLabel_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
