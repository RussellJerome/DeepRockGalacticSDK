#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_TeamDisplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_TeamDisplay.UI_TeamDisplay_C.GetParents
struct UUI_TeamDisplay_C_GetParents_Params
{
	TArray<class FString>                              Names1;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function UI_TeamDisplay.UI_TeamDisplay_C.GetTeam
struct UUI_TeamDisplay_C_GetTeam_Params
{
	TArray<class AFSDPlayerState*>                     OutTeamMembers;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function UI_TeamDisplay.UI_TeamDisplay_C.UpdateIcons
struct UUI_TeamDisplay_C_UpdateIcons_Params
{
};

// Function UI_TeamDisplay.UI_TeamDisplay_C.Construct
struct UUI_TeamDisplay_C_Construct_Params
{
};

// Function UI_TeamDisplay.UI_TeamDisplay_C.OnFirstWindowOpened
struct UUI_TeamDisplay_C_OnFirstWindowOpened_Params
{
};

// Function UI_TeamDisplay.UI_TeamDisplay_C.OnLastWindowClosed
struct UUI_TeamDisplay_C_OnLastWindowClosed_Params
{
};

// Function UI_TeamDisplay.UI_TeamDisplay_C.Setup Invite Friends
struct UUI_TeamDisplay_C_Setup_Invite_Friends_Params
{
};

// Function UI_TeamDisplay.UI_TeamDisplay_C.PreConstruct
struct UUI_TeamDisplay_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TeamDisplay.UI_TeamDisplay_C.UpdateFriendInviteVisibility
struct UUI_TeamDisplay_C_UpdateFriendInviteVisibility_Params
{
};

// Function UI_TeamDisplay.UI_TeamDisplay_C.OnPlayerJoined_Event
struct UUI_TeamDisplay_C_OnPlayerJoined_Event_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TeamDisplay.UI_TeamDisplay_C.OnPlayerLeave_Event
struct UUI_TeamDisplay_C_OnPlayerLeave_Event_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_TeamDisplay.UI_TeamDisplay_C.ExecuteUbergraph_UI_TeamDisplay
struct UUI_TeamDisplay_C_ExecuteUbergraph_UI_TeamDisplay_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
