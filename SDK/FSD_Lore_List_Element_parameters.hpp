#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Lore_List_Element_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Lore_List_Element.Lore_List_Element_C.SetData
struct ULore_List_Element_C_SetData_Params
{
	struct FText*                                      Header;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      SubText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D**                                 BackgroundImage;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               BackgroundColor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 FrontImage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FObjectiveMissionIcon*                      MissionIcon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              ShowArrow;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_MM_ButtonStyle>*                     IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lore_List_Element.Lore_List_Element_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct ULore_List_Element_C_BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Lore_List_Element.Lore_List_Element_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct ULore_List_Element_C_BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Lore_List_Element.Lore_List_Element_C.BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct ULore_List_Element_C_BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Lore_List_Element.Lore_List_Element_C.SetSelected
struct ULore_List_Element_C_SetSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lore_List_Element.Lore_List_Element_C.Construct
struct ULore_List_Element_C_Construct_Params
{
};

// Function Lore_List_Element.Lore_List_Element_C.UpdateBorder
struct ULore_List_Element_C_UpdateBorder_Params
{
};

// Function Lore_List_Element.Lore_List_Element_C.PlayIntroAnim
struct ULore_List_Element_C_PlayIntroAnim_Params
{
};

// Function Lore_List_Element.Lore_List_Element_C.InputSourceChanged
struct ULore_List_Element_C_InputSourceChanged_Params
{
	EInputSource*                                      InputSource;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lore_List_Element.Lore_List_Element_C.HideNavIcon
struct ULore_List_Element_C_HideNavIcon_Params
{
};

// Function Lore_List_Element.Lore_List_Element_C.ExecuteUbergraph_Lore_List_Element
struct ULore_List_Element_C_ExecuteUbergraph_Lore_List_Element_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lore_List_Element.Lore_List_Element_C.OnClicked__DelegateSignature
struct ULore_List_Element_C_OnClicked__DelegateSignature_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
