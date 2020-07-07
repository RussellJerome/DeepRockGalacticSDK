#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_BG_CutCorner_W_Image_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.PreConstruct
struct UBasic_BG_CutCorner_W_Image_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetImage
struct UBasic_BG_CutCorner_W_Image_C_SetImage_Params
{
	class UTexture2D**                                 ImageBackground;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               BackgroundColor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 Front;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetOutlineColor
struct UBasic_BG_CutCorner_W_Image_C_SetOutlineColor_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetBackgroundColor
struct UBasic_BG_CutCorner_W_Image_C_SetBackgroundColor_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.UpdateCornorSize
struct UBasic_BG_CutCorner_W_Image_C_UpdateCornorSize_Params
{
	float*                                             Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.SetStyle
struct UBasic_BG_CutCorner_W_Image_C_SetStyle_Params
{
	TEnumAsByte<E_MM_ButtonStyle>*                     IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_BG_CutCorner_W_Image.Basic_BG_CutCorner_W_Image_C.ExecuteUbergraph_Basic_BG_CutCorner_W_Image
struct UBasic_BG_CutCorner_W_Image_C_ExecuteUbergraph_Basic_BG_CutCorner_W_Image_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
