#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_BlackOverlay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_BlackOverlay.UI_BlackOverlay_C.SetLoaderImage
struct UUI_BlackOverlay_C_SetLoaderImage_Params
{
	class UTexture**                                   Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Fade;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_BlackOverlay.UI_BlackOverlay_C.PreConstruct
struct UUI_BlackOverlay_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_BlackOverlay.UI_BlackOverlay_C.SetFadeProgress
struct UUI_BlackOverlay_C_SetFadeProgress_Params
{
	float*                                             Fade;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ToSpaceRig;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture**                                   loadingImage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_BlackOverlay.UI_BlackOverlay_C.ExecuteUbergraph_UI_BlackOverlay
struct UUI_BlackOverlay_C_ExecuteUbergraph_UI_BlackOverlay_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
