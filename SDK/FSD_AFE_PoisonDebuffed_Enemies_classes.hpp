#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_AFE_PoisonDebuffed_Enemies_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AFE_PoisonDebuffed_Enemies.AFE_PoisonDebuffed_Enemies_C
// 0x0000 (0x0048 - 0x0048)
class UAFE_PoisonDebuffed_Enemies_C : public UAttachedParticlesAfflictionEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AFE_PoisonDebuffed_Enemies.AFE_PoisonDebuffed_Enemies_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
