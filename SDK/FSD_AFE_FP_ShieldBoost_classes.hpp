#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_AFE_FP_ShieldBoost_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AFE_FP_ShieldBoost.AFE_FP_ShieldBoost_C
// 0x0000 (0x0030 - 0x0030)
class UAFE_FP_ShieldBoost_C : public UCameraParticleAfflictionEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AFE_FP_ShieldBoost.AFE_FP_ShieldBoost_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
