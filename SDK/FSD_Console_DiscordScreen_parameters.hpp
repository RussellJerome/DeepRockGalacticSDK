#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Console_DiscordScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Console_DiscordScreen.Console_DiscordScreen_C.Handle Community Goal Content state
struct UConsole_DiscordScreen_C_Handle_Community_Goal_Content_state_Params
{
};

// Function Console_DiscordScreen.Console_DiscordScreen_C.Update Content Switcher Content
struct UConsole_DiscordScreen_C_Update_Content_Switcher_Content_Params
{
};

// Function Console_DiscordScreen.Console_DiscordScreen_C.MinersUnionTier
struct UConsole_DiscordScreen_C_MinersUnionTier_Params
{
	float                                              DSMUTier;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Console_DiscordScreen.Console_DiscordScreen_C.Set Goals
struct UConsole_DiscordScreen_C_Set_Goals_Params
{
	TArray<class FString>                              Goals;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      Values;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Members;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Console_DiscordScreen.Console_DiscordScreen_C.StopAllLogos
struct UConsole_DiscordScreen_C_StopAllLogos_Params
{
};

// Function Console_DiscordScreen.Console_DiscordScreen_C.FactionLogosOn
struct UConsole_DiscordScreen_C_FactionLogosOn_Params
{
};

// Function Console_DiscordScreen.Console_DiscordScreen_C.SetUsable
struct UConsole_DiscordScreen_C_SetUsable_Params
{
	bool*                                              Usable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Console_DiscordScreen.Console_DiscordScreen_C.SetScreen
struct UConsole_DiscordScreen_C_SetScreen_Params
{
	bool*                                              Appear;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Console_DiscordScreen.Console_DiscordScreen_C.LogoOn
struct UConsole_DiscordScreen_C_LogoOn_Params
{
};

// Function Console_DiscordScreen.Console_DiscordScreen_C.CreditsOn
struct UConsole_DiscordScreen_C_CreditsOn_Params
{
};

// Function Console_DiscordScreen.Console_DiscordScreen_C.ClearTextLabels
struct UConsole_DiscordScreen_C_ClearTextLabels_Params
{
};

// Function Console_DiscordScreen.Console_DiscordScreen_C.StartLoad
struct UConsole_DiscordScreen_C_StartLoad_Params
{
	float*                                             LoadingTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Console_DiscordScreen.Console_DiscordScreen_C.RefreshUI
struct UConsole_DiscordScreen_C_RefreshUI_Params
{
};

// Function Console_DiscordScreen.Console_DiscordScreen_C.Construct
struct UConsole_DiscordScreen_C_Construct_Params
{
};

// Function Console_DiscordScreen.Console_DiscordScreen_C.Tick
struct UConsole_DiscordScreen_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Console_DiscordScreen.Console_DiscordScreen_C.UpdateUI
struct UConsole_DiscordScreen_C_UpdateUI_Params
{
	struct FDiscordServerData*                         discordServerCount;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Console_DiscordScreen.Console_DiscordScreen_C.UserInServer
struct UConsole_DiscordScreen_C_UserInServer_Params
{
	bool*                                              isInServer;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Console_DiscordScreen.Console_DiscordScreen_C.Do Running Text
struct UConsole_DiscordScreen_C_Do_Running_Text_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTextBlock**                                 Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Console_DiscordScreen.Console_DiscordScreen_C.PreConstruct
struct UConsole_DiscordScreen_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Console_DiscordScreen.Console_DiscordScreen_C.Init
struct UConsole_DiscordScreen_C_Init_Params
{
};

// Function Console_DiscordScreen.Console_DiscordScreen_C.Stop
struct UConsole_DiscordScreen_C_Stop_Params
{
};

// Function Console_DiscordScreen.Console_DiscordScreen_C.TimedUserRequest
struct UConsole_DiscordScreen_C_TimedUserRequest_Params
{
	float*                                             Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Console_DiscordScreen.Console_DiscordScreen_C.RequestUserInByTime
struct UConsole_DiscordScreen_C_RequestUserInByTime_Params
{
};

// Function Console_DiscordScreen.Console_DiscordScreen_C.OnFactionsDataRecievedEvent
struct UConsole_DiscordScreen_C_OnFactionsDataRecievedEvent_Params
{
	TArray<class FString>*                             Goals;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>*                                     Values;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>*                                       Members;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Console_DiscordScreen.Console_DiscordScreen_C.OnCGSData
struct UConsole_DiscordScreen_C_OnCGSData_Params
{
	bool*                                              stateReceived;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Console_DiscordScreen.Console_DiscordScreen_C.OnCheckUI
struct UConsole_DiscordScreen_C_OnCheckUI_Params
{
};

// Function Console_DiscordScreen.Console_DiscordScreen_C.OnGoalInitialized
struct UConsole_DiscordScreen_C_OnGoalInitialized_Params
{
};

// Function Console_DiscordScreen.Console_DiscordScreen_C.ExecuteUbergraph_Console_DiscordScreen
struct UConsole_DiscordScreen_C_ExecuteUbergraph_Console_DiscordScreen_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Console_DiscordScreen.Console_DiscordScreen_C.ScreenChanged__DelegateSignature
struct UConsole_DiscordScreen_C_ScreenChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
