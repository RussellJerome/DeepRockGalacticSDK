#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LIB_MenuColors_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LIB_MenuColors.LIB_MenuColors_C.WindowColors
struct ULIB_MenuColors_C_WindowColors_Params
{
	TEnumAsByte<ENUM_WindowColors>*                    InColor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color1;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color2;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_MenuColors.LIB_MenuColors_C.SelectTextColor
struct ULIB_MenuColors_C_SelectTextColor_Params
{
	class UTextBlock**                                 Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ENUM_MenuColors>*                      FALSE;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENUM_MenuColors>*                      TRUE;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_MenuColors.LIB_MenuColors_C.SetTextColor
struct ULIB_MenuColors_C_SetTextColor_Params
{
	class UTextBlock**                                 Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ENUM_MenuColors>*                      Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_MenuColors.LIB_MenuColors_C.SelectMenuColor
struct ULIB_MenuColors_C_SelectMenuColor_Params
{
	TEnumAsByte<ENUM_MenuColors>*                      FALSE;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENUM_MenuColors>*                      TRUE;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OutputColor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_MenuColors.LIB_MenuColors_C.MenuColorsAndOpacity
struct ULIB_MenuColors_C_MenuColorsAndOpacity_Params
{
	TEnumAsByte<ENUM_MenuColors>*                      ColorSelector;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OutputColor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LIB_MenuColors.LIB_MenuColors_C.MenuColors
struct ULIB_MenuColors_C_MenuColors_Params
{
	TEnumAsByte<ENUM_MenuColors>*                      ColorSelector;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OutputColor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
