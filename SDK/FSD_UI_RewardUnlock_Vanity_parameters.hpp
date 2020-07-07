#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_RewardUnlock_Vanity_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.SetCharacterIcon
struct UUI_RewardUnlock_Vanity_C_SetCharacterIcon_Params
{
	class UPlayerCharacterID**                         characterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPlayerCharacterID*                          OutCharacterID;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.SelectCharacterID
struct UUI_RewardUnlock_Vanity_C_SelectCharacterID_Params
{
	class UPlayerCharacterID**                         OptionalID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPlayerCharacterID*                          OutputPin;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.GetUnlockDetails
struct UUI_RewardUnlock_Vanity_C_GetUnlockDetails_Params
{
	struct FText                                       OutTitle;                                                 // (Parm, OutParm)
	struct FText                                       OutSubTitle;                                              // (Parm, OutParm)
	class UTexture*                                    Icon;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.PreConstruct
struct UUI_RewardUnlock_Vanity_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.PlayReceiveAnim
struct UUI_RewardUnlock_Vanity_C_PlayReceiveAnim_Params
{
};

// Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.Construct
struct UUI_RewardUnlock_Vanity_C_Construct_Params
{
};

// Function UI_RewardUnlock_Vanity.UI_RewardUnlock_Vanity_C.ExecuteUbergraph_UI_RewardUnlock_Vanity
struct UUI_RewardUnlock_Vanity_C_ExecuteUbergraph_UI_RewardUnlock_Vanity_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
