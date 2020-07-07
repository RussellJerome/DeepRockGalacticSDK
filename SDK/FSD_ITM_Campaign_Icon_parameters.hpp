#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_Campaign_Icon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_Campaign_Icon.ITM_Campaign_Icon_C.IsAnyMissionCampaign
struct UITM_Campaign_Icon_C_IsAnyMissionCampaign_Params
{
	TArray<class UGeneratedMission*>                   missions;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsOnMission;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Campaign_Icon.ITM_Campaign_Icon_C.PreConstruct
struct UITM_Campaign_Icon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_Campaign_Icon.ITM_Campaign_Icon_C.SetCampaignIconData
struct UITM_Campaign_Icon_C_SetCampaignIconData_Params
{
	TArray<class UGeneratedMission*>*                  missions;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ITM_Campaign_Icon.ITM_Campaign_Icon_C.ExecuteUbergraph_ITM_Campaign_Icon
struct UITM_Campaign_Icon_C_ExecuteUbergraph_ITM_Campaign_Icon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
