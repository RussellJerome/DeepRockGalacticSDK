#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CampaignItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_CampaignItem.ITM_CampaignItem_C.Ping
struct UITM_CampaignItem_C_Ping_Params
{
};

// Function ITM_CampaignItem.ITM_CampaignItem_C.Construct
struct UITM_CampaignItem_C_Construct_Params
{
};

// Function ITM_CampaignItem.ITM_CampaignItem_C.PreConstruct
struct UITM_CampaignItem_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CampaignItem.ITM_CampaignItem_C.OnPingStarted
struct UITM_CampaignItem_C_OnPingStarted_Params
{
};

// Function ITM_CampaignItem.ITM_CampaignItem_C.OnPingFinished
struct UITM_CampaignItem_C_OnPingFinished_Params
{
};

// Function ITM_CampaignItem.ITM_CampaignItem_C.ExecuteUbergraph_ITM_CampaignItem
struct UITM_CampaignItem_C_ExecuteUbergraph_ITM_CampaignItem_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
