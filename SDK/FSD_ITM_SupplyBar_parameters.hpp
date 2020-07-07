#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_SupplyBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_SupplyBar.ITM_SupplyBar_C.SetProgress
struct UITM_SupplyBar_C_SetProgress_Params
{
	float*                                             Progress__0_1_;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_SupplyBar.ITM_SupplyBar_C.PreConstruct
struct UITM_SupplyBar_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_SupplyBar.ITM_SupplyBar_C.ExecuteUbergraph_ITM_SupplyBar
struct UITM_SupplyBar_C_ExecuteUbergraph_ITM_SupplyBar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
