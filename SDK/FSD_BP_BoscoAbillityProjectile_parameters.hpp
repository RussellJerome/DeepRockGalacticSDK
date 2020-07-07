#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_BoscoAbillityProjectile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_BoscoAbillityProjectile.BP_BoscoAbillityProjectile_C.OnImpacted
struct ABP_BoscoAbillityProjectile_C_OnImpacted_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_BoscoAbillityProjectile.BP_BoscoAbillityProjectile_C.ReceiveBeginPlay
struct ABP_BoscoAbillityProjectile_C_ReceiveBeginPlay_Params
{
};

// Function BP_BoscoAbillityProjectile.BP_BoscoAbillityProjectile_C.ExecuteUbergraph_BP_BoscoAbillityProjectile
struct ABP_BoscoAbillityProjectile_C_ExecuteUbergraph_BP_BoscoAbillityProjectile_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
