#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SentryLoadoutProxy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SentryLoadoutProxy.BP_SentryLoadoutProxy_C.RecieveEquipped
struct ABP_SentryLoadoutProxy_C_RecieveEquipped_Params
{
};

// Function BP_SentryLoadoutProxy.BP_SentryLoadoutProxy_C.RecieveUnequipped
struct ABP_SentryLoadoutProxy_C_RecieveUnequipped_Params
{
};

// Function BP_SentryLoadoutProxy.BP_SentryLoadoutProxy_C.ExecuteUbergraph_BP_SentryLoadoutProxy
struct ABP_SentryLoadoutProxy_C_ExecuteUbergraph_BP_SentryLoadoutProxy_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
