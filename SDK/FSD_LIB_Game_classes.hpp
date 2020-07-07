#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LIB_Game_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LIB_Game.LIB_Game_C
// 0x0000 (0x0028 - 0x0028)
class ULIB_Game_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LIB_Game.LIB_Game_C");
		return ptr;
	}


	void STATIC_IsFlaggedVisible(class UWidget** InWidget, class UObject** __WorldContext, bool* IsFlaggedVisible);
	void STATIC_SetSoftTextureAndTint(class UImage** Target, TSoftObjectPtr<class UTexture2D>* Texture, bool* bMatchSize, struct FLinearColor* Tint, class UObject** __WorldContext);
	void STATIC_SetTextureAndTint(class UImage** Target, class UTexture2D** Texture, bool* bMatchSize, struct FLinearColor* Tint, class UObject** __WorldContext);
	void STATIC_UpdateBool(bool* InValue, class UObject** __WorldContext, bool* Variable, bool* ValueChanged, bool* OutValue);
	void STATIC_SetVisibilityIf(class UWidget** Widget, ESlateVisibility* Visibility, bool* Condition, class UObject** __WorldContext, bool* IsVisible);
	void STATIC_LoadMission(struct FSoftObjectPath* NewParam, class UObject** __WorldContext);
	void STATIC_SelectVisibility(class UWidget** Widget, ESlateVisibility* FALSE, ESlateVisibility* TRUE, bool* Index, class UObject** __WorldContext, bool* IsVisible, bool* VisibilityChanged, ESlateVisibility* New_Visibility);
	void STATIC_IsOnSpaceRig(class UObject** __WorldContext, bool* OnSpaceRig);
	void STATIC_GetPLSBase(class UObject** __WorldContext, class APLS_Base_C** AsPLS_Base);
	void STATIC_IsKickReason(EDisconnectReason* DisconnectReason, class UObject** __WorldContext, bool* Kicked);
	void STATIC_GetBPGameState(class UObject** __WorldContext, class ABP_GameState_C** AsBP_Game_State);
	void STATIC_GetBPGameInstance(class UObject** __WorldContext, class UBP_GameInstance_C** AsBP_Game_Instance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
