#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_ResetFaction_ConsoleScreenV1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_ResetFaction_ConsoleScreenV1.ITM_ResetFaction_ConsoleScreenV1_C.CurrentFactionID
struct UITM_ResetFaction_ConsoleScreenV1_C_CurrentFactionID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ITM_ResetFaction_ConsoleScreenV1.ITM_ResetFaction_ConsoleScreenV1_C.PreConstruct
struct UITM_ResetFaction_ConsoleScreenV1_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ResetFaction_ConsoleScreenV1.ITM_ResetFaction_ConsoleScreenV1_C.Set Faction
struct UITM_ResetFaction_ConsoleScreenV1_C_Set_Faction_Params
{
	class UCommunityGoalFaction**                      Faction;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ResetFaction_ConsoleScreenV1.ITM_ResetFaction_ConsoleScreenV1_C.ExecuteUbergraph_ITM_ResetFaction_ConsoleScreenV1
struct UITM_ResetFaction_ConsoleScreenV1_C_ExecuteUbergraph_ITM_ResetFaction_ConsoleScreenV1_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ResetFaction_ConsoleScreenV1.ITM_ResetFaction_ConsoleScreenV1_C.CheckState__DelegateSignature
struct UITM_ResetFaction_ConsoleScreenV1_C_CheckState__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
