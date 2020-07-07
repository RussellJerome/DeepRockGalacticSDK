#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Popup_GearUpgrade_Buy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.OnKeyUp
struct UPopup_GearUpgrade_Buy_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.Show
struct UPopup_GearUpgrade_Buy_C_Show_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItemUpgrade**                               Upgrade;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UPopup_GearUpgrade_Buy_C_BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UPopup_GearUpgrade_Buy_C_BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.PreConstruct
struct UPopup_GearUpgrade_Buy_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.Back
struct UPopup_GearUpgrade_Buy_C_Back_Params
{
};

// Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.Buy
struct UPopup_GearUpgrade_Buy_C_Buy_Params
{
};

// Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.OnClosed
struct UPopup_GearUpgrade_Buy_C_OnClosed_Params
{
};

// Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.ExecuteUbergraph_Popup_GearUpgrade_Buy
struct UPopup_GearUpgrade_Buy_C_ExecuteUbergraph_Popup_GearUpgrade_Buy_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
