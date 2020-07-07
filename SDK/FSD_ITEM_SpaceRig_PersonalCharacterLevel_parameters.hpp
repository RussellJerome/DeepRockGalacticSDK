#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITEM_SpaceRig_PersonalCharacterLevel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.Construct
struct UITEM_SpaceRig_PersonalCharacterLevel_C_Construct_Params
{
};

// Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.Update
struct UITEM_SpaceRig_PersonalCharacterLevel_C_Update_Params
{
	class APlayerCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.OnPlayerCharacterSpawned
struct UITEM_SpaceRig_PersonalCharacterLevel_C_OnPlayerCharacterSpawned_Params
{
	class APlayerCharacter**                           PlayerCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.OnCharacterStatsChanged_Event
struct UITEM_SpaceRig_PersonalCharacterLevel_C_OnCharacterStatsChanged_Event_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.ExecuteUbergraph_ITEM_SpaceRig_PersonalCharacterLevel
struct UITEM_SpaceRig_PersonalCharacterLevel_C_ExecuteUbergraph_ITEM_SpaceRig_PersonalCharacterLevel_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
