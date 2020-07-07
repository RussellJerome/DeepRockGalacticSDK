#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_GradientMasked_Image_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.GetTextureOrDefault
struct UUI_GradientMasked_Image_C_GetTextureOrDefault_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.SetImage
struct UUI_GradientMasked_Image_C_SetImage_Params
{
	class UTexture2D**                                 InTexture;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.OnMaterialRefreshed
struct UUI_GradientMasked_Image_C_OnMaterialRefreshed_Params
{
};

// Function UI_GradientMasked_Image.UI_GradientMasked_Image_C.ExecuteUbergraph_UI_GradientMasked_Image
struct UUI_GradientMasked_Image_C_ExecuteUbergraph_UI_GradientMasked_Image_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
