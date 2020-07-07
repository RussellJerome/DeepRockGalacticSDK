#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LIB_Intoxication_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LIB_Intoxication.LIB_Intoxication_C
// 0x0000 (0x0028 - 0x0028)
class ULIB_Intoxication_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LIB_Intoxication.LIB_Intoxication_C");
		return ptr;
	}


	void STATIC_GetAlcoholStrengthPct(EDrinkableAlcoholStrength* Strength, class APlayerCharacter** Character, class UObject** __WorldContext, int* Percent);
	void STATIC_GetAlcoholStrengthName(EDrinkableAlcoholStrength* Strength, bool* UpperCase, class UObject** __WorldContext, struct FText* Name);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
