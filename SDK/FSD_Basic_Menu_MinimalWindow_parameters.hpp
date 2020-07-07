#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_Menu_MinimalWindow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.IsMouseOver
struct UBasic_Menu_MinimalWindow_C_IsMouseOver_Params
{
	bool                                               MouseOver;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnFocusReceived
struct UBasic_Menu_MinimalWindow_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.PreConstruct
struct UBasic_Menu_MinimalWindow_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnFocusLost
struct UBasic_Menu_MinimalWindow_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnMouseEnter
struct UBasic_Menu_MinimalWindow_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnMouseLeave
struct UBasic_Menu_MinimalWindow_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.ExecuteUbergraph_Basic_Menu_MinimalWindow
struct UBasic_Menu_MinimalWindow_C_ExecuteUbergraph_Basic_Menu_MinimalWindow_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnLostFocus__DelegateSignature
struct UBasic_Menu_MinimalWindow_C_OnLostFocus__DelegateSignature_Params
{
	class UBasic_Menu_MinimalWindow_C**                Window;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnReceivedFocus__DelegateSignature
struct UBasic_Menu_MinimalWindow_C_OnReceivedFocus__DelegateSignature_Params
{
	class UBasic_Menu_MinimalWindow_C**                Window;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnCursorLeave__DelegateSignature
struct UBasic_Menu_MinimalWindow_C_OnCursorLeave__DelegateSignature_Params
{
	class UBasic_Menu_MinimalWindow_C**                Window;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.OnCursorEnter__DelegateSignature
struct UBasic_Menu_MinimalWindow_C_OnCursorEnter__DelegateSignature_Params
{
	class UBasic_Menu_MinimalWindow_C**                Window;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.ThickBars__DelegateSignature
struct UBasic_Menu_MinimalWindow_C_ThickBars__DelegateSignature_Params
{
};

// Function Basic_Menu_MinimalWindow.Basic_Menu_MinimalWindow_C.On Clicked__DelegateSignature
struct UBasic_Menu_MinimalWindow_C_On_Clicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
