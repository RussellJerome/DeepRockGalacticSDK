#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LoreScreen_Template_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LoreScreen_Template.LoreScreen_Template_C.SetHeadline
struct ULoreScreen_Template_C_SetHeadline_Params
{
	struct FText*                                      SetHeadline;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D**                                 Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FObjectiveMissionIcon*                      MissionIcon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LoreScreen_Template.LoreScreen_Template_C.PreConstruct
struct ULoreScreen_Template_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoreScreen_Template.LoreScreen_Template_C.SetHeaderMovie
struct ULoreScreen_Template_C_SetHeaderMovie_Params
{
	class UMediaSource**                               MediaSource;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoreScreen_Template.LoreScreen_Template_C.SetHeaderImage
struct ULoreScreen_Template_C_SetHeaderImage_Params
{
	class UTexture2D**                                 HeaderImage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Strech;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             VerticalFillPercent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              UseGradient;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoreScreen_Template.LoreScreen_Template_C.SetHeaderMaterial
struct ULoreScreen_Template_C_SetHeaderMaterial_Params
{
	class UMaterialInterface**                         Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoreScreen_Template.LoreScreen_Template_C.OnOpened
struct ULoreScreen_Template_C_OnOpened_Params
{
	class FString*                                     OpenedUrl;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function LoreScreen_Template.LoreScreen_Template_C.ExecuteUbergraph_LoreScreen_Template
struct ULoreScreen_Template_C_ExecuteUbergraph_LoreScreen_Template_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoreScreen_Template.LoreScreen_Template_C.OnShown__DelegateSignature
struct ULoreScreen_Template_C_OnShown__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
