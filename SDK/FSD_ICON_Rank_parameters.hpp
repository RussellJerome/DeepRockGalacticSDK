#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ICON_Rank_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ICON_Rank.ICON_Rank_C.Construct
struct UICON_Rank_C_Construct_Params
{
};

// Function ICON_Rank.ICON_Rank_C.Update
struct UICON_Rank_C_Update_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ICON_Rank.ICON_Rank_C.PreConstruct
struct UICON_Rank_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ICON_Rank.ICON_Rank_C.SetRankAndStars
struct UICON_Rank_C_SetRankAndStars_Params
{
	int*                                               Rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Stars;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ICON_Rank.ICON_Rank_C.ExecuteUbergraph_ICON_Rank
struct UICON_Rank_C_ExecuteUbergraph_ICON_Rank_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
