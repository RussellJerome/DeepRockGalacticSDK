#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PheromoneAttackerPositioning_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PheromoneAttackerPositioning.BP_PheromoneAttackerPositioning_C
// 0x0000 (0x0150 - 0x0150)
class UBP_PheromoneAttackerPositioning_C : public UEnemyAttackerPositioningComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PheromoneAttackerPositioning.BP_PheromoneAttackerPositioning_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
