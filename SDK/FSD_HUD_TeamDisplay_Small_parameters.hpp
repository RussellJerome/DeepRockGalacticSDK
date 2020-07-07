#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_TeamDisplay_Small_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_TeamDisplay_Small.HUD_TeamDisplay_Small_C.Construct
struct UHUD_TeamDisplay_Small_C_Construct_Params
{
};

// Function HUD_TeamDisplay_Small.HUD_TeamDisplay_Small_C.OnPlayerJoined
struct UHUD_TeamDisplay_Small_C_OnPlayerJoined_Params
{
	class AFSDPlayerState**                            PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TeamDisplay_Small.HUD_TeamDisplay_Small_C.PreConstruct
struct UHUD_TeamDisplay_Small_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_TeamDisplay_Small.HUD_TeamDisplay_Small_C.ExecuteUbergraph_HUD_TeamDisplay_Small
struct UHUD_TeamDisplay_Small_C_ExecuteUbergraph_HUD_TeamDisplay_Small_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
