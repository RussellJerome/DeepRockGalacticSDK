#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_GrenadeThrow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.UpdateSpline
struct AITM_GrenadeThrow_C_UpdateSpline_Params
{
	TArray<struct FVector>                             Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.ReceiveTick
struct AITM_GrenadeThrow_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.RecieveEquipped
struct AITM_GrenadeThrow_C_RecieveEquipped_Params
{
};

// Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.RecieveUnequipped
struct AITM_GrenadeThrow_C_RecieveUnequipped_Params
{
};

// Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.ReceiveBeginPlay
struct AITM_GrenadeThrow_C_ReceiveBeginPlay_Params
{
};

// Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.Set Is Visible
struct AITM_GrenadeThrow_C_Set_Is_Visible_Params
{
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.GrenadeThrown
struct AITM_GrenadeThrow_C_GrenadeThrown_Params
{
};

// Function ITM_GrenadeThrow.ITM_GrenadeThrow_C.ExecuteUbergraph_ITM_GrenadeThrow
struct AITM_GrenadeThrow_C_ExecuteUbergraph_ITM_GrenadeThrow_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
