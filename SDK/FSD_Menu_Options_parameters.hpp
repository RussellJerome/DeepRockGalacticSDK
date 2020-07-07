#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Menu_Options_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Menu_Options.Menu_Options_C.OnKeyUp
struct UMenu_Options_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Menu_Options.Menu_Options_C.DeselectTab
struct UMenu_Options_C_DeselectTab_Params
{
	class UBasic_ButtonTab_C**                         Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Menu_Options.Menu_Options_C.SelectTab
struct UMenu_Options_C_SelectTab_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              WithSound;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu_Options.Menu_Options_C.Construct
struct UMenu_Options_C_Construct_Params
{
};

// Function Menu_Options.Menu_Options_C.SelectFirstTab
struct UMenu_Options_C_SelectFirstTab_Params
{
};

// Function Menu_Options.Menu_Options_C.BndEvt__Button_Apply_K2Node_ComponentBoundEvent_340_OnButtonClickedEvent__DelegateSignature
struct UMenu_Options_C_BndEvt__Button_Apply_K2Node_ComponentBoundEvent_340_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Menu_Options.Menu_Options_C.BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UMenu_Options_C_BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function Menu_Options.Menu_Options_C.BndEvt__BTN_Audio_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UMenu_Options_C_BndEvt__BTN_Audio_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function Menu_Options.Menu_Options_C.BndEvt__BTN_Graphics_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UMenu_Options_C_BndEvt__BTN_Graphics_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function Menu_Options.Menu_Options_C.BndEvt__BTN_UI_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UMenu_Options_C_BndEvt__BTN_UI_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
};

// Function Menu_Options.Menu_Options_C.BndEvt__BTN_Gameplay_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature
struct UMenu_Options_C_BndEvt__BTN_Gameplay_K2Node_ComponentBoundEvent_29_OnClicked__DelegateSignature_Params
{
};

// Function Menu_Options.Menu_Options_C.BndEvt__BTN_Privacy_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature
struct UMenu_Options_C_BndEvt__BTN_Privacy_K2Node_ComponentBoundEvent_17_OnClicked__DelegateSignature_Params
{
};

// Function Menu_Options.Menu_Options_C.OnClosed
struct UMenu_Options_C_OnClosed_Params
{
};

// Function Menu_Options.Menu_Options_C.OnShown
struct UMenu_Options_C_OnShown_Params
{
};

// Function Menu_Options.Menu_Options_C.BndEvt__BTN_Layout_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UMenu_Options_C_BndEvt__BTN_Layout_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function Menu_Options.Menu_Options_C.UpdateTabs
struct UMenu_Options_C_UpdateTabs_Params
{
	EInputSource*                                      InputSource;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu_Options.Menu_Options_C.BndEvt__BTN_Credits_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UMenu_Options_C_BndEvt__BTN_Credits_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function Menu_Options.Menu_Options_C.ExecuteUbergraph_Menu_Options
struct UMenu_Options_C_ExecuteUbergraph_Menu_Options_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu_Options.Menu_Options_C.CreditsClicked__DelegateSignature
struct UMenu_Options_C_CreditsClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
