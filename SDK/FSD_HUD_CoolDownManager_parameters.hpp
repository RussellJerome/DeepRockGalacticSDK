#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_CoolDownManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_CoolDownManager.HUD_CoolDownManager_C.GetOrCreateWidget
struct UHUD_CoolDownManager_C_GetOrCreateWidget_Params
{
	class UObject**                                    CoolDownOwner;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCoolDownProgressStyle*                     CoolDownStyle;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UCoolDownProgressWidget*                     Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_CoolDownManager.HUD_CoolDownManager_C.Construct
struct UHUD_CoolDownManager_C_Construct_Params
{
};

// Function HUD_CoolDownManager.HUD_CoolDownManager_C.OnCoolDownProgress_Event
struct UHUD_CoolDownManager_C_OnCoolDownProgress_Event_Params
{
	class UObject**                                    CoolDownObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCoolDownProgressStyle*                     Style;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float*                                             Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CoolDownManager.HUD_CoolDownManager_C.ExecuteUbergraph_HUD_CoolDownManager
struct UHUD_CoolDownManager_C_ExecuteUbergraph_HUD_CoolDownManager_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
