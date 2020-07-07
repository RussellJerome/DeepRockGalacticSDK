#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_ResetFaction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_ResetFaction.ITM_ResetFaction_C.CurrentFactionID
struct UITM_ResetFaction_C_CurrentFactionID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ITM_ResetFaction.ITM_ResetFaction_C.PreConstruct
struct UITM_ResetFaction_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ResetFaction.ITM_ResetFaction_C.Set Faction
struct UITM_ResetFaction_C_Set_Faction_Params
{
	class UCommunityGoalFaction**                      Faction;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ResetFaction.ITM_ResetFaction_C.BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UITM_ResetFaction_C_BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function ITM_ResetFaction.ITM_ResetFaction_C.OnFactionSwitch
struct UITM_ResetFaction_C_OnFactionSwitch_Params
{
	bool*                                              Changed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ResetFaction.ITM_ResetFaction_C.ExecuteUbergraph_ITM_ResetFaction
struct UITM_ResetFaction_C_ExecuteUbergraph_ITM_ResetFaction_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ResetFaction.ITM_ResetFaction_C.CheckState__DelegateSignature
struct UITM_ResetFaction_C_CheckState__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
