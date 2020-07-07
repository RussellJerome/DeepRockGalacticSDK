#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_MileStone_Tier_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_MileStone_Tier.UI_Milestone_Tier_C.InitTierImage
struct UUI_Milestone_Tier_C_InitTierImage_Params
{
	class UImage**                                     Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_MileStone_Tier.UI_Milestone_Tier_C.Set Tier
struct UUI_Milestone_Tier_C_Set_Tier_Params
{
	int*                                               Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MileStone_Tier.UI_Milestone_Tier_C.PreConstruct
struct UUI_Milestone_Tier_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MileStone_Tier.UI_Milestone_Tier_C.ExecuteUbergraph_UI_Milestone_Tier
struct UUI_Milestone_Tier_C_ExecuteUbergraph_UI_Milestone_Tier_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
