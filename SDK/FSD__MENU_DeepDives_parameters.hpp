#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD__MENU_DeepDives_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function _MENU_DeepDives._MENU_DeepDives_C.OnMouseButtonDown
struct U_MENU_DeepDives_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function _MENU_DeepDives._MENU_DeepDives_C.ConvertDurationToText
struct U_MENU_DeepDives_C_ConvertDurationToText_Params
{
	struct FTimespan*                                  A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function _MENU_DeepDives._MENU_DeepDives_C.SetPage
struct U_MENU_DeepDives_C_SetPage_Params
{
	class UWidget**                                    InPage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function _MENU_DeepDives._MENU_DeepDives_C.OnKeyUp
struct U_MENU_DeepDives_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function _MENU_DeepDives._MENU_DeepDives_C.OnShown
struct U_MENU_DeepDives_C_OnShown_Params
{
};

// Function _MENU_DeepDives._MENU_DeepDives_C.PreConstruct
struct U_MENU_DeepDives_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_DeepDives._MENU_DeepDives_C.BndEvt__TabPage_Start_K2Node_ComponentBoundEvent_0_OnJoinMission__DelegateSignature
struct U_MENU_DeepDives_C_BndEvt__TabPage_Start_K2Node_ComponentBoundEvent_0_OnJoinMission__DelegateSignature_Params
{
	bool*                                              EliteDeepDive;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_DeepDives._MENU_DeepDives_C.BndEvt__MenuTemplate_K2Node_ComponentBoundEvent_1_OnClosedClicked__DelegateSignature
struct U_MENU_DeepDives_C_BndEvt__MenuTemplate_K2Node_ComponentBoundEvent_1_OnClosedClicked__DelegateSignature_Params
{
};

// Function _MENU_DeepDives._MENU_DeepDives_C.BndEvt__MenuTemplate_K2Node_ComponentBoundEvent_2_OnBackClicked__DelegateSignature
struct U_MENU_DeepDives_C_BndEvt__MenuTemplate_K2Node_ComponentBoundEvent_2_OnBackClicked__DelegateSignature_Params
{
};

// Function _MENU_DeepDives._MENU_DeepDives_C.Update Time
struct U_MENU_DeepDives_C_Update_Time_Params
{
};

// Function _MENU_DeepDives._MENU_DeepDives_C.OnClosed
struct U_MENU_DeepDives_C_OnClosed_Params
{
};

// Function _MENU_DeepDives._MENU_DeepDives_C.First Time Shout
struct U_MENU_DeepDives_C_First_Time_Shout_Params
{
};

// Function _MENU_DeepDives._MENU_DeepDives_C.ExecuteUbergraph__MENU_DeepDives
struct U_MENU_DeepDives_C_ExecuteUbergraph__MENU_DeepDives_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
