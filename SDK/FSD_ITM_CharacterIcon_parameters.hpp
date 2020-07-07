#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CharacterIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetFromCharacterID
struct UITM_CharacterIcon_C_SetFromCharacterID_Params
{
	class UPlayerCharacterID**                         characterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetFromCharacterClass
struct UITM_CharacterIcon_C_SetFromCharacterClass_Params
{
	class UClass**                                     InCharacterClass;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetFromPlayerCharacter
struct UITM_CharacterIcon_C_SetFromPlayerCharacter_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetFromPlayerState
struct UITM_CharacterIcon_C_SetFromPlayerState_Params
{
	class APlayerState**                               InState;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetBaseSize
struct UITM_CharacterIcon_C_SetBaseSize_Params
{
	float*                                             Size;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetShowPromotion
struct UITM_CharacterIcon_C_SetShowPromotion_Params
{
	bool*                                              Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetImage
struct UITM_CharacterIcon_C_SetImage_Params
{
	class UTexture2D**                                 Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               InColorAndOpacity;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetCharacterImageAndColor
struct UITM_CharacterIcon_C_SetCharacterImageAndColor_Params
{
	class UClass**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CharacterIcon.ITM_CharacterIcon_C.SetShowHostIcon
struct UITM_CharacterIcon_C_SetShowHostIcon_Params
{
	bool*                                              Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CharacterIcon.ITM_CharacterIcon_C.PreConstruct
struct UITM_CharacterIcon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CharacterIcon.ITM_CharacterIcon_C.ExecuteUbergraph_ITM_CharacterIcon
struct UITM_CharacterIcon_C_ExecuteUbergraph_ITM_CharacterIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
