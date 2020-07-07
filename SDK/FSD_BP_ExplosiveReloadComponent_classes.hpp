#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_ExplosiveReloadComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ExplosiveReloadComponent.BP_ExplosiveReloadComponent_C
// 0x0000 (0x0118 - 0x0118)
class UBP_ExplosiveReloadComponent_C : public UWeaponHitCounterComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ExplosiveReloadComponent.BP_ExplosiveReloadComponent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
