#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_FracturedMissionDNA_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FracturedMissionDNA.BP_FracturedMissionDNA_C
// 0x0004 (0x0054 - 0x0050)
class UBP_FracturedMissionDNA_C : public UMissionDNA
{
public:
	float                                              RoomDistance;                                             // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FracturedMissionDNA.BP_FracturedMissionDNA_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
