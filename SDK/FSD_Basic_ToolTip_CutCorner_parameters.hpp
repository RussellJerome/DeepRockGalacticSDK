#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_ToolTip_CutCorner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Basic_ToolTip_CutCorner.Basic_ToolTip_CutCorner_C.FadeIn
struct UBasic_ToolTip_CutCorner_C_FadeIn_Params
{
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ToolTip_CutCorner.Basic_ToolTip_CutCorner_C.SetWidth
struct UBasic_ToolTip_CutCorner_C_SetWidth_Params
{
	float*                                             InWidthOverride;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ToolTip_CutCorner.Basic_ToolTip_CutCorner_C.SetMaxWidth
struct UBasic_ToolTip_CutCorner_C_SetMaxWidth_Params
{
	float*                                             MaxWidth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ToolTip_CutCorner.Basic_ToolTip_CutCorner_C.SetMinWidth
struct UBasic_ToolTip_CutCorner_C_SetMinWidth_Params
{
	float*                                             MinWidth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ToolTip_CutCorner.Basic_ToolTip_CutCorner_C.SetPostionAndAlignment
struct UBasic_ToolTip_CutCorner_C_SetPostionAndAlignment_Params
{
	struct FVector2D*                                  InPosition;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  InAlignment;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ToolTip_CutCorner.Basic_ToolTip_CutCorner_C.SetText
struct UBasic_ToolTip_CutCorner_C_SetText_Params
{
	struct FText*                                      Headline;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Basic_ToolTip_CutCorner.Basic_ToolTip_CutCorner_C.SetTarget
struct UBasic_ToolTip_CutCorner_C_SetTarget_Params
{
	class UWidget**                                    Target_Widget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Basic_ToolTip_CutCorner.Basic_ToolTip_CutCorner_C.PreConstruct
struct UBasic_ToolTip_CutCorner_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ToolTip_CutCorner.Basic_ToolTip_CutCorner_C.Set Tool Tip Owner
struct UBasic_ToolTip_CutCorner_C_Set_Tool_Tip_Owner_Params
{
	class UWidget**                                    Owner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Basic_ToolTip_CutCorner.Basic_ToolTip_CutCorner_C.ExecuteUbergraph_Basic_ToolTip_CutCorner
struct UBasic_ToolTip_CutCorner_C_ExecuteUbergraph_Basic_ToolTip_CutCorner_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
