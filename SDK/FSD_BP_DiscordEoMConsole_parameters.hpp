#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_DiscordEoMConsole_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_DiscordEoMConsole.BP_DiscordEoMConsole_C.ReceiveBeginPlay
struct ABP_DiscordEoMConsole_C_ReceiveBeginPlay_Params
{
};

// Function BP_DiscordEoMConsole.BP_DiscordEoMConsole_C.ReceiveTick
struct ABP_DiscordEoMConsole_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DiscordEoMConsole.BP_DiscordEoMConsole_C.RecieveEoMData
struct ABP_DiscordEoMConsole_C_RecieveEoMData_Params
{
	bool*                                              HasEoM;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DiscordEoMConsole.BP_DiscordEoMConsole_C.ExecuteUbergraph_BP_DiscordEoMConsole
struct ABP_DiscordEoMConsole_C_ExecuteUbergraph_BP_DiscordEoMConsole_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
