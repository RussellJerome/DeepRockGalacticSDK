#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_RoundedImage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_RoundedImage.UI_RoundedImage_C.SetImage
struct UUI_RoundedImage_C_SetImage_Params
{
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_RoundedImage.UI_RoundedImage_C.OnPaint
struct UUI_RoundedImage_C_OnPaint_Params
{
	struct FPaintContext                               Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_RoundedImage.UI_RoundedImage_C.UpdateMaterial
struct UUI_RoundedImage_C_UpdateMaterial_Params
{
};

// Function UI_RoundedImage.UI_RoundedImage_C.PreConstruct
struct UUI_RoundedImage_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_RoundedImage.UI_RoundedImage_C.ExecuteUbergraph_UI_RoundedImage
struct UUI_RoundedImage_C_ExecuteUbergraph_UI_RoundedImage_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
