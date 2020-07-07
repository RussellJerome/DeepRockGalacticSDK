#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_MissionStats_Categories_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.SelectNext
struct UUI_MissionStats_Categories_C_SelectNext_Params
{
	bool*                                              ForwardDirection;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Add Vertical Bar
struct UUI_MissionStats_Categories_C_Add_Vertical_Bar_Params
{
};

// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Add Category
struct UUI_MissionStats_Categories_C_Add_Category_Params
{
	class UTexture2D**                                 CategoryIcon;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsAllCategory;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUI_MissionStats_Category_C*                 CategoryWidget;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.GetCategorySelection
struct UUI_MissionStats_Categories_C_GetCategorySelection_Params
{
	TArray<class UTexture2D*>                          Selection;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.PreConstruct
struct UUI_MissionStats_Categories_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Set Categories
struct UUI_MissionStats_Categories_C_Set_Categories_Params
{
	TArray<class UTexture2D*>*                         CategoryIcons;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Setup Widget Events
struct UUI_MissionStats_Categories_C_Setup_Widget_Events_Params
{
	class UUI_MissionStats_Category_C**                Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.On Category Clicked
struct UUI_MissionStats_Categories_C_On_Category_Clicked_Params
{
	class UUI_MissionStats_Category_C**                CategoryWidget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              Is_Selected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.BndEvt__ArrowLeft_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UUI_MissionStats_Categories_C_BndEvt__ArrowLeft_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
};

// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.BndEvt__ArrowRight_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
struct UUI_MissionStats_Categories_C_BndEvt__ArrowRight_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
{
};

// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.ExecuteUbergraph_UI_MissionStats_Categories
struct UUI_MissionStats_Categories_C_ExecuteUbergraph_UI_MissionStats_Categories_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.OnSelectedChanged__DelegateSignature
struct UUI_MissionStats_Categories_C_OnSelectedChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
