#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_PopUp_CommunityGoal_SelectNewFaction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.Initialize
struct UPopUp_CommunityGoal_SelectNewFaction_C_Initialize_Params
{
	int*                                               Fee;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommunityGoalFaction**                      Faction1;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommunityGoalFaction**                      Faction2;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.Construct
struct UPopUp_CommunityGoal_SelectNewFaction_C_Construct_Params
{
};

// Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.Faction1Selected
struct UPopUp_CommunityGoal_SelectNewFaction_C_Faction1Selected_Params
{
};

// Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.Faction2Selected
struct UPopUp_CommunityGoal_SelectNewFaction_C_Faction2Selected_Params
{
};

// Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.BndEvt__Close_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UPopUp_CommunityGoal_SelectNewFaction_C_BndEvt__Close_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.ExecuteUbergraph_PopUp_CommunityGoal_SelectNewFaction
struct UPopUp_CommunityGoal_SelectNewFaction_C_ExecuteUbergraph_PopUp_CommunityGoal_SelectNewFaction_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PopUp_CommunityGoal_SelectNewFaction.PopUp_CommunityGoal_SelectNewFaction_C.CheckState__DelegateSignature
struct UPopUp_CommunityGoal_SelectNewFaction_C_CheckState__DelegateSignature_Params
{
	bool*                                              Changed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
