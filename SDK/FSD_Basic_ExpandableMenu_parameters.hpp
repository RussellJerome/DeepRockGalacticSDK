#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_ExpandableMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.InstaOpenMenu
struct UBasic_ExpandableMenu_C_InstaOpenMenu_Params
{
	bool*                                              Open;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetFixedSizeOpenHeight
struct UBasic_ExpandableMenu_C_SetFixedSizeOpenHeight_Params
{
	int*                                               Item_Count;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Item_Height;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetOpenHeight
struct UBasic_ExpandableMenu_C_SetOpenHeight_Params
{
	float*                                             OpenHeight;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetHovered
struct UBasic_ExpandableMenu_C_SetHovered_Params
{
	bool*                                              InHovered;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetHeader2
struct UBasic_ExpandableMenu_C_SetHeader2_Params
{
	struct FText*                                      InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetHeader1
struct UBasic_ExpandableMenu_C_SetHeader1_Params
{
	struct FText*                                      InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetMenuOpen
struct UBasic_ExpandableMenu_C_SetMenuOpen_Params
{
	bool*                                              IsOpen;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutIsOpen;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.GetButtonStyle
struct UBasic_ExpandableMenu_C_GetButtonStyle_Params
{
	TEnumAsByte<ENUM_MenuColors>*                      Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 SlateBrush;                                               // (Parm, OutParm)
};

// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBasic_ExpandableMenu_C_BndEvt__CategoryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.SetHeightScale
struct UBasic_ExpandableMenu_C_SetHeightScale_Params
{
	float*                                             NewScale;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.PreConstruct
struct UBasic_ExpandableMenu_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UBasic_ExpandableMenu_C_BndEvt__CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UBasic_ExpandableMenu_C_BndEvt__CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Basic_ExpandableMenu.Basic_ExpandableMenu_C.ExecuteUbergraph_Basic_ExpandableMenu
struct UBasic_ExpandableMenu_C_ExecuteUbergraph_Basic_ExpandableMenu_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
