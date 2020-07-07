#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SpectatorBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SpectatorBase.BP_SpectatorBase_C.ReceiveDestroyed
struct ABP_SpectatorBase_C_ReceiveDestroyed_Params
{
};

// Function BP_SpectatorBase.BP_SpectatorBase_C.ReceiveBeginPlay
struct ABP_SpectatorBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_SpectatorBase.BP_SpectatorBase_C.ExecuteUbergraph_BP_SpectatorBase
struct ABP_SpectatorBase_C_ExecuteUbergraph_BP_SpectatorBase_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
