#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Grenade_Cluster_Fragment_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Grenade_Cluster_Fragment.Grenade_Cluster_Fragment_C
// 0x0000 (0x0450 - 0x0450)
class AGrenade_Cluster_Fragment_C : public AITM_Grenade_HE_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Grenade_Cluster_Fragment.Grenade_Cluster_Fragment_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
