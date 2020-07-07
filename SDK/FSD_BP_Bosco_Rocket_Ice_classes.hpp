#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Bosco_Rocket_Ice_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Bosco_Rocket_Ice.BP_Bosco_Rocket_Ice_C
// 0x0000 (0x0400 - 0x0400)
class ABP_Bosco_Rocket_Ice_C : public ABP_BoscoAbillityProjectile_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Bosco_Rocket_Ice.BP_Bosco_Rocket_Ice_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
