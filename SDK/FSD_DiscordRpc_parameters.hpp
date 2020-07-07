#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DiscordRpc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DiscordRpc.DiscordRpc.UpdatePresence
struct UDiscordRpc_UpdatePresence_Params
{
};

// Function DiscordRpc.DiscordRpc.Shutdown
struct UDiscordRpc_Shutdown_Params
{
};

// Function DiscordRpc.DiscordRpc.RunCallbacks
struct UDiscordRpc_RunCallbacks_Params
{
};

// Function DiscordRpc.DiscordRpc.Respond
struct UDiscordRpc_Respond_Params
{
	class FString*                                     userId;                                                   // (Parm, ZeroConstructor)
	int*                                               Reply;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DiscordRpc.DiscordRpc.Initialize
struct UDiscordRpc_Initialize_Params
{
	class FString*                                     applicationId;                                            // (Parm, ZeroConstructor)
	bool*                                              autoRegister;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class FString*                                     optionalSteamId;                                          // (Parm, ZeroConstructor)
};

// Function DiscordRpc.DiscordRpc.ClearPresence
struct UDiscordRpc_ClearPresence_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
