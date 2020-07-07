#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_HUD_ElementPresets_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Options_HUD_ElementPresets.Options_HUD_ElementPresets_C.AddPreset
struct UOptions_HUD_ElementPresets_C_AddPreset_Params
{
	EHUDVisibilityPresets*                             PresetID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_HUD_ElementPresets.Options_HUD_ElementPresets_C.PreConstruct
struct UOptions_HUD_ElementPresets_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_HUD_ElementPresets.Options_HUD_ElementPresets_C.ExecuteUbergraph_Options_HUD_ElementPresets
struct UOptions_HUD_ElementPresets_C_ExecuteUbergraph_Options_HUD_ElementPresets_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
