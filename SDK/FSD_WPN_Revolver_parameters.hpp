#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WPN_Revolver_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WPN_Revolver.WPN_Revolver_C.GetGearStatEntry
struct AWPN_Revolver_C_GetGearStatEntry_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FGearStatEntry>                      Stats;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WPN_Revolver.WPN_Revolver_C.UserConstructionScript
struct AWPN_Revolver_C_UserConstructionScript_Params
{
};

// Function WPN_Revolver.WPN_Revolver_C.Receive_ReloadBegin
struct AWPN_Revolver_C_Receive_ReloadBegin_Params
{
};

// Function WPN_Revolver.WPN_Revolver_C.Receive_ReloadEnd
struct AWPN_Revolver_C_Receive_ReloadEnd_Params
{
};

// Function WPN_Revolver.WPN_Revolver_C.ReceiveBeginPlay
struct AWPN_Revolver_C_ReceiveBeginPlay_Params
{
};

// Function WPN_Revolver.WPN_Revolver_C.OnSpreadChanged_Event_1
struct AWPN_Revolver_C_OnSpreadChanged_Event_1_Params
{
	float*                                             HorizontalSpread;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             VerticalSpread;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              isAtRest;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WPN_Revolver.WPN_Revolver_C.ExecuteUbergraph_WPN_Revolver
struct AWPN_Revolver_C_ExecuteUbergraph_WPN_Revolver_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
