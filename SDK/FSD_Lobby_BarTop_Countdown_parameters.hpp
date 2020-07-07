#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Lobby_BarTop_Countdown_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.Construct
struct ULobby_BarTop_Countdown_C_Construct_Params
{
};

// Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.CountDownChanged
struct ULobby_BarTop_Countdown_C_CountDownChanged_Params
{
	bool*                                              IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.TimerChanged
struct ULobby_BarTop_Countdown_C_TimerChanged_Params
{
	float*                                             newTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.HostCoundownChanged
struct ULobby_BarTop_Countdown_C_HostCoundownChanged_Params
{
	bool*                                              IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.CustomEvent
struct ULobby_BarTop_Countdown_C_CustomEvent_Params
{
	float*                                             newTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.PreConstruct
struct ULobby_BarTop_Countdown_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Lobby_BarTop_Countdown.Lobby_BarTop_Countdown_C.ExecuteUbergraph_Lobby_BarTop_Countdown
struct ULobby_BarTop_Countdown_C_ExecuteUbergraph_Lobby_BarTop_Countdown_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
