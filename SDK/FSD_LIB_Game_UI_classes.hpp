#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LIB_Game_UI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LIB_Game_UI.LIB_Game_UI_C
// 0x0000 (0x0028 - 0x0028)
class ULIB_Game_UI_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LIB_Game_UI.LIB_Game_UI_C");
		return ptr;
	}


	void STATIC_GetArmorTypeInfo(EArmorType* Type, class UObject** __WorldContext, struct FText* Display_Text, class UTexture2D** Icon, struct FLinearColor* Color);
	void STATIC_GetEnemyTypeInfo(EEnemyType* Type, class UObject** __WorldContext, struct FText* Display_Text, class UTexture2D** Icon, struct FLinearColor* IconColor);
	void STATIC_GetEnemyFamilyInfo(EEnemyFamily* Family, class UObject** __WorldContext, struct FText* Name, class UTexture2D** Icon, struct FLinearColor* Color);
	void STATIC_GetPickaxePartLocationTitle(EPickaxePartLocation* InPartLocation, bool* UpperCase, class UObject** __WorldContext, struct FText* OutTitle);
	void STATIC_GetVanitySlotTitle(EVanitySlot* InVanitySlot, bool* UpperCase, class UObject** __WorldContext, struct FText* OutTitle);
	void STATIC_GetVanitySlotIcon(EVanitySlot* VanitySlot, class UObject** __WorldContext, class UTexture2D** AsTexture_2D);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
