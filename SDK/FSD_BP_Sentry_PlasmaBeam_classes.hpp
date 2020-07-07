#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Sentry_PlasmaBeam_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Sentry_PlasmaBeam.BP_Sentry_PlasmaBeam_C
// 0x0000 (0x03D8 - 0x03D8)
class ABP_Sentry_PlasmaBeam_C : public ASentryElectroBeam
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Sentry_PlasmaBeam.BP_Sentry_PlasmaBeam_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
