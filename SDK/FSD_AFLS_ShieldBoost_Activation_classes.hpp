#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_AFLS_ShieldBoost_Activation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AFLS_ShieldBoost_Activation.AFLS_ShieldBoost_Activation_C
// 0x0000 (0x0048 - 0x0048)
class UAFLS_ShieldBoost_Activation_C : public USoundAfflictionEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AFLS_ShieldBoost_Activation.AFLS_ShieldBoost_Activation_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
