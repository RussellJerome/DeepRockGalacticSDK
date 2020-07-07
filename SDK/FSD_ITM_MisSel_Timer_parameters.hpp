#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MisSel_Timer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_MisSel_Timer.ITM_MisSel_Timer_C.Construct
struct UITM_MisSel_Timer_C_Construct_Params
{
};

// Function ITM_MisSel_Timer.ITM_MisSel_Timer_C.UpdateTime
struct UITM_MisSel_Timer_C_UpdateTime_Params
{
};

// Function ITM_MisSel_Timer.ITM_MisSel_Timer_C.PreConstruct
struct UITM_MisSel_Timer_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_MisSel_Timer.ITM_MisSel_Timer_C.ExecuteUbergraph_ITM_MisSel_Timer
struct UITM_MisSel_Timer_C_ExecuteUbergraph_ITM_MisSel_Timer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
