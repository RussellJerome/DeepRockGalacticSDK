#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LIB_PerkColors_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LIB_PerkColors.LIB_PerkColors_C
// 0x0000 (0x0028 - 0x0028)
class ULIB_PerkColors_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LIB_PerkColors.LIB_PerkColors_C");
		return ptr;
	}


	void STATIC_PerkColorFromType(EPerkUsageType* InType, class UObject** __WorldContext, struct FLinearColor* OutColor);
	void STATIC_PerkColorByState(EPerkUsageType* InPerkType, EPerkTierState* InPerkState, class UObject** __WorldContext, struct FLinearColor* OutBackground, struct FLinearColor* OutBorder, struct FLinearColor* OutIcon);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
