#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LIB_ToolTips_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LIB_ToolTips.LIB_ToolTips_C
// 0x0000 (0x0028 - 0x0028)
class ULIB_ToolTips_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LIB_ToolTips.LIB_ToolTips_C");
		return ptr;
	}


	void STATIC_CreateToolTip(class UWidget** ToolTipTarget, class UClass** ToolTipClass, struct FVector2D* Offset, class UObject** __WorldContext, class UUserWidget** OutToolTip);
	void STATIC_CreateBiomeToolTip(class UWidget** Target, struct FVector2D* Position, struct FVector2D* Alignment, class UResourceData** ResourceA, class UResourceData** ResourceB, class UObject** __WorldContext, class UBiome_ToolTip_C** ToolTipWidget);
	void STATIC_CreateBasicToolTip(class UWidget** Target, struct FText* Text, struct FVector2D* Position, struct FVector2D* Alignment, class UObject** __WorldContext, class UBasic_ToolTip_C** ToolTipWidget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
