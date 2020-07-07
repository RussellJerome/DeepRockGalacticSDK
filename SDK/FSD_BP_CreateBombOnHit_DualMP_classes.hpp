#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_CreateBombOnHit_DualMP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CreateBombOnHit_DualMP.BP_CreateBombOnHit_DualMP_C
// 0x0000 (0x0108 - 0x0108)
class UBP_CreateBombOnHit_DualMP_C : public UWeaponHitEffectComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CreateBombOnHit_DualMP.BP_CreateBombOnHit_DualMP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
