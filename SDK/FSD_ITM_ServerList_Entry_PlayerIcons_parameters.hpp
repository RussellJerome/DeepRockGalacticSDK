#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_ServerList_Entry_PlayerIcons_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.Get Player Details
struct UITM_ServerList_Entry_PlayerIcons_C_Get_Player_Details_Params
{
	TArray<class UClass*>                              Players;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int*                                               PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsClassLocked;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OutColor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  OutIcon;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutPlayer;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.GetToolTip
struct UITM_ServerList_Entry_PlayerIcons_C_GetToolTip_Params
{
	class UTOOLTIP_ServerEntry_Team_C*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.SetIndexBrush
struct UITM_ServerList_Entry_PlayerIcons_C_SetIndexBrush_Params
{
	int*                                               NumPlayers;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               EntryNum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UImage**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UClass*>                              Players;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              IsClassLocked;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.SetNumPlayers
struct UITM_ServerList_Entry_PlayerIcons_C_SetNumPlayers_Params
{
	int*                                               NumPlayers;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              Players;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              IsClassLocked;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.Construct
struct UITM_ServerList_Entry_PlayerIcons_C_Construct_Params
{
};

// Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.PreConstruct
struct UITM_ServerList_Entry_PlayerIcons_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ITM_ServerList_Entry_PlayerIcons.ITM_ServerList_Entry_PlayerIcons_C.ExecuteUbergraph_ITM_ServerList_Entry_PlayerIcons
struct UITM_ServerList_Entry_PlayerIcons_C_ExecuteUbergraph_ITM_ServerList_Entry_PlayerIcons_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
