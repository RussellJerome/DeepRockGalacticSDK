#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_STE_Pickaxe_SlowUser_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass STE_Pickaxe_SlowUser.STE_Pickaxe_SlowUser_C
// 0x0000 (0x00F0 - 0x00F0)
class USTE_Pickaxe_SlowUser_C : public UStatusEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass STE_Pickaxe_SlowUser.STE_Pickaxe_SlowUser_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
