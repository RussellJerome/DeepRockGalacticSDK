#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_RewardResource_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_RewardResource.UI_RewardResource_C.PreConstruct
struct UUI_RewardResource_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_RewardResource.UI_RewardResource_C.PlayReceiveAnim
struct UUI_RewardResource_C_PlayReceiveAnim_Params
{
};

// Function UI_RewardResource.UI_RewardResource_C.Tick
struct UUI_RewardResource_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_RewardResource.UI_RewardResource_C.ExecuteUbergraph_UI_RewardResource
struct UUI_RewardResource_C_ExecuteUbergraph_UI_RewardResource_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
