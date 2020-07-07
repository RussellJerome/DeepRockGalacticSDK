#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_RewardUnlock_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_RewardUnlock.UI_RewardUnlock_C.SelectCharacterID
struct UUI_RewardUnlock_C_SelectCharacterID_Params
{
	class UPlayerCharacterID**                         OptionalID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPlayerCharacterID*                          OutputPin;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_RewardUnlock.UI_RewardUnlock_C.GetUnlockDetails
struct UUI_RewardUnlock_C_GetUnlockDetails_Params
{
	struct FText                                       OutTitle;                                                 // (Parm, OutParm)
	class UTexture*                                    Icon;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                IconTint;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  BigImage;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_RewardUnlock.UI_RewardUnlock_C.PreConstruct
struct UUI_RewardUnlock_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_RewardUnlock.UI_RewardUnlock_C.PlayReceiveAnim
struct UUI_RewardUnlock_C_PlayReceiveAnim_Params
{
};

// Function UI_RewardUnlock.UI_RewardUnlock_C.ExecuteUbergraph_UI_RewardUnlock
struct UUI_RewardUnlock_C_ExecuteUbergraph_UI_RewardUnlock_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
