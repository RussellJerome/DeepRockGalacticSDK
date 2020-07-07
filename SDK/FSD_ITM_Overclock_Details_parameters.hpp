#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Overclock_Details_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_Overclock_Details.ITM_Overclock_Details_C.Clear
struct UITM_Overclock_Details_C_Clear_Params
{
};

// Function ITM_Overclock_Details.ITM_Overclock_Details_C.AddStat
struct UITM_Overclock_Details_C_AddStat_Params
{
	struct FItemUpgradeStatText*                       InStat;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ITM_Overclock_Details.ITM_Overclock_Details_C.SetData
struct UITM_Overclock_Details_C_SetData_Params
{
	class UItemUpgrade**                               InUpgrade;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Overclock_Details.ITM_Overclock_Details_C.PreConstruct
struct UITM_Overclock_Details_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Overclock_Details.ITM_Overclock_Details_C.ExecuteUbergraph_ITM_Overclock_Details
struct UITM_Overclock_Details_C_ExecuteUbergraph_ITM_Overclock_Details_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
