#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Frozen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_Frozen.HUD_Frozen_C.PreConstruct
struct UHUD_Frozen_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Frozen.HUD_Frozen_C.Construct
struct UHUD_Frozen_C_Construct_Params
{
};

// Function HUD_Frozen.HUD_Frozen_C.OnCharacterStateChanged_Event
struct UHUD_Frozen_C_OnCharacterStateChanged_Event_Params
{
	ECharacterState*                                   NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Frozen.HUD_Frozen_C.Tick
struct UHUD_Frozen_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Frozen.HUD_Frozen_C.SetProgress
struct UHUD_Frozen_C_SetProgress_Params
{
	float*                                             CurrentProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Frozen.HUD_Frozen_C.ExecuteUbergraph_HUD_Frozen
struct UHUD_Frozen_C_ExecuteUbergraph_HUD_Frozen_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
