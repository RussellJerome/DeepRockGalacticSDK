#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LIB_Text_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LIB_Text.LIB_Text_C
// 0x0000 (0x0028 - 0x0028)
class ULIB_Text_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LIB_Text.LIB_Text_C");
		return ptr;
	}


	void STATIC_GetTimeText(float* Dividend, class UObject** __WorldContext, struct FText* Text);
	void STATIC_SetTextCased(struct FText* InText, TEnumAsByte<ENU_TextCase>* Text_Case, class UObject** __WorldContext, class UTextBlock** Target);
	void STATIC_GetFontSize(class UObject** __WorldContext, class UTextBlock** Label, int* Size);
	void STATIC_SetFontSize(int* NewSize, class UObject** __WorldContext, class UTextBlock** Label);
	void STATIC_SetTextUpperCased(class UTextBlock** Target, struct FText* InText, class UObject** __WorldContext);
	void STATIC_GetDisconnectReasonCaption(EDisconnectReason* DisconnectReason, class UObject** __WorldContext, struct FText* Text);
	void STATIC_GetDisconnectReasonText(EDisconnectReason* DisconnectReason, class UObject** __WorldContext, struct FText* Text);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
