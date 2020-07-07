#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_TopBar_CharacterLevel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.FromPlayerState
struct UITM_TopBar_CharacterLevel_C_FromPlayerState_Params
{
	class APlayerState**                               PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.SetCharacterLevel
struct UITM_TopBar_CharacterLevel_C_SetCharacterLevel_Params
{
	int*                                               CharacterLevel;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.PreConstruct
struct UITM_TopBar_CharacterLevel_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.Construct
struct UITM_TopBar_CharacterLevel_C_Construct_Params
{
};

// Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.OnPlayerCharacterSpawned
struct UITM_TopBar_CharacterLevel_C_OnPlayerCharacterSpawned_Params
{
	class APlayerCharacter**                           PlayerCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.OnCharacterStatsChanged_Event
struct UITM_TopBar_CharacterLevel_C_OnCharacterStatsChanged_Event_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_TopBar_CharacterLevel.ITM_TopBar_CharacterLevel_C.ExecuteUbergraph_ITM_TopBar_CharacterLevel
struct UITM_TopBar_CharacterLevel_C_ExecuteUbergraph_ITM_TopBar_CharacterLevel_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
