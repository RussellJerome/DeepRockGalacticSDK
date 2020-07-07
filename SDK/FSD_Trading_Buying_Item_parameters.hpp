#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Trading_Buying_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Trading_Buying_Item.Trading_Buying_Item_C.Buy
struct UTrading_Buying_Item_C_Buy_Params
{
	bool                                               Purchased;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Price;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Trading_Buying_Item.Trading_Buying_Item_C.GetCost
struct UTrading_Buying_Item_C_GetCost_Params
{
	int                                                Cost;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Trading_Buying_Item.Trading_Buying_Item_C.GetAmount
struct UTrading_Buying_Item_C_GetAmount_Params
{
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Trading_Buying_Item.Trading_Buying_Item_C.SetAmount
struct UTrading_Buying_Item_C_SetAmount_Params
{
	int*                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trading_Buying_Item.Trading_Buying_Item_C.OnMouseButtonUp
struct UTrading_Buying_Item_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Trading_Buying_Item.Trading_Buying_Item_C.GetResource
struct UTrading_Buying_Item_C_GetResource_Params
{
	class UResourceData*                               Resource;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Trading_Buying_Item.Trading_Buying_Item_C.SetSelected
struct UTrading_Buying_Item_C_SetSelected_Params
{
	bool*                                              IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trading_Buying_Item.Trading_Buying_Item_C.SetHovered
struct UTrading_Buying_Item_C_SetHovered_Params
{
	bool*                                              IsHovered;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trading_Buying_Item.Trading_Buying_Item_C.PreConstruct
struct UTrading_Buying_Item_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trading_Buying_Item.Trading_Buying_Item_C.SetResource
struct UTrading_Buying_Item_C_SetResource_Params
{
	class UResourceData**                              NewResource;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trading_Buying_Item.Trading_Buying_Item_C.Construct
struct UTrading_Buying_Item_C_Construct_Params
{
};

// Function Trading_Buying_Item.Trading_Buying_Item_C.OnMouseEnter
struct UTrading_Buying_Item_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Trading_Buying_Item.Trading_Buying_Item_C.OnMouseLeave
struct UTrading_Buying_Item_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Trading_Buying_Item.Trading_Buying_Item_C.BndEvt__Trading_Counter_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
struct UTrading_Buying_Item_C_BndEvt__Trading_Counter_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params
{
	int*                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trading_Buying_Item.Trading_Buying_Item_C.ExecuteUbergraph_Trading_Buying_Item
struct UTrading_Buying_Item_C_ExecuteUbergraph_Trading_Buying_Item_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trading_Buying_Item.Trading_Buying_Item_C.OnAmountChanged__DelegateSignature
struct UTrading_Buying_Item_C_OnAmountChanged__DelegateSignature_Params
{
	class UTrading_Buying_Item_C**                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trading_Buying_Item.Trading_Buying_Item_C.OnClicked__DelegateSignature
struct UTrading_Buying_Item_C_OnClicked__DelegateSignature_Params
{
	class UTrading_Buying_Item_C**                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Trading_Buying_Item.Trading_Buying_Item_C.OnHoverEnd__DelegateSignature
struct UTrading_Buying_Item_C_OnHoverEnd__DelegateSignature_Params
{
	class UTrading_Buying_Item_C**                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Trading_Buying_Item.Trading_Buying_Item_C.OnHoverBegin__DelegateSignature
struct UTrading_Buying_Item_C_OnHoverBegin__DelegateSignature_Params
{
	class UTrading_Buying_Item_C**                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
