#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_CategoryImage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CategoryImage.CategoryImage_C.PreConstruct
struct UCategoryImage_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CategoryImage.CategoryImage_C.SetImage
struct UCategoryImage_C_SetImage_Params
{
	class UTexture2D**                                 Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               BackgroundColor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 OptionalMaskedImage;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CategoryImage.CategoryImage_C.SetOutlineColor
struct UCategoryImage_C_SetOutlineColor_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CategoryImage.CategoryImage_C.SetMissionIcon
struct UCategoryImage_C_SetMissionIcon_Params
{
	struct FObjectiveMissionIcon*                      MissionIcon;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function CategoryImage.CategoryImage_C.SetStyle
struct UCategoryImage_C_SetStyle_Params
{
	TEnumAsByte<E_MM_ButtonStyle>*                     IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CategoryImage.CategoryImage_C.ExecuteUbergraph_CategoryImage
struct UCategoryImage_C_ExecuteUbergraph_CategoryImage_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
