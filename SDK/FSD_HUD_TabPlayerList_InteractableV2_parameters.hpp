#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_TabPlayerList_InteractableV2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.FindPlayerList
struct UHUD_TabPlayerList_InteractableV2_C_FindPlayerList_Params
{
	TArray<class AFSDPlayerState*>                     OutPlayers;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.Construct
struct UHUD_TabPlayerList_InteractableV2_C_Construct_Params
{
};

// Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.AddPlayer
struct UHUD_TabPlayerList_InteractableV2_C_AddPlayer_Params
{
	class AFSDPlayerState**                            Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.Update
struct UHUD_TabPlayerList_InteractableV2_C_Update_Params
{
};

// Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.OnPlayerJoined_Event
struct UHUD_TabPlayerList_InteractableV2_C_OnPlayerJoined_Event_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.OnPlayerLeave_Event
struct UHUD_TabPlayerList_InteractableV2_C_OnPlayerLeave_Event_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.BndEvt__Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UHUD_TabPlayerList_InteractableV2_C_BndEvt__Button_Invite_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.InviteFriends
struct UHUD_TabPlayerList_InteractableV2_C_InviteFriends_Params
{
};

// Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.BndEvt__Button_InviteFriends2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UHUD_TabPlayerList_InteractableV2_C_BndEvt__Button_InviteFriends2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.BndEvt__SizeBox_InviteFriends03_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UHUD_TabPlayerList_InteractableV2_C_BndEvt__SizeBox_InviteFriends03_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function HUD_TabPlayerList_InteractableV2.HUD_TabPlayerList_InteractableV2_C.ExecuteUbergraph_HUD_TabPlayerList_InteractableV2
struct UHUD_TabPlayerList_InteractableV2_C_ExecuteUbergraph_HUD_TabPlayerList_InteractableV2_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
