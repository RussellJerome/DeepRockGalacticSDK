#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Loadout_GrenadeProxy_Ball_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Loadout_GrenadeProxy_Ball.Loadout_GrenadeProxy_Ball_C
// 0x0000 (0x0450 - 0x0450)
class ALoadout_GrenadeProxy_Ball_C : public ALoadout_GrenadeProxyBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Loadout_GrenadeProxy_Ball.Loadout_GrenadeProxy_Ball_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
