#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_TopBar_PlayerRank_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.FromPlayerState
struct UITM_TopBar_PlayerRank_C_FromPlayerState_Params
{
	class APlayerState**                               PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.Construct
struct UITM_TopBar_PlayerRank_C_Construct_Params
{
};

// Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.PreConstruct
struct UITM_TopBar_PlayerRank_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.SetRankAndStars
struct UITM_TopBar_PlayerRank_C_SetRankAndStars_Params
{
	int*                                               Rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Stars;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.OnPlayerProgressChanged
struct UITM_TopBar_PlayerRank_C_OnPlayerProgressChanged_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPlayerProgress*                            Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ITM_TopBar_PlayerRank.ITM_TopBar_PlayerRank_C.ExecuteUbergraph_ITM_TopBar_PlayerRank
struct UITM_TopBar_PlayerRank_C_ExecuteUbergraph_ITM_TopBar_PlayerRank_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
