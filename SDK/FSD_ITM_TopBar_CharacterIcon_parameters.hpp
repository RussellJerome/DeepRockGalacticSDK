#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_TopBar_CharacterIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.FromPlayerState
struct UITM_TopBar_CharacterIcon_C_FromPlayerState_Params
{
	class APlayerState**                               PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerCharacter**                           SelectedCharacter;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.SetHeroData
struct UITM_TopBar_CharacterIcon_C_SetHeroData_Params
{
	float*                                             XP_Progress;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Times_Retired;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsHost;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.Update
struct UITM_TopBar_CharacterIcon_C_Update_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.Construct
struct UITM_TopBar_CharacterIcon_C_Construct_Params
{
};

// Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.OnPlayerCharacterSpawned
struct UITM_TopBar_CharacterIcon_C_OnPlayerCharacterSpawned_Params
{
	class APlayerCharacter**                           PlayerCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_TopBar_CharacterIcon.ITM_TopBar_CharacterIcon_C.ExecuteUbergraph_ITM_TopBar_CharacterIcon
struct UITM_TopBar_CharacterIcon_C_ExecuteUbergraph_ITM_TopBar_CharacterIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
