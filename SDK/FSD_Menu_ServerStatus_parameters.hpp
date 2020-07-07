#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Menu_ServerStatus_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Menu_ServerStatus.Menu_ServerStatus_C.Construct
struct UMenu_ServerStatus_C_Construct_Params
{
};

// Function Menu_ServerStatus.Menu_ServerStatus_C.OnPlayerJoined
struct UMenu_ServerStatus_C_OnPlayerJoined_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu_ServerStatus.Menu_ServerStatus_C.OnMissionSelected
struct UMenu_ServerStatus_C_OnMissionSelected_Params
{
	class UGeneratedMission**                          mission;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu_ServerStatus.Menu_ServerStatus_C.ExecuteUbergraph_Menu_ServerStatus
struct UMenu_ServerStatus_C_ExecuteUbergraph_Menu_ServerStatus_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
