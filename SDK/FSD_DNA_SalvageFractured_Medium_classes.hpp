#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DNA_SalvageFractured_Medium_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DNA_SalvageFractured_Medium.DNA_SalvageFractured_Medium_C
// 0x0000 (0x0050 - 0x0050)
class UDNA_SalvageFractured_Medium_C : public UMissionDNA
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DNA_SalvageFractured_Medium.DNA_SalvageFractured_Medium_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
