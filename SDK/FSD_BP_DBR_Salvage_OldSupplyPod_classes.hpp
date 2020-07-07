#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_DBR_Salvage_OldSupplyPod_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DBR_Salvage_OldSupplyPod.BP_DBR_Salvage_OldSupplyPod_C
// 0x0000 (0x0290 - 0x0290)
class UBP_DBR_Salvage_OldSupplyPod_C : public UDebrisItemComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DBR_Salvage_OldSupplyPod.BP_DBR_Salvage_OldSupplyPod_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
