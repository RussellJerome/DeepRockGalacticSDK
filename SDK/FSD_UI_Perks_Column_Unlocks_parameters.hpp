#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Perks_Column_Unlocks_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.IsUnlocked
struct UUI_Perks_Column_Unlocks_C_IsUnlocked_Params
{
	bool                                               Unlocked;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.PreConstruct
struct UUI_Perks_Column_Unlocks_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.Set Arrow Count
struct UUI_Perks_Column_Unlocks_C_Set_Arrow_Count_Params
{
	int*                                               ArrowCount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UnlockedCount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.Set Unlocked Count
struct UUI_Perks_Column_Unlocks_C_Set_Unlocked_Count_Params
{
	int*                                               UnlockedCount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.ExecuteUbergraph_UI_Perks_Column_Unlocks
struct UUI_Perks_Column_Unlocks_C_ExecuteUbergraph_UI_Perks_Column_Unlocks_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
