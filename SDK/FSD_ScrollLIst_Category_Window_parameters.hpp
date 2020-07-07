#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ScrollLIst_Category_Window_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.SelectNext
struct UScrollLIst_Category_Window_C_SelectNext_Params
{
	int*                                               Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.CreateButton
struct UScrollLIst_Category_Window_C_CreateButton_Params
{
	struct FMM_ButtonInfo*                             Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      HeaderText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              ShouldClick;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ShowArrow;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.OnClicked
struct UScrollLIst_Category_Window_C_OnClicked_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.SetData
struct UScrollLIst_Category_Window_C_SetData_Params
{
	class U_MENU_MinersManual_C**                      _MENU_MinersManual;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.PlayButtonIntro
struct UScrollLIst_Category_Window_C_PlayButtonIntro_Params
{
	class ULore_List_Element_C**                       Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.Clear
struct UScrollLIst_Category_Window_C_Clear_Params
{
};

// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.Tick
struct UScrollLIst_Category_Window_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.PlayAnimInternal
struct UScrollLIst_Category_Window_C_PlayAnimInternal_Params
{
	class ULore_List_Element_C**                       Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.CheckForHeader
struct UScrollLIst_Category_Window_C_CheckForHeader_Params
{
	class ULore_List_Element_C**                       Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.Construct
struct UScrollLIst_Category_Window_C_Construct_Params
{
};

// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.CustomEvent
struct UScrollLIst_Category_Window_C_CustomEvent_Params
{
	float*                                             CurrentOffset;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.ScrollIntoViewDelay
struct UScrollLIst_Category_Window_C_ScrollIntoViewDelay_Params
{
	class UWidget**                                    WidgetToFind;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.PrepareNewSection
struct UScrollLIst_Category_Window_C_PrepareNewSection_Params
{
	int*                                               NumberOfButtons;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.OnInitialized
struct UScrollLIst_Category_Window_C_OnInitialized_Params
{
};

// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.DecreseFillSpace
struct UScrollLIst_Category_Window_C_DecreseFillSpace_Params
{
};

// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.SetSelectedButton
struct UScrollLIst_Category_Window_C_SetSelectedButton_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScrollLIst_Category_Window.ScrollLIst_Category_Window_C.ExecuteUbergraph_ScrollLIst_Category_Window
struct UScrollLIst_Category_Window_C_ExecuteUbergraph_ScrollLIst_Category_Window_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
