#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_GradientMasked_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.GetDynamicMaterial
struct UUI_GradientMasked_Base_C_GetDynamicMaterial_Params
{
	class UMaterialInstanceDynamic*                    Material;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.Refresh
struct UUI_GradientMasked_Base_C_Refresh_Params
{
};

// Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.GetMaterialTemplate
struct UUI_GradientMasked_Base_C_GetMaterialTemplate_Params
{
	TEnumAsByte<ENUM_MaskedGradientTypes>*             GradientType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OutTemplate;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.PreConstruct
struct UUI_GradientMasked_Base_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.OnMaterialRefreshed
struct UUI_GradientMasked_Base_C_OnMaterialRefreshed_Params
{
};

// Function UI_GradientMasked_Base.UI_GradientMasked_Base_C.ExecuteUbergraph_UI_GradientMasked_Base
struct UUI_GradientMasked_Base_C_ExecuteUbergraph_UI_GradientMasked_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
