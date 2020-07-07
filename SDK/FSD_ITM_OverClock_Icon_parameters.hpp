#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_OverClock_Icon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetOverclockTooltip
struct UITM_Overclock_Icon_C_SetOverclockTooltip_Params
{
	class UItemUpgrade**                               Overclock;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.GetOverclockTooltip
struct UITM_Overclock_Icon_C_GetOverclockTooltip_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.GetFrameLinearColor
struct UITM_Overclock_Icon_C_GetFrameLinearColor_Params
{
	struct FLinearColor                                ColorAndOpacity;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.FromSchematicType
struct UITM_Overclock_Icon_C_FromSchematicType_Params
{
	ESchematicType*                                    InType;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetCategory
struct UITM_Overclock_Icon_C_SetCategory_Params
{
	class USchematicCategory**                         InCategory;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetFrameLinearColor
struct UITM_Overclock_Icon_C_SetFrameLinearColor_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.FromUpgrade
struct UITM_Overclock_Icon_C_FromUpgrade_Params
{
	class UItemUpgrade**                               InUpgrade;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USchematicCategory*                          OutSchematicCategory;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.FromSchematic
struct UITM_Overclock_Icon_C_FromSchematic_Params
{
	class USchematic**                                 InSchematic;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ShowState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetIconColor
struct UITM_Overclock_Icon_C_SetIconColor_Params
{
	TEnumAsByte<ENUM_MenuColors>*                      Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetIcon
struct UITM_Overclock_Icon_C_SetIcon_Params
{
	class UTexture2D**                                 Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetFrame
struct UITM_Overclock_Icon_C_SetFrame_Params
{
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetFrameColor
struct UITM_Overclock_Icon_C_SetFrameColor_Params
{
	TEnumAsByte<ENUM_MenuColors>*                      ColorSelector;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.SetIconSize
struct UITM_Overclock_Icon_C_SetIconSize_Params
{
	int*                                               InSize;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.PreConstruct
struct UITM_Overclock_Icon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_OverClock_Icon.ITM_Overclock_Icon_C.ExecuteUbergraph_ITM_Overclock_Icon
struct UITM_Overclock_Icon_C_ExecuteUbergraph_ITM_Overclock_Icon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
