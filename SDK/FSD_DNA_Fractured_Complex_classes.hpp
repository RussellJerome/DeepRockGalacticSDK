#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DNA_Fractured_Complex_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DNA_Fractured_Complex.DNA_Fractured_Complex_C
// 0x0000 (0x0054 - 0x0054)
class UDNA_Fractured_Complex_C : public UBP_FracturedMissionDNA_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DNA_Fractured_Complex.DNA_Fractured_Complex_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
