#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD__MENU_Trading_Buying_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.GetCurrentCost
struct U_MENU_Trading_Buying_C_GetCurrentCost_Params
{
	int                                                CurrentCost;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.BuySelected
struct U_MENU_Trading_Buying_C_BuySelected_Params
{
	bool                                               MineralsBought;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.UpdateCost
struct U_MENU_Trading_Buying_C_UpdateCost_Params
{
	int                                                TotalCost;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.PreConstruct
struct U_MENU_Trading_Buying_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.BndEvt__ClearButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct U_MENU_Trading_Buying_C_BndEvt__ClearButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
struct U_MENU_Trading_Buying_C_BndEvt__BuyButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params
{
};

// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.Clear
struct U_MENU_Trading_Buying_C_Clear_Params
{
};

// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.Construct
struct U_MENU_Trading_Buying_C_Construct_Params
{
};

// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.OnCreditsChanged_Event
struct U_MENU_Trading_Buying_C_OnCreditsChanged_Event_Params
{
	int*                                               Credits;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.OnAmountChanged
struct U_MENU_Trading_Buying_C_OnAmountChanged_Params
{
	class UTrading_Buying_Item_C**                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_Trading_Buying._MENU_Trading_Buying_C.ExecuteUbergraph__MENU_Trading_Buying
struct U_MENU_Trading_Buying_C_ExecuteUbergraph__MENU_Trading_Buying_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
