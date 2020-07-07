#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Detpack_LoadoutProxy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Detpack_LoadoutProxy.BP_Detpack_LoadoutProxy_C.RecieveEquipped
struct ABP_Detpack_LoadoutProxy_C_RecieveEquipped_Params
{
};

// Function BP_Detpack_LoadoutProxy.BP_Detpack_LoadoutProxy_C.RecieveUnequipped
struct ABP_Detpack_LoadoutProxy_C_RecieveUnequipped_Params
{
};

// Function BP_Detpack_LoadoutProxy.BP_Detpack_LoadoutProxy_C.ExecuteUbergraph_BP_Detpack_LoadoutProxy
struct ABP_Detpack_LoadoutProxy_C_ExecuteUbergraph_BP_Detpack_LoadoutProxy_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
