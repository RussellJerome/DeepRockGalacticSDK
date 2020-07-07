#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_TradingConsole_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_TradingConsole.BP_TradingConsole_C.IsNewPlayer
struct ABP_TradingConsole_C_IsNewPlayer_Params
{
	class ABP_PlayerController_SpaceRig_C**            PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNewPlayer;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TradingConsole.BP_TradingConsole_C.ReceiveBeginPlay
struct ABP_TradingConsole_C_ReceiveBeginPlay_Params
{
};

// Function BP_TradingConsole.BP_TradingConsole_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
struct ABP_TradingConsole_C_BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature_Params
{
	class APlayerCharacter**                           user;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TradingConsole.BP_TradingConsole_C.ExecuteUbergraph_BP_TradingConsole
struct ABP_TradingConsole_C_ExecuteUbergraph_BP_TradingConsole_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
