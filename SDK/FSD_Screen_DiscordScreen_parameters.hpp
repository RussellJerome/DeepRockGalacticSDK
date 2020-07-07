#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Screen_DiscordScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Screen_DiscordScreen.Screen_DiscordScreen_C.BuildProgressUI
struct UScreen_DiscordScreen_C_BuildProgressUI_Params
{
	bool*                                              ForceRefresh;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Screen_DiscordScreen.Screen_DiscordScreen_C.RefreshCurrentState
struct UScreen_DiscordScreen_C_RefreshCurrentState_Params
{
};

// Function Screen_DiscordScreen.Screen_DiscordScreen_C.SetResult
struct UScreen_DiscordScreen_C_SetResult_Params
{
	class UITM_CommunityGoalResult_C**                 ResultUI;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               FactionID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Screen_DiscordScreen.Screen_DiscordScreen_C.AwardRewards
struct UScreen_DiscordScreen_C_AwardRewards_Params
{
};

// Function Screen_DiscordScreen.Screen_DiscordScreen_C.MinersUnionTier
struct UScreen_DiscordScreen_C_MinersUnionTier_Params
{
	float                                              DSMUTier;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Screen_DiscordScreen.Screen_DiscordScreen_C.BuildRewardUI
struct UScreen_DiscordScreen_C_BuildRewardUI_Params
{
};

// Function Screen_DiscordScreen.Screen_DiscordScreen_C.CurrentPlayerFaction
struct UScreen_DiscordScreen_C_CurrentPlayerFaction_Params
{
	class UCommunityGoalFaction*                       Current_Faction;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Screen_DiscordScreen.Screen_DiscordScreen_C.SetGoalState
struct UScreen_DiscordScreen_C_SetGoalState_Params
{
	bool*                                              isGoal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              isRecruitment;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Screen_DiscordScreen.Screen_DiscordScreen_C.SetGoals
struct UScreen_DiscordScreen_C_SetGoals_Params
{
	TArray<class FString>                              Goals;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      Values;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Members;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Screen_DiscordScreen.Screen_DiscordScreen_C.TestCommunityGoals
struct UScreen_DiscordScreen_C_TestCommunityGoals_Params
{
};

// Function Screen_DiscordScreen.Screen_DiscordScreen_C.Construct
struct UScreen_DiscordScreen_C_Construct_Params
{
};

// Function Screen_DiscordScreen.Screen_DiscordScreen_C.Do Running Text
struct UScreen_DiscordScreen_C_Do_Running_Text_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTextBlock**                                 Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Screen_DiscordScreen.Screen_DiscordScreen_C.PreConstruct
struct UScreen_DiscordScreen_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Screen_DiscordScreen.Screen_DiscordScreen_C.CheckState
struct UScreen_DiscordScreen_C_CheckState_Params
{
};

// Function Screen_DiscordScreen.Screen_DiscordScreen_C.RegisterEvents
struct UScreen_DiscordScreen_C_RegisterEvents_Params
{
};

// Function Screen_DiscordScreen.Screen_DiscordScreen_C.OnFactionsDataRecievedEvent
struct UScreen_DiscordScreen_C_OnFactionsDataRecievedEvent_Params
{
	TArray<class FString>*                             Goals;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>*                                     Values;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>*                                       Members;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Screen_DiscordScreen.Screen_DiscordScreen_C.OnCGSDataReceivedEvent
struct UScreen_DiscordScreen_C_OnCGSDataReceivedEvent_Params
{
	bool*                                              stateReceived;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Screen_DiscordScreen.Screen_DiscordScreen_C.RequestData
struct UScreen_DiscordScreen_C_RequestData_Params
{
};

// Function Screen_DiscordScreen.Screen_DiscordScreen_C.Destruct
struct UScreen_DiscordScreen_C_Destruct_Params
{
};

// Function Screen_DiscordScreen.Screen_DiscordScreen_C.ResetFactionCheckState
struct UScreen_DiscordScreen_C_ResetFactionCheckState_Params
{
};

// Function Screen_DiscordScreen.Screen_DiscordScreen_C.BndEvt__ClaimRewardButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature
struct UScreen_DiscordScreen_C_BndEvt__ClaimRewardButton_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature_Params
{
};

// Function Screen_DiscordScreen.Screen_DiscordScreen_C.OnFactionChangedEvent
struct UScreen_DiscordScreen_C_OnFactionChangedEvent_Params
{
};

// Function Screen_DiscordScreen.Screen_DiscordScreen_C.Refresh Ui
struct UScreen_DiscordScreen_C_Refresh_Ui_Params
{
};

// Function Screen_DiscordScreen.Screen_DiscordScreen_C.OnGoalInitialized
struct UScreen_DiscordScreen_C_OnGoalInitialized_Params
{
};

// Function Screen_DiscordScreen.Screen_DiscordScreen_C.ExecuteUbergraph_Screen_DiscordScreen
struct UScreen_DiscordScreen_C_ExecuteUbergraph_Screen_DiscordScreen_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Screen_DiscordScreen.Screen_DiscordScreen_C.ScreenChanged__DelegateSignature
struct UScreen_DiscordScreen_C_ScreenChanged__DelegateSignature_Params
{
	ECommunityUIState*                                 CurrentState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECommunityUIState*                                 PreviousState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
