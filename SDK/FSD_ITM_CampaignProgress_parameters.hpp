#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CampaignProgress_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_CampaignProgress.ITM_CampaignProgress_C.TryPingMission
struct UITM_CampaignProgress_C_TryPingMission_Params
{
	int*                                               missionIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CampaignProgress.ITM_CampaignProgress_C.ShowCampaignProgress
struct UITM_CampaignProgress_C_ShowCampaignProgress_Params
{
	class UCampaign**                                  Campaign;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CampaignProgress.ITM_CampaignProgress_C.PreConstruct
struct UITM_CampaignProgress_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CampaignProgress.ITM_CampaignProgress_C.Construct
struct UITM_CampaignProgress_C_Construct_Params
{
};

// Function ITM_CampaignProgress.ITM_CampaignProgress_C.Update_Campaign
struct UITM_CampaignProgress_C_Update_Campaign_Params
{
	class UCampaign**                                  Campaign;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CampaignProgress.ITM_CampaignProgress_C.Refresh
struct UITM_CampaignProgress_C_Refresh_Params
{
};

// Function ITM_CampaignProgress.ITM_CampaignProgress_C.ExecuteUbergraph_ITM_CampaignProgress
struct UITM_CampaignProgress_C_ExecuteUbergraph_ITM_CampaignProgress_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
