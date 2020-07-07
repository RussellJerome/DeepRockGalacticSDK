#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Widget_DropPod_DangerLevel_TextString_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_DropPod_DangerLevel_TextString.Widget_DropPod_DangerLevel_TextString_C.SetColor
struct UWidget_DropPod_DangerLevel_TextString_C_SetColor_Params
{
	struct FSlateColor*                                InColorAndOpacity;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_DropPod_DangerLevel_TextString.Widget_DropPod_DangerLevel_TextString_C.SetText
struct UWidget_DropPod_DangerLevel_TextString_C_SetText_Params
{
	struct FText*                                      InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_DropPod_DangerLevel_TextString.Widget_DropPod_DangerLevel_TextString_C.Tick
struct UWidget_DropPod_DangerLevel_TextString_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_DropPod_DangerLevel_TextString.Widget_DropPod_DangerLevel_TextString_C.PreConstruct
struct UWidget_DropPod_DangerLevel_TextString_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_DropPod_DangerLevel_TextString.Widget_DropPod_DangerLevel_TextString_C.ExecuteUbergraph_Widget_DropPod_DangerLevel_TextString
struct UWidget_DropPod_DangerLevel_TextString_C_ExecuteUbergraph_Widget_DropPod_DangerLevel_TextString_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
