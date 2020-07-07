#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_FocusableCanvas_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnFocusReceived
struct UUI_FocusableCanvas_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UI_FocusableCanvas.UI_FocusableCanvas_C.Construct
struct UUI_FocusableCanvas_C_Construct_Params
{
};

// Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnFocusLost
struct UUI_FocusableCanvas_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnMouseEnter
struct UUI_FocusableCanvas_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnMouseLeave
struct UUI_FocusableCanvas_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_FocusableCanvas.UI_FocusableCanvas_C.ExecuteUbergraph_UI_FocusableCanvas
struct UUI_FocusableCanvas_C_ExecuteUbergraph_UI_FocusableCanvas_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnHoverChanged__DelegateSignature
struct UUI_FocusableCanvas_C_OnHoverChanged__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              IsHovered;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_FocusableCanvas.UI_FocusableCanvas_C.OnFocusChanged__DelegateSignature
struct UUI_FocusableCanvas_C_OnFocusChanged__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              IsFocused;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
