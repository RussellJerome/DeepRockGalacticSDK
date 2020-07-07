#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PlayerControllerBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetIsEscapeMenuEnabled
struct ABP_PlayerControllerBase_C_SetIsEscapeMenuEnabled_Params
{
	bool*                                              IsEscapeMenuEnabled;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetHasShownCharacterSelector
struct ABP_PlayerControllerBase_C_SetHasShownCharacterSelector_Params
{
	bool*                                              HasShown;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ItemFilter
struct ABP_PlayerControllerBase_C_ItemFilter_Params
{
	class UClass**                                     itemClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetClassAnalytics
struct ABP_PlayerControllerBase_C_SetClassAnalytics_Params
{
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetUnlockAnalytics
struct ABP_PlayerControllerBase_C_SetUnlockAnalytics_Params
{
	TArray<class UClass*>                              primary;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UClass*>                              Secundary;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.GetUnlockedItems
struct ABP_PlayerControllerBase_C_GetUnlockedItems_Params
{
	EItemCategory*                                     Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              Unlocked_Items;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.CreateTwitchInteractionIfNotCreated
struct ABP_PlayerControllerBase_C_CreateTwitchInteractionIfNotCreated_Params
{
	int*                                               ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.TwitchInteraction
struct ABP_PlayerControllerBase_C_TwitchInteraction_Params
{
	int*                                               ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ReStartAnsel
struct ABP_PlayerControllerBase_C_ReStartAnsel_Params
{
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.StartAnsel
struct ABP_PlayerControllerBase_C_StartAnsel_Params
{
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.StopAnsel
struct ABP_PlayerControllerBase_C_StopAnsel_Params
{
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.CloseTwitchOAuth
struct ABP_PlayerControllerBase_C_CloseTwitchOAuth_Params
{
	bool*                                              ChangeStatus;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.CreateTwitchOAuthIfNotCreated
struct ABP_PlayerControllerBase_C_CreateTwitchOAuthIfNotCreated_Params
{
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.CreateInviteRequestIfNotCreated
struct ABP_PlayerControllerBase_C_CreateInviteRequestIfNotCreated_Params
{
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_AcceptInvite_K2Node_InputActionEvent_3
struct ABP_PlayerControllerBase_C_InpActEvt_AcceptInvite_K2Node_InputActionEvent_3_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_RejectInvite_K2Node_InputActionEvent_2
struct ABP_PlayerControllerBase_C_InpActEvt_RejectInvite_K2Node_InputActionEvent_2_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_IgnoreInvite_K2Node_InputActionEvent_1
struct ABP_PlayerControllerBase_C_InpActEvt_IgnoreInvite_K2Node_InputActionEvent_1_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.InpActEvt_Ctrl_O_K2Node_InputKeyEvent_1
struct ABP_PlayerControllerBase_C_InpActEvt_Ctrl_O_K2Node_InputKeyEvent_1_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ReceiveBeginPlay
struct ABP_PlayerControllerBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.SetPhotographyMode
struct ABP_PlayerControllerBase_C_SetPhotographyMode_Params
{
	bool*                                              active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Return Client Camera
struct ABP_PlayerControllerBase_C_Return_Client_Camera_Params
{
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Setup Invite Handling
struct ABP_PlayerControllerBase_C_Setup_Invite_Handling_Params
{
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Setup Retirement Notification
struct ABP_PlayerControllerBase_C_Setup_Retirement_Notification_Params
{
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.OnCharacterCanRetire_Event
struct ABP_PlayerControllerBase_C_OnCharacterCanRetire_Event_Params
{
	class UClass**                                     CharacterClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.UpdateAnalytics
struct ABP_PlayerControllerBase_C_UpdateAnalytics_Params
{
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.AdjustCamera
struct ABP_PlayerControllerBase_C_AdjustCamera_Params
{
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Setup Change User
struct ABP_PlayerControllerBase_C_Setup_Change_User_Params
{
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ChangeUser
struct ABP_PlayerControllerBase_C_ChangeUser_Params
{
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ChangeUserReply
struct ABP_PlayerControllerBase_C_ChangeUserReply_Params
{
	bool*                                              Yes;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Reset Player Location
struct ABP_PlayerControllerBase_C_Reset_Player_Location_Params
{
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Event On Join Request Reply
struct ABP_PlayerControllerBase_C_Event_On_Join_Request_Reply_Params
{
	int*                                               Reply;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.Event On Join Request
struct ABP_PlayerControllerBase_C_Event_On_Join_Request_Params
{
	struct FDiscordUser*                               handleDiscordJoinRequest;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ExecuteUbergraph_BP_PlayerControllerBase
struct ABP_PlayerControllerBase_C_ExecuteUbergraph_BP_PlayerControllerBase_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerControllerBase.BP_PlayerControllerBase_C.ReplyToInviteRequest__DelegateSignature
struct ABP_PlayerControllerBase_C_ReplyToInviteRequest__DelegateSignature_Params
{
	int*                                               Reply;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
