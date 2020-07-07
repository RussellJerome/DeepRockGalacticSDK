#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_AFLS_TemperatureShock_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AFLS_TemperatureShock.AFLS_TemperatureShock_C
// 0x0000 (0x0048 - 0x0048)
class UAFLS_TemperatureShock_C : public USoundAfflictionEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AFLS_TemperatureShock.AFLS_TemperatureShock_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
