#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITEM_SpaceRig_PlayerRank_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.Construct
struct UITEM_SpaceRig_PlayerRank_C_Construct_Params
{
};

// Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.Update
struct UITEM_SpaceRig_PlayerRank_C_Update_Params
{
};

// Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.OnCreditsChanged_Event
struct UITEM_SpaceRig_PlayerRank_C_OnCreditsChanged_Event_Params
{
};

// Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.OnPlayerProgressChanged
struct UITEM_SpaceRig_PlayerRank_C_OnPlayerProgressChanged_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPlayerProgress*                            Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.PreConstruct
struct UITEM_SpaceRig_PlayerRank_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITEM_SpaceRig_PlayerRank.ITEM_SpaceRig_PlayerRank_C.ExecuteUbergraph_ITEM_SpaceRig_PlayerRank
struct UITEM_SpaceRig_PlayerRank_C_ExecuteUbergraph_ITEM_SpaceRig_PlayerRank_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
