#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_MaskedCanvas_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_MaskedCanvas.UI_MaskedCanvas_C.SetMask
struct UUI_MaskedCanvas_C_SetMask_Params
{
	class UTexture**                                   Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MaskedCanvas.UI_MaskedCanvas_C.UpdateMaterial
struct UUI_MaskedCanvas_C_UpdateMaterial_Params
{
};

// Function UI_MaskedCanvas.UI_MaskedCanvas_C.PreConstruct
struct UUI_MaskedCanvas_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MaskedCanvas.UI_MaskedCanvas_C.ExecuteUbergraph_UI_MaskedCanvas
struct UUI_MaskedCanvas_C_ExecuteUbergraph_UI_MaskedCanvas_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
