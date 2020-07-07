#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PetAttackerPositioning_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PetAttackerPositioning.BP_PetAttackerPositioning_C
// 0x0000 (0x0150 - 0x0150)
class UBP_PetAttackerPositioning_C : public UEnemyAttackerPositioningComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PetAttackerPositioning.BP_PetAttackerPositioning_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
