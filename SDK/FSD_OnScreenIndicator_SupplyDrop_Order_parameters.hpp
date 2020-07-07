#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OnScreenIndicator_SupplyDrop_Order_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OnScreenIndicator_SupplyDrop_Order.OnScreenIndicator_SupplyDrop_Order_C.SetDetails
struct UOnScreenIndicator_SupplyDrop_Order_C_SetDetails_Params
{
	struct FText*                                      Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               Cost;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UResourceData**                              ResourceRequired;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnScreenIndicator_SupplyDrop_Order.OnScreenIndicator_SupplyDrop_Order_C.PreConstruct
struct UOnScreenIndicator_SupplyDrop_Order_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnScreenIndicator_SupplyDrop_Order.OnScreenIndicator_SupplyDrop_Order_C.ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order
struct UOnScreenIndicator_SupplyDrop_Order_C_ExecuteUbergraph_OnScreenIndicator_SupplyDrop_Order_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
