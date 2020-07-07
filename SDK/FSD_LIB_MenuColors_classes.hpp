#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LIB_MenuColors_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LIB_MenuColors.LIB_MenuColors_C
// 0x0000 (0x0028 - 0x0028)
class ULIB_MenuColors_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LIB_MenuColors.LIB_MenuColors_C");
		return ptr;
	}


	void STATIC_WindowColors(TEnumAsByte<ENUM_WindowColors>* InColor, class UObject** __WorldContext, struct FLinearColor* Color1, struct FLinearColor* Color2);
	void STATIC_SelectTextColor(class UTextBlock** Text, TEnumAsByte<ENUM_MenuColors>* FALSE, TEnumAsByte<ENUM_MenuColors>* TRUE, bool* Condition, class UObject** __WorldContext);
	void STATIC_SetTextColor(class UTextBlock** Text, TEnumAsByte<ENUM_MenuColors>* Color, class UObject** __WorldContext);
	void STATIC_SelectMenuColor(TEnumAsByte<ENUM_MenuColors>* FALSE, TEnumAsByte<ENUM_MenuColors>* TRUE, bool* Condition, class UObject** __WorldContext, struct FLinearColor* OutputColor);
	void STATIC_MenuColorsAndOpacity(TEnumAsByte<ENUM_MenuColors>* ColorSelector, float* Opacity, class UObject** __WorldContext, struct FLinearColor* OutputColor);
	void STATIC_MenuColors(TEnumAsByte<ENUM_MenuColors>* ColorSelector, class UObject** __WorldContext, struct FLinearColor* OutputColor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
