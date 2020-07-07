#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_RichTextInput_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_RichTextInput.UI_RichTextInput_C.ShowFromDisplayDetails
struct UUI_RichTextInput_C_ShowFromDisplayDetails_Params
{
	struct FInputDisplay*                              details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_RichTextInput.UI_RichTextInput_C.SetInteraction
struct UUI_RichTextInput_C_SetInteraction_Params
{
	EInputInteraction*                                 InInteraction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_RichTextInput.UI_RichTextInput_C.ShowAsText
struct UUI_RichTextInput_C_ShowAsText_Params
{
	struct FText*                                      InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor*                               InTint;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_RichTextInput.UI_RichTextInput_C.SetSize
struct UUI_RichTextInput_C_SetSize_Params
{
	float*                                             InHeightOverride;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InWidthOverride;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InMinDesiredWidth;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_RichTextInput.UI_RichTextInput_C.ShowAsIcon
struct UUI_RichTextInput_C_ShowAsIcon_Params
{
	class UTexture2D**                                 InTexture;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               InTint;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_RichTextInput.UI_RichTextInput_C.ReceiveInputDetails
struct UUI_RichTextInput_C_ReceiveInputDetails_Params
{
	struct FInputDisplay*                              InDisplay;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_RichTextInput.UI_RichTextInput_C.ReceiveInputUnknown
struct UUI_RichTextInput_C_ReceiveInputUnknown_Params
{
};

// Function UI_RichTextInput.UI_RichTextInput_C.ExecuteUbergraph_UI_RichTextInput
struct UUI_RichTextInput_C_ExecuteUbergraph_UI_RichTextInput_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
