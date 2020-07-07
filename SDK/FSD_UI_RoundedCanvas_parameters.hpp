#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_RoundedCanvas_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_RoundedCanvas.UI_RoundedCanvas_C.OnPaint
struct UUI_RoundedCanvas_C_OnPaint_Params
{
	struct FPaintContext                               Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_RoundedCanvas.UI_RoundedCanvas_C.UpdateMaterial
struct UUI_RoundedCanvas_C_UpdateMaterial_Params
{
};

// Function UI_RoundedCanvas.UI_RoundedCanvas_C.PreConstruct
struct UUI_RoundedCanvas_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_RoundedCanvas.UI_RoundedCanvas_C.ExecuteUbergraph_UI_RoundedCanvas
struct UUI_RoundedCanvas_C_ExecuteUbergraph_UI_RoundedCanvas_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
