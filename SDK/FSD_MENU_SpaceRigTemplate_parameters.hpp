#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_MENU_SpaceRigTemplate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.IsCloseButtonVisible
struct UMENU_SpaceRigTemplate_C_IsCloseButtonVisible_Params
{
	bool                                               Visible;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.SetBackMode
struct UMENU_SpaceRigTemplate_C_SetBackMode_Params
{
	bool*                                              Close_Is_Back;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.UpdatePlayerCount
struct UMENU_SpaceRigTemplate_C_UpdatePlayerCount_Params
{
};

// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.SetCloseButtonVisible
struct UMENU_SpaceRigTemplate_C_SetCloseButtonVisible_Params
{
	bool*                                              ShowCloseButton;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.PreConstruct
struct UMENU_SpaceRigTemplate_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Construct
struct UMENU_SpaceRigTemplate_C_Construct_Params
{
};

// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Refresh
struct UMENU_SpaceRigTemplate_C_Refresh_Params
{
};

// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
struct UMENU_SpaceRigTemplate_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params
{
};

// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnCreditsChanged_Event
struct UMENU_SpaceRigTemplate_C_OnCreditsChanged_Event_Params
{
	int*                                               Credits;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnPlayerJoined_Event
struct UMENU_SpaceRigTemplate_C_OnPlayerJoined_Event_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnPlayerLeave_Event
struct UMENU_SpaceRigTemplate_C_OnPlayerLeave_Event_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnSelectedCharacterChanged_Event
struct UMENU_SpaceRigTemplate_C_OnSelectedCharacterChanged_Event_Params
{
	class UClass**                                     NewCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Setup Player Events
struct UMENU_SpaceRigTemplate_C_Setup_Player_Events_Params
{
	class APlayerState**                               NewPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnSelectedCharacterChanged
struct UMENU_SpaceRigTemplate_C_OnSelectedCharacterChanged_Params
{
	class UClass**                                     NewCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.Click Close Button
struct UMENU_SpaceRigTemplate_C_Click_Close_Button_Params
{
};

// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.PlayFadeIn
struct UMENU_SpaceRigTemplate_C_PlayFadeIn_Params
{
};

// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.FadeFinished
struct UMENU_SpaceRigTemplate_C_FadeFinished_Params
{
};

// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.ExecuteUbergraph_MENU_SpaceRigTemplate
struct UMENU_SpaceRigTemplate_C_ExecuteUbergraph_MENU_SpaceRigTemplate_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnBackClicked__DelegateSignature
struct UMENU_SpaceRigTemplate_C_OnBackClicked__DelegateSignature_Params
{
};

// Function MENU_SpaceRigTemplate.MENU_SpaceRigTemplate_C.OnClosedClicked__DelegateSignature
struct UMENU_SpaceRigTemplate_C_OnClosedClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
