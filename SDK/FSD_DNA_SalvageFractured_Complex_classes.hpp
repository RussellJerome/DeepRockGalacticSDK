#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DNA_SalvageFractured_Complex_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DNA_SalvageFractured_Complex.DNA_SalvageFractured_Complex_C
// 0x0000 (0x0050 - 0x0050)
class UDNA_SalvageFractured_Complex_C : public UMissionDNA
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DNA_SalvageFractured_Complex.DNA_SalvageFractured_Complex_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
