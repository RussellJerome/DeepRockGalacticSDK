#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TOOLTIP_Overclock_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TOOLTIP_Overclock_Item.TOOLTIP_Overclock_Item_C.PreConstruct
struct UTOOLTIP_Overclock_Item_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TOOLTIP_Overclock_Item.TOOLTIP_Overclock_Item_C.SetOverclock
struct UTOOLTIP_Overclock_Item_C_SetOverclock_Params
{
	class UItemUpgrade**                               Overclock;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TOOLTIP_Overclock_Item.TOOLTIP_Overclock_Item_C.ExecuteUbergraph_TOOLTIP_Overclock_Item
struct UTOOLTIP_Overclock_Item_C_ExecuteUbergraph_TOOLTIP_Overclock_Item_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
