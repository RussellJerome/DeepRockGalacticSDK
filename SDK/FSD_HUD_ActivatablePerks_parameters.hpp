#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_ActivatablePerks_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_ActivatablePerks.HUD_ActivatablePerks_C.SetPerks
struct UHUD_ActivatablePerks_C_SetPerks_Params
{
	TArray<class UPerkAsset*>                          Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function HUD_ActivatablePerks.HUD_ActivatablePerks_C.Construct
struct UHUD_ActivatablePerks_C_Construct_Params
{
};

// Function HUD_ActivatablePerks.HUD_ActivatablePerks_C.PreConstruct
struct UHUD_ActivatablePerks_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_ActivatablePerks.HUD_ActivatablePerks_C.ExecuteUbergraph_HUD_ActivatablePerks
struct UHUD_ActivatablePerks_C_ExecuteUbergraph_HUD_ActivatablePerks_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
