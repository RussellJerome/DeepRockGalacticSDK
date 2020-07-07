#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Loadout_GrenadeProxyBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Loadout_GrenadeProxyBase.Loadout_GrenadeProxyBase_C.RecieveEquipped
struct ALoadout_GrenadeProxyBase_C_RecieveEquipped_Params
{
};

// Function Loadout_GrenadeProxyBase.Loadout_GrenadeProxyBase_C.RecieveUnequipped
struct ALoadout_GrenadeProxyBase_C_RecieveUnequipped_Params
{
};

// Function Loadout_GrenadeProxyBase.Loadout_GrenadeProxyBase_C.ExecuteUbergraph_Loadout_GrenadeProxyBase
struct ALoadout_GrenadeProxyBase_C_ExecuteUbergraph_Loadout_GrenadeProxyBase_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
