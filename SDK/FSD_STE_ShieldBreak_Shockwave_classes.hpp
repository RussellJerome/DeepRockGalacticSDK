#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_STE_ShieldBreak_Shockwave_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass STE_ShieldBreak_Shockwave.STE_ShieldBreak_Shockwave_C
// 0x0000 (0x00F0 - 0x00F0)
class USTE_ShieldBreak_Shockwave_C : public UStatusEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass STE_ShieldBreak_Shockwave.STE_ShieldBreak_Shockwave_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
