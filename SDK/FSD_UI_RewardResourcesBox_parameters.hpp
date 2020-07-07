#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_RewardResourcesBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.HasResources
struct UUI_RewardResourcesBox_C_HasResources_Params
{
	bool                                               HasResources;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.PreConstruct
struct UUI_RewardResourcesBox_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.PlayReceiveAnim
struct UUI_RewardResourcesBox_C_PlayReceiveAnim_Params
{
};

// Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.AddResource
struct UUI_RewardResourcesBox_C_AddResource_Params
{
	class URewardWidget**                              RewardWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.Clear
struct UUI_RewardResourcesBox_C_Clear_Params
{
};

// Function UI_RewardResourcesBox.UI_RewardResourcesBox_C.ExecuteUbergraph_UI_RewardResourcesBox
struct UUI_RewardResourcesBox_C_ExecuteUbergraph_UI_RewardResourcesBox_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
