#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_KeyCapture_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_KeyCapture.UI_KeyCapture_C.GetCurrentKeyName
struct UUI_KeyCapture_C_GetCurrentKeyName_Params
{
	struct FText                                       InputKey;                                                 // (Parm, OutParm)
};

// Function UI_KeyCapture.UI_KeyCapture_C.UpdateClearButton
struct UUI_KeyCapture_C_UpdateClearButton_Params
{
};

// Function UI_KeyCapture.UI_KeyCapture_C.UpdateKeyLabel
struct UUI_KeyCapture_C_UpdateKeyLabel_Params
{
};

// Function UI_KeyCapture.UI_KeyCapture_C.Receive Key
struct UUI_KeyCapture_C_Receive_Key_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_KeyCapture.UI_KeyCapture_C.OnMouseButtonUp
struct UUI_KeyCapture_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_KeyCapture.UI_KeyCapture_C.OnKeyUp
struct UUI_KeyCapture_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_KeyCapture.UI_KeyCapture_C.OnFocusReceived
struct UUI_KeyCapture_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_KeyCapture.UI_KeyCapture_C.Construct
struct UUI_KeyCapture_C_Construct_Params
{
};

// Function UI_KeyCapture.UI_KeyCapture_C.PreConstruct
struct UUI_KeyCapture_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_KeyCapture.UI_KeyCapture_C.OnFocusLost
struct UUI_KeyCapture_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_KeyCapture.UI_KeyCapture_C.Initialize
struct UUI_KeyCapture_C_Initialize_Params
{
	struct FName*                                      ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EKeyBindingAxis*                                   ActionAxis;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_KeyCapture.UI_KeyCapture_C.UpdateKeyBinding
struct UUI_KeyCapture_C_UpdateKeyBinding_Params
{
};

// Function UI_KeyCapture.UI_KeyCapture_C.OnMouseEnter
struct UUI_KeyCapture_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_KeyCapture.UI_KeyCapture_C.OnMouseLeave
struct UUI_KeyCapture_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_KeyCapture.UI_KeyCapture_C.BndEvt__ClearButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UUI_KeyCapture_C_BndEvt__ClearButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_KeyCapture.UI_KeyCapture_C.AddKey
struct UUI_KeyCapture_C_AddKey_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_KeyCapture.UI_KeyCapture_C.On Prompt
struct UUI_KeyCapture_C_On_Prompt_Params
{
	bool*                                              Yes;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_KeyCapture.UI_KeyCapture_C.ExecuteUbergraph_UI_KeyCapture
struct UUI_KeyCapture_C_ExecuteUbergraph_UI_KeyCapture_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_KeyCapture.UI_KeyCapture_C.OnKeyCaptureCancelled__DelegateSignature
struct UUI_KeyCapture_C_OnKeyCaptureCancelled__DelegateSignature_Params
{
};

// Function UI_KeyCapture.UI_KeyCapture_C.OnKeyCaptureChanged__DelegateSignature
struct UUI_KeyCapture_C_OnKeyCaptureChanged__DelegateSignature_Params
{
};

// Function UI_KeyCapture.UI_KeyCapture_C.OnKeyCaptureError__DelegateSignature
struct UUI_KeyCapture_C_OnKeyCaptureError__DelegateSignature_Params
{
};

// Function UI_KeyCapture.UI_KeyCapture_C.OnKeyCaptureFinished__DelegateSignature
struct UUI_KeyCapture_C_OnKeyCaptureFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
