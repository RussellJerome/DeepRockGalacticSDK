#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_KPI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WND_KPI.WND_KPI_C.OnKeyDown
struct UWND_KPI_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WND_KPI.WND_KPI_C.SelectNextTab
struct UWND_KPI_C_SelectNextTab_Params
{
	int*                                               Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_KPI.WND_KPI_C.OnKeyUp
struct UWND_KPI_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WND_KPI.WND_KPI_C.SelectTab
struct UWND_KPI_C_SelectTab_Params
{
	class UBasic_ButtonTab_C**                         Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUI_KPI_Tab_C**                              Content;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WND_KPI.WND_KPI_C.BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
struct UWND_KPI_C_BndEvt__BTN_Controls_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params
{
};

// Function WND_KPI.WND_KPI_C.BndEvt__BTN_KPI_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWND_KPI_C_BndEvt__BTN_KPI_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function WND_KPI.WND_KPI_C.BndEvt__BTN_Perks_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWND_KPI_C_BndEvt__BTN_Perks_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function WND_KPI.WND_KPI_C.SelectStatistics
struct UWND_KPI_C_SelectStatistics_Params
{
};

// Function WND_KPI.WND_KPI_C.BndEvt__KPIView_K2Node_ComponentBoundEvent_3_OnHasClaimableChanged__DelegateSignature
struct UWND_KPI_C_BndEvt__KPIView_K2Node_ComponentBoundEvent_3_OnHasClaimableChanged__DelegateSignature_Params
{
	bool*                                              HasClaimable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_KPI.WND_KPI_C.Close Window
struct UWND_KPI_C_Close_Window_Params
{
};

// Function WND_KPI.WND_KPI_C.OnShown
struct UWND_KPI_C_OnShown_Params
{
};

// Function WND_KPI.WND_KPI_C.ExecuteUbergraph_WND_KPI
struct UWND_KPI_C_ExecuteUbergraph_WND_KPI_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
