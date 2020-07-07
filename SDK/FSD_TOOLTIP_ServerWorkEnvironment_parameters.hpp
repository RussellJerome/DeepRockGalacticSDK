#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TOOLTIP_ServerWorkEnvironment_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TOOLTIP_ServerWorkEnvironment.TOOLTIP_ServerWorkEnvironment_C.SetCampaignAssignment
struct UTOOLTIP_ServerWorkEnvironment_C_SetCampaignAssignment_Params
{
	class UClass**                                     CampaignRequirement;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TOOLTIP_ServerWorkEnvironment.TOOLTIP_ServerWorkEnvironment_C.PreConstruct
struct UTOOLTIP_ServerWorkEnvironment_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TOOLTIP_ServerWorkEnvironment.TOOLTIP_ServerWorkEnvironment_C.ExecuteUbergraph_TOOLTIP_ServerWorkEnvironment
struct UTOOLTIP_ServerWorkEnvironment_C_ExecuteUbergraph_TOOLTIP_ServerWorkEnvironment_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
