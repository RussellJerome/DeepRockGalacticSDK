#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_FactionToolTip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_FactionToolTip.ITM_FactionToolTip_C.Initialize
struct UITM_FactionToolTip_C_Initialize_Params
{
	int*                                               New_Fee;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommunityGoalFaction**                      Faction;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_FactionToolTip.ITM_FactionToolTip_C.SetFaction
struct UITM_FactionToolTip_C_SetFaction_Params
{
	class UCommunityGoalFaction**                      Faction;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_FactionToolTip.ITM_FactionToolTip_C.PreConstruct
struct UITM_FactionToolTip_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_FactionToolTip.ITM_FactionToolTip_C.ExecuteUbergraph_ITM_FactionToolTip
struct UITM_FactionToolTip_C_ExecuteUbergraph_ITM_FactionToolTip_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_FactionToolTip.ITM_FactionToolTip_C.FactionSelected__DelegateSignature
struct UITM_FactionToolTip_C_FactionSelected__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
