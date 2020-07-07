#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_PlayerDown_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_PlayerDown.HUD_PlayerDown_C.GetCycleCameraVisibility
struct UHUD_PlayerDown_C_GetCycleCameraVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUD_PlayerDown.HUD_PlayerDown_C.Construct
struct UHUD_PlayerDown_C_Construct_Params
{
};

// Function HUD_PlayerDown.HUD_PlayerDown_C.OnDownCameraTargetChanged
struct UHUD_PlayerDown_C_OnDownCameraTargetChanged_Params
{
	class APlayerCharacter**                           Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerDown.HUD_PlayerDown_C.PreConstruct
struct UHUD_PlayerDown_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerDown.HUD_PlayerDown_C.End Player Down
struct UHUD_PlayerDown_C_End_Player_Down_Params
{
};

// Function HUD_PlayerDown.HUD_PlayerDown_C.ReceiveNewVisibility
struct UHUD_PlayerDown_C_ReceiveNewVisibility_Params
{
	ESlateVisibility*                                  NewVisibility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerDown.HUD_PlayerDown_C.ExecuteUbergraph_HUD_PlayerDown
struct UHUD_PlayerDown_C_ExecuteUbergraph_HUD_PlayerDown_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
