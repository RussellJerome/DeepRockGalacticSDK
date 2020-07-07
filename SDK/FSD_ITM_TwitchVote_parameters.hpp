#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_TwitchVote_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_TwitchVote.ITM_TwitchVote_C.SetVotes
struct UITM_TwitchVote_C_SetVotes_Params
{
};

// Function ITM_TwitchVote.ITM_TwitchVote_C.SetBiomes
struct UITM_TwitchVote_C_SetBiomes_Params
{
};

// Function ITM_TwitchVote.ITM_TwitchVote_C.PreConstruct
struct UITM_TwitchVote_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_TwitchVote.ITM_TwitchVote_C.Construct
struct UITM_TwitchVote_C_Construct_Params
{
};

// Function ITM_TwitchVote.ITM_TwitchVote_C.OnCommandCalled
struct UITM_TwitchVote_C_OnCommandCalled_Params
{
	class FString*                                     Command;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ITM_TwitchVote.ITM_TwitchVote_C.HandleClock
struct UITM_TwitchVote_C_HandleClock_Params
{
};

// Function ITM_TwitchVote.ITM_TwitchVote_C.ExecuteUbergraph_ITM_TwitchVote
struct UITM_TwitchVote_C_ExecuteUbergraph_ITM_TwitchVote_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
