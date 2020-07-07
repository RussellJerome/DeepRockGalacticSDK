#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_AFE_TP_TemperatureShockDetached_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AFE_TP_TemperatureShockDetached.AFE_TP_TemperatureShockDetached_C
// 0x0000 (0x0038 - 0x0038)
class UAFE_TP_TemperatureShockDetached_C : public USpawnAtLocationParticleAfflictionEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AFE_TP_TemperatureShockDetached.AFE_TP_TemperatureShockDetached_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
