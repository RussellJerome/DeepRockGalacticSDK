#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_FactionSelect_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_FactionSelect.ITM_FactionSelect_C.Initialize
struct UITM_FactionSelect_C_Initialize_Params
{
	int*                                               New_Fee;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommunityGoalFaction**                      Faction;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_FactionSelect.ITM_FactionSelect_C.SetFaction
struct UITM_FactionSelect_C_SetFaction_Params
{
	class UCommunityGoalFaction**                      Faction;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_FactionSelect.ITM_FactionSelect_C.SetFee
struct UITM_FactionSelect_C_SetFee_Params
{
	int*                                               New_Fee;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_FactionSelect.ITM_FactionSelect_C.PreConstruct
struct UITM_FactionSelect_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_FactionSelect.ITM_FactionSelect_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UITM_FactionSelect_C_BndEvt__JoinButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function ITM_FactionSelect.ITM_FactionSelect_C.AnswerCC
struct UITM_FactionSelect_C_AnswerCC_Params
{
	bool*                                              Yes;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_FactionSelect.ITM_FactionSelect_C.ExecuteUbergraph_ITM_FactionSelect
struct UITM_FactionSelect_C_ExecuteUbergraph_ITM_FactionSelect_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_FactionSelect.ITM_FactionSelect_C.FactionSelected__DelegateSignature
struct UITM_FactionSelect_C_FactionSelected__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
