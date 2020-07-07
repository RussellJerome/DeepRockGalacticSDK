#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD__MENU_Trading_Selling_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function _MENU_Trading_Selling._MENU_Trading_Selling_C.SellSelectedItems
struct U_MENU_Trading_Selling_C_SellSelectedItems_Params
{
	bool                                               Minerals_Sold;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_Trading_Selling._MENU_Trading_Selling_C.UpdateValue
struct U_MENU_Trading_Selling_C_UpdateValue_Params
{
	int                                                CurrentValue;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_Trading_Selling._MENU_Trading_Selling_C.SetResources
struct U_MENU_Trading_Selling_C_SetResources_Params
{
	TArray<class UResourceData*>                       Resources;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UTrading_Selling_Item_C*>             Items;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function _MENU_Trading_Selling._MENU_Trading_Selling_C.PreConstruct
struct U_MENU_Trading_Selling_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_Trading_Selling._MENU_Trading_Selling_C.OnAmountChanged
struct U_MENU_Trading_Selling_C_OnAmountChanged_Params
{
	class UTrading_Selling_Item_C**                    Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function _MENU_Trading_Selling._MENU_Trading_Selling_C.BndEvt__ClearButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct U_MENU_Trading_Selling_C_BndEvt__ClearButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function _MENU_Trading_Selling._MENU_Trading_Selling_C.BndEvt__SellButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
struct U_MENU_Trading_Selling_C_BndEvt__SellButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
{
};

// Function _MENU_Trading_Selling._MENU_Trading_Selling_C.Construct
struct U_MENU_Trading_Selling_C_Construct_Params
{
};

// Function _MENU_Trading_Selling._MENU_Trading_Selling_C.ExecuteUbergraph__MENU_Trading_Selling
struct U_MENU_Trading_Selling_C_ExecuteUbergraph__MENU_Trading_Selling_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
