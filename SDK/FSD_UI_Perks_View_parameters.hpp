#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Perks_View_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_Perks_View.UI_Perks_View_C.HandleMouseEvent
struct UUI_Perks_View_C_HandleMouseEvent_Params
{
	struct FPointerEvent*                              InMouseEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool*                                              InUp;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutHandled;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perks_View.UI_Perks_View_C.HandleKeyEvent
struct UUI_Perks_View_C_HandleKeyEvent_Params
{
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              InUp;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutHandled;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perks_View.UI_Perks_View_C.SelectPerkWidget
struct UUI_Perks_View_C_SelectPerkWidget_Params
{
	class UUI_Perks_Item_C**                           PerkWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_Perks_View.UI_Perks_View_C.PreConstruct
struct UUI_Perks_View_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perks_View.UI_Perks_View_C.OnPerkClicked_Event
struct UUI_Perks_View_C_OnPerkClicked_Event_Params
{
	class UUI_Perks_Item_C**                           PerkWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_Perks_View.UI_Perks_View_C.BndEvt__UI_Perks_Buy_K2Node_ComponentBoundEvent_0_OnPerkClaimed__DelegateSignature
struct UUI_Perks_View_C_BndEvt__UI_Perks_Buy_K2Node_ComponentBoundEvent_0_OnPerkClaimed__DelegateSignature_Params
{
};

// Function UI_Perks_View.UI_Perks_View_C.BndEvt__ButtonOkHint_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UUI_Perks_View_C_BndEvt__ButtonOkHint_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function UI_Perks_View.UI_Perks_View_C.Toggle Loadout Hint
struct UUI_Perks_View_C_Toggle_Loadout_Hint_Params
{
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perks_View.UI_Perks_View_C.Construct
struct UUI_Perks_View_C_Construct_Params
{
};

// Function UI_Perks_View.UI_Perks_View_C.OnFocusLost
struct UUI_Perks_View_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_Perks_View.UI_Perks_View_C.ExecuteUbergraph_UI_Perks_View
struct UUI_Perks_View_C_ExecuteUbergraph_UI_Perks_View_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
