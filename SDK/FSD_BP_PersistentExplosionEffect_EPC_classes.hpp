#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PersistentExplosionEffect_EPC_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PersistentExplosionEffect_EPC.BP_PersistentExplosionEffect_EPC_C
// 0x0000 (0x0374 - 0x0374)
class ABP_PersistentExplosionEffect_EPC_C : public ABP_Damage_Cloud_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PersistentExplosionEffect_EPC.BP_PersistentExplosionEffect_EPC_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
