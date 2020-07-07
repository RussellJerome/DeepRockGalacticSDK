#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_MissionStats_Category_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_MissionStats_Category.UI_MissionStats_Category_C.Click
struct UUI_MissionStats_Category_C_Click_Params
{
};

// Function UI_MissionStats_Category.UI_MissionStats_Category_C.IsInteractable
struct UUI_MissionStats_Category_C_IsInteractable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_MissionStats_Category.UI_MissionStats_Category_C.GetCategoryIcon
struct UUI_MissionStats_Category_C_GetCategoryIcon_Params
{
	class UTexture2D*                                  CategoryIcon;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MissionStats_Category.UI_MissionStats_Category_C.OnMouseButtonUp
struct UUI_MissionStats_Category_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_MissionStats_Category.UI_MissionStats_Category_C.IsSelected
struct UUI_MissionStats_Category_C_IsSelected_Params
{
	bool                                               CategorySelected;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MissionStats_Category.UI_MissionStats_Category_C.PreConstruct
struct UUI_MissionStats_Category_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MissionStats_Category.UI_MissionStats_Category_C.Set Selected
struct UUI_MissionStats_Category_C_Set_Selected_Params
{
	bool*                                              CategorySelected;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MissionStats_Category.UI_MissionStats_Category_C.Construct
struct UUI_MissionStats_Category_C_Construct_Params
{
};

// Function UI_MissionStats_Category.UI_MissionStats_Category_C.OnMouseEnter
struct UUI_MissionStats_Category_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_MissionStats_Category.UI_MissionStats_Category_C.OnMouseLeave
struct UUI_MissionStats_Category_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_MissionStats_Category.UI_MissionStats_Category_C.Set Hovered
struct UUI_MissionStats_Category_C_Set_Hovered_Params
{
	bool*                                              IsHovered;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MissionStats_Category.UI_MissionStats_Category_C.ExecuteUbergraph_UI_MissionStats_Category
struct UUI_MissionStats_Category_C_ExecuteUbergraph_UI_MissionStats_Category_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MissionStats_Category.UI_MissionStats_Category_C.On Clicked__DelegateSignature
struct UUI_MissionStats_Category_C_On_Clicked__DelegateSignature_Params
{
	class UUI_MissionStats_Category_C**                CategoryWidget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              Is_Selected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
