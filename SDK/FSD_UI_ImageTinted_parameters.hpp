#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_ImageTinted_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_ImageTinted.UI_ImageTinted_C.SetBrushFromTexture
struct UUI_ImageTinted_C_SetBrushFromTexture_Params
{
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              MatchSize;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ImageTinted.UI_ImageTinted_C.SetTint
struct UUI_ImageTinted_C_SetTint_Params
{
	TEnumAsByte<ENUM_MenuColors>*                      InTint;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InOpacity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ImageTinted.UI_ImageTinted_C.SetBrush
struct UUI_ImageTinted_C_SetBrush_Params
{
	struct FSlateBrush*                                InBrush;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_ImageTinted.UI_ImageTinted_C.PreConstruct
struct UUI_ImageTinted_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ImageTinted.UI_ImageTinted_C.ExecuteUbergraph_UI_ImageTinted
struct UUI_ImageTinted_C_ExecuteUbergraph_UI_ImageTinted_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
