#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_SpaceRig_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_SpaceRig.HUD_SpaceRig_C.Construct
struct UHUD_SpaceRig_C_Construct_Params
{
};

// Function HUD_SpaceRig.HUD_SpaceRig_C.OnCountdownCompleted_Event_1
struct UHUD_SpaceRig_C_OnCountdownCompleted_Event_1_Params
{
};

// Function HUD_SpaceRig.HUD_SpaceRig_C.OnCameraModeChanged_Event
struct UHUD_SpaceRig_C_OnCameraModeChanged_Event_Params
{
	ECharacterCameraMode*                              NewCameraMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECharacterCameraMode*                              OldCameraMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SpaceRig.HUD_SpaceRig_C.OnTemporaryBuffChanged
struct UHUD_SpaceRig_C_OnTemporaryBuffChanged_Params
{
	class UTemporaryBuff**                             buff;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerCharacter**                           AffectedPlayer;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_SpaceRig.HUD_SpaceRig_C.ExecuteUbergraph_HUD_SpaceRig
struct UHUD_SpaceRig_C_ExecuteUbergraph_HUD_SpaceRig_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
