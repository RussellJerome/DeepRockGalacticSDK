#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PRJ_Grenade_StickySmall_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.OnRep_stick
struct APRJ_Grenade_StickySmall_C_OnRep_stick_Params
{
};

// Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.OnImpacted
struct APRJ_Grenade_StickySmall_C_OnImpacted_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.ReceiveBeginPlay
struct APRJ_Grenade_StickySmall_C_ReceiveBeginPlay_Params
{
};

// Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.Boom
struct APRJ_Grenade_StickySmall_C_Boom_Params
{
};

// Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.Beep
struct APRJ_Grenade_StickySmall_C_Beep_Params
{
};

// Function PRJ_Grenade_StickySmall.PRJ_Grenade_StickySmall_C.ExecuteUbergraph_PRJ_Grenade_StickySmall
struct APRJ_Grenade_StickySmall_C_ExecuteUbergraph_PRJ_Grenade_StickySmall_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
