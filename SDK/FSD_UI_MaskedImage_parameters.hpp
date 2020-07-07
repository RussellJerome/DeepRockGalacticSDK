#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_MaskedImage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_MaskedImage.UI_MaskedImage_C.SetMaskBlack
struct UUI_MaskedImage_C_SetMaskBlack_Params
{
	bool*                                              Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MaskedImage.UI_MaskedImage_C.UpdateMaterial
struct UUI_MaskedImage_C_UpdateMaterial_Params
{
};

// Function UI_MaskedImage.UI_MaskedImage_C.SetDrawAs
struct UUI_MaskedImage_C_SetDrawAs_Params
{
	TEnumAsByte<ESlateBrushDrawType>*                  InBrush_DrawAs;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MaskedImage.UI_MaskedImage_C.SetMaskInverted
struct UUI_MaskedImage_C_SetMaskInverted_Params
{
	bool*                                              Invert;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MaskedImage.UI_MaskedImage_C.SetMask
struct UUI_MaskedImage_C_SetMask_Params
{
	class UTexture**                                   Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MaskedImage.UI_MaskedImage_C.SetImageTint
struct UUI_MaskedImage_C_SetImageTint_Params
{
	struct FSlateColor*                                TintColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_MaskedImage.UI_MaskedImage_C.SetImageSize
struct UUI_MaskedImage_C_SetImageSize_Params
{
	struct FVector2D*                                  DesiredSize;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MaskedImage.UI_MaskedImage_C.SetImage
struct UUI_MaskedImage_C_SetImage_Params
{
	class UTexture2D**                                 Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Match_Size;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MaskedImage.UI_MaskedImage_C.PreConstruct
struct UUI_MaskedImage_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MaskedImage.UI_MaskedImage_C.ExecuteUbergraph_UI_MaskedImage
struct UUI_MaskedImage_C_ExecuteUbergraph_UI_MaskedImage_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
