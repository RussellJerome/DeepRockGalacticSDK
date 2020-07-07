#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Loadout_GrenadeProxy_Axe_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Loadout_GrenadeProxy_Axe.Loadout_GrenadeProxy_Axe_C
// 0x0000 (0x0450 - 0x0450)
class ALoadout_GrenadeProxy_Axe_C : public ALoadout_GrenadeProxy_Stick_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Loadout_GrenadeProxy_Axe.Loadout_GrenadeProxy_Axe_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
