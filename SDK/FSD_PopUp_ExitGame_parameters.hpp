#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PopUp_ExitGame_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PopUp_ExitGame.Popup_ExitGame_C.OnKeyUp
struct UPopup_ExitGame_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PopUp_ExitGame.Popup_ExitGame_C.OnShow
struct UPopup_ExitGame_C_OnShow_Params
{
	struct FText*                                      Title;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText*                                      Message;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PopUp_ExitGame.Popup_ExitGame_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UPopup_ExitGame_C_BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function PopUp_ExitGame.Popup_ExitGame_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UPopup_ExitGame_C_BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function PopUp_ExitGame.Popup_ExitGame_C.PreConstruct
struct UPopup_ExitGame_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PopUp_ExitGame.Popup_ExitGame_C.Yes
struct UPopup_ExitGame_C_Yes_Params
{
};

// Function PopUp_ExitGame.Popup_ExitGame_C.No
struct UPopup_ExitGame_C_No_Params
{
};

// Function PopUp_ExitGame.Popup_ExitGame_C.BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UPopup_ExitGame_C_BndEvt__BTN_Survey2_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function PopUp_ExitGame.Popup_ExitGame_C.ExecuteUbergraph_Popup_ExitGame
struct UPopup_ExitGame_C_ExecuteUbergraph_Popup_ExitGame_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PopUp_ExitGame.Popup_ExitGame_C.OnYesNoClicked__DelegateSignature
struct UPopup_ExitGame_C_OnYesNoClicked__DelegateSignature_Params
{
	bool*                                              ClickedYes;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
