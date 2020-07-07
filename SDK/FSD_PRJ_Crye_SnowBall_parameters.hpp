#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PRJ_Crye_SnowBall_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PRJ_Crye_SnowBall.PRJ_Crye_SnowBall_C.OnImpacted
struct APRJ_Crye_SnowBall_C_OnImpacted_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PRJ_Crye_SnowBall.PRJ_Crye_SnowBall_C.ExecuteUbergraph_PRJ_Crye_SnowBall
struct APRJ_Crye_SnowBall_C_ExecuteUbergraph_PRJ_Crye_SnowBall_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
