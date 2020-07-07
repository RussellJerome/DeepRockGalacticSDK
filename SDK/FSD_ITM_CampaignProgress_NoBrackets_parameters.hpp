#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CampaignProgress_NoBrackets_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.PreConstruct
struct UITM_CampaignProgress_NoBrackets_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.Construct
struct UITM_CampaignProgress_NoBrackets_C_Construct_Params
{
};

// Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.Update_Campaign
struct UITM_CampaignProgress_NoBrackets_C_Update_Campaign_Params
{
	class UCampaign**                                  Campaign;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.Refresh
struct UITM_CampaignProgress_NoBrackets_C_Refresh_Params
{
};

// Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.ExecuteUbergraph_ITM_CampaignProgress_NoBrackets
struct UITM_CampaignProgress_NoBrackets_C_ExecuteUbergraph_ITM_CampaignProgress_NoBrackets_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
