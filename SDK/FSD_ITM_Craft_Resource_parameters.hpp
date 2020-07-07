#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Craft_Resource_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_Craft_Resource.ITM_Craft_Resource_C.OnResourceAmountChanged
struct UITM_Craft_Resource_C_OnResourceAmountChanged_Params
{
	class UResourceData**                              Resource;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             currentAmount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Craft_Resource.ITM_Craft_Resource_C.SetAmount
struct UITM_Craft_Resource_C_SetAmount_Params
{
	float*                                             amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Craft_Resource.ITM_Craft_Resource_C.Construct
struct UITM_Craft_Resource_C_Construct_Params
{
};

// Function ITM_Craft_Resource.ITM_Craft_Resource_C.PreConstruct
struct UITM_Craft_Resource_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Craft_Resource.ITM_Craft_Resource_C.ExecuteUbergraph_ITM_Craft_Resource
struct UITM_Craft_Resource_C_ExecuteUbergraph_ITM_Craft_Resource_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
