#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Console_DiscordEoMScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.ClearText
struct UConsole_DiscordEoMScreen_C_ClearText_Params
{
};

// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.OnFail_D5557812434CB42B270037821C78EAB5
struct UConsole_DiscordEoMScreen_C_OnFail_D5557812434CB42B270037821C78EAB5_Params
{
	class UTexture2DDynamic**                          Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.OnSuccess_D5557812434CB42B270037821C78EAB5
struct UConsole_DiscordEoMScreen_C_OnSuccess_D5557812434CB42B270037821C78EAB5_Params
{
	class UTexture2DDynamic**                          Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Construct
struct UConsole_DiscordEoMScreen_C_Construct_Params
{
};

// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Tick
struct UConsole_DiscordEoMScreen_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.UpdateUI
struct UConsole_DiscordEoMScreen_C_UpdateUI_Params
{
	struct FDiscordServerData*                         discordServerCount;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Do Running Text
struct UConsole_DiscordEoMScreen_C_Do_Running_Text_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTextBlock**                                 Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.PreConstruct
struct UConsole_DiscordEoMScreen_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Init
struct UConsole_DiscordEoMScreen_C_Init_Params
{
};

// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Stop
struct UConsole_DiscordEoMScreen_C_Stop_Params
{
};

// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.On EoM Data Received
struct UConsole_DiscordEoMScreen_C_On_EoM_Data_Received_Params
{
	bool*                                              HasEoM;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.OpenDescriptions
struct UConsole_DiscordEoMScreen_C_OpenDescriptions_Params
{
};

// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Player Name Running Effect
struct UConsole_DiscordEoMScreen_C_Player_Name_Running_Effect_Params
{
};

// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.Player Flavor Text Running Effect
struct UConsole_DiscordEoMScreen_C_Player_Flavor_Text_Running_Effect_Params
{
};

// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.ExecuteUbergraph_Console_DiscordEoMScreen
struct UConsole_DiscordEoMScreen_C_ExecuteUbergraph_Console_DiscordEoMScreen_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Console_DiscordEoMScreen.Console_DiscordEoMScreen_C.ScreenChanged__DelegateSignature
struct UConsole_DiscordEoMScreen_C_ScreenChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
