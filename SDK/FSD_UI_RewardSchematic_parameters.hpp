#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_RewardSchematic_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_RewardSchematic.UI_RewardSchematic_C.PreConstruct
struct UUI_RewardSchematic_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_RewardSchematic.UI_RewardSchematic_C.Construct
struct UUI_RewardSchematic_C_Construct_Params
{
};

// Function UI_RewardSchematic.UI_RewardSchematic_C.PlayReceiveAnim
struct UUI_RewardSchematic_C_PlayReceiveAnim_Params
{
};

// Function UI_RewardSchematic.UI_RewardSchematic_C.ExecuteUbergraph_UI_RewardSchematic
struct UUI_RewardSchematic_C_ExecuteUbergraph_UI_RewardSchematic_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
