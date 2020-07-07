#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_MENU_EscapeMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnMinersManualOpen
struct UMENU_EscapeMenu_C_OnMinersManualOpen_Params
{
	class UObject**                                    IdentifyingObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Open_Specific_Page;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EMinersManualSinglePage*                           Page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnMinersManualNotification
struct UMENU_EscapeMenu_C_OnMinersManualNotification_Params
{
	EMinersManualSection*                              PendingSection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid*                                      Pending_ID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.ToggleButton
struct UMENU_EscapeMenu_C_ToggleButton_Params
{
	class UHeader_ButtonCutCorner_C**                  InButton;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OpenSection
struct UMENU_EscapeMenu_C_OpenSection_Params
{
	class UWindowWidget**                              InSection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              AddToWindowManager;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnMouseButtonUp
struct UMENU_EscapeMenu_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetHUDVisible
struct UMENU_EscapeMenu_C_SetHUDVisible_Params
{
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.NotInParty
struct UMENU_EscapeMenu_C_NotInParty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.UpdateDebugTerrainHash
struct UMENU_EscapeMenu_C_UpdateDebugTerrainHash_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetupLeaveButton
struct UMENU_EscapeMenu_C_SetupLeaveButton_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnKeyUp
struct UMENU_EscapeMenu_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_B9B49EC34D71CFDC07BF12AA58CE1ADE
struct UMENU_EscapeMenu_C_OnFailure_B9B49EC34D71CFDC07BF12AA58CE1ADE_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_B9B49EC34D71CFDC07BF12AA58CE1ADE
struct UMENU_EscapeMenu_C_OnSuccess_B9B49EC34D71CFDC07BF12AA58CE1ADE_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_2723501B4F5B15367D2461B5F901451A
struct UMENU_EscapeMenu_C_OnFailure_2723501B4F5B15367D2461B5F901451A_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_2723501B4F5B15367D2461B5F901451A
struct UMENU_EscapeMenu_C_OnSuccess_2723501B4F5B15367D2461B5F901451A_Params
{
	struct FBlueprintSessionResult*                    Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_2445084B4952F2116D9957A0465D5CFB
struct UMENU_EscapeMenu_C_OnFailure_2445084B4952F2116D9957A0465D5CFB_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_2445084B4952F2116D9957A0465D5CFB
struct UMENU_EscapeMenu_C_OnSuccess_2445084B4952F2116D9957A0465D5CFB_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnFailure_D3AC1B41459DE7C179341F9A3024CEE9
struct UMENU_EscapeMenu_C_OnFailure_D3AC1B41459DE7C179341F9A3024CEE9_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnSuccess_D3AC1B41459DE7C179341F9A3024CEE9
struct UMENU_EscapeMenu_C_OnSuccess_D3AC1B41459DE7C179341F9A3024CEE9_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.Construct
struct UMENU_EscapeMenu_C_Construct_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.SetFocus
struct UMENU_EscapeMenu_C_SetFocus_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnQuitGame
struct UMENU_EscapeMenu_C_OnQuitGame_Params
{
	bool*                                              Yes;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnLeaveTeam
struct UMENU_EscapeMenu_C_OnLeaveTeam_Params
{
	bool*                                              Yes;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Discord_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UMENU_EscapeMenu_C_BndEvt__BTN_Discord_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.PreConstruct
struct UMENU_EscapeMenu_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnShown
struct UMENU_EscapeMenu_C_OnShown_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnClosed
struct UMENU_EscapeMenu_C_OnClosed_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Resume2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UMENU_EscapeMenu_C_BndEvt__BTN_Resume2_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.Answer
struct UMENU_EscapeMenu_C_Answer_Params
{
	bool*                                              Yes;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Reconnect_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
struct UMENU_EscapeMenu_C_BndEvt__BTN_Reconnect_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_CallToAction2_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
struct UMENU_EscapeMenu_C_BndEvt__BTN_CallToAction2_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
struct UMENU_EscapeMenu_C_BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OpenMinersManualSection
struct UMENU_EscapeMenu_C_OpenMinersManualSection_Params
{
	class UObject**                                    IdentifyingObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__Basic_ButtonCutCorner_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
struct UMENU_EscapeMenu_C_BndEvt__Basic_ButtonCutCorner_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params
{
	class UHeader_ButtonCutCorner_C**                  Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Statuss_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
struct UMENU_EscapeMenu_C_BndEvt__BTN_Statuss_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params
{
	class UHeader_ButtonCutCorner_C**                  Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_Options_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature
struct UMENU_EscapeMenu_C_BndEvt__BTN_Options_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature_Params
{
	class UHeader_ButtonCutCorner_C**                  Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OpenMinersManualPage
struct UMENU_EscapeMenu_C_OpenMinersManualPage_Params
{
	EMinersManualSinglePage*                           Page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.SelectNextButton
struct UMENU_EscapeMenu_C_SelectNextButton_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.SelectPrevButton
struct UMENU_EscapeMenu_C_SelectPrevButton_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnInputSourceChanged
struct UMENU_EscapeMenu_C_OnInputSourceChanged_Params
{
	EInputSource*                                      InputSource;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__B_Exit_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UMENU_EscapeMenu_C_BndEvt__B_Exit_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
	class UBasic_ButtonCutCorner_C**                   Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__B_Leave_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
struct UMENU_EscapeMenu_C_BndEvt__B_Leave_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_ChangeProfile_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UMENU_EscapeMenu_C_BndEvt__BTN_ChangeProfile_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
	class UBasic_ButtonCutCorner_C**                   Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OpenMinersManualFromID
struct UMENU_EscapeMenu_C_OpenMinersManualFromID_Params
{
	EMinersManualSection*                              Section;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid*                                      ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnNewTopWindow
struct UMENU_EscapeMenu_C_OnNewTopWindow_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.OnCreditsClicked
struct UMENU_EscapeMenu_C_OnCreditsClicked_Params
{
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.BndEvt__BTN_PatchNotes_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UMENU_EscapeMenu_C_BndEvt__BTN_PatchNotes_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
	class UHeader_ButtonCutCorner_C**                  Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MENU_EscapeMenu.MENU_EscapeMenu_C.ExecuteUbergraph_MENU_EscapeMenu
struct UMENU_EscapeMenu_C_ExecuteUbergraph_MENU_EscapeMenu_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
