#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ToolTip_WithKeyIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.FadeIn
struct UToolTip_WithKeyIcon_C_FadeIn_Params
{
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetWidth
struct UToolTip_WithKeyIcon_C_SetWidth_Params
{
	float*                                             InWidthOverride;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetMaxWidth
struct UToolTip_WithKeyIcon_C_SetMaxWidth_Params
{
	float*                                             MaxWidth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetMinWidth
struct UToolTip_WithKeyIcon_C_SetMinWidth_Params
{
	float*                                             MinWidth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetPostionAndAlignment
struct UToolTip_WithKeyIcon_C_SetPostionAndAlignment_Params
{
	struct FVector2D*                                  InPosition;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  InAlignment;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetData
struct UToolTip_WithKeyIcon_C_SetData_Params
{
	struct FText*                                      Headline;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FActionIconMapping*                         Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.SetTarget
struct UToolTip_WithKeyIcon_C_SetTarget_Params
{
	class UWidget**                                    Target_Widget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.PreConstruct
struct UToolTip_WithKeyIcon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.Set Tool Tip Owner
struct UToolTip_WithKeyIcon_C_Set_Tool_Tip_Owner_Params
{
	class UWidget**                                    Owner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ToolTip_WithKeyIcon.ToolTip_WithKeyIcon_C.ExecuteUbergraph_ToolTip_WithKeyIcon
struct UToolTip_WithKeyIcon_C_ExecuteUbergraph_ToolTip_WithKeyIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
