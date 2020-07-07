#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_AGG_SupplyPod_Ammo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AGG_SupplyPod_Ammo.AGG_SupplyPod_Ammo_C
// 0x0000 (0x0150 - 0x0150)
class UAGG_SupplyPod_Ammo_C : public UItemPlacerAggregator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AGG_SupplyPod_Ammo.AGG_SupplyPod_Ammo_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
