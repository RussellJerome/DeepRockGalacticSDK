#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_PassedOut_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PassedOut.BP_PassedOut_C.AllPassedOut
struct UBP_PassedOut_C_AllPassedOut_Params
{
	bool                                               AllPassedOut;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PassedOut.BP_PassedOut_C.ReceiveBeginPlay
struct UBP_PassedOut_C_ReceiveBeginPlay_Params
{
};

// Function BP_PassedOut.BP_PassedOut_C.BeginFadeToBlack
struct UBP_PassedOut_C_BeginFadeToBlack_Params
{
};

// Function BP_PassedOut.BP_PassedOut_C.ReceiveStateEnter
struct UBP_PassedOut_C_ReceiveStateEnter_Params
{
};

// Function BP_PassedOut.BP_PassedOut_C.ReceiveStateExit
struct UBP_PassedOut_C_ReceiveStateExit_Params
{
};

// Function BP_PassedOut.BP_PassedOut_C.Turn Off Juke Box
struct UBP_PassedOut_C_Turn_Off_Juke_Box_Params
{
};

// Function BP_PassedOut.BP_PassedOut_C.Remove Drinking Mugs
struct UBP_PassedOut_C_Remove_Drinking_Mugs_Params
{
};

// Function BP_PassedOut.BP_PassedOut_C.ReceiveTeamPassedOut
struct UBP_PassedOut_C_ReceiveTeamPassedOut_Params
{
};

// Function BP_PassedOut.BP_PassedOut_C.ExecuteUbergraph_BP_PassedOut
struct UBP_PassedOut_C_ExecuteUbergraph_BP_PassedOut_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
