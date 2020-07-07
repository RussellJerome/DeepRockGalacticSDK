#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_HUD_Element_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Options_HUD_Element.Options_HUD_Element_C.UpdateDots
struct UOptions_HUD_Element_C_UpdateDots_Params
{
};

// Function Options_HUD_Element.Options_HUD_Element_C.SetupOptions
struct UOptions_HUD_Element_C_SetupOptions_Params
{
};

// Function Options_HUD_Element.Options_HUD_Element_C.PreConstruct
struct UOptions_HUD_Element_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_HUD_Element.Options_HUD_Element_C.BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
struct UOptions_HUD_Element_C_BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature_Params
{
	struct FText*                                      Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_HUD_Element.Options_HUD_Element_C.BndEvt__Basic_Option_K2Node_ComponentBoundEvent_1_OnHoveringBegin__DelegateSignature
struct UOptions_HUD_Element_C_BndEvt__Basic_Option_K2Node_ComponentBoundEvent_1_OnHoveringBegin__DelegateSignature_Params
{
};

// Function Options_HUD_Element.Options_HUD_Element_C.BndEvt__Basic_Option_K2Node_ComponentBoundEvent_2_OnHoveringEnd__DelegateSignature
struct UOptions_HUD_Element_C_BndEvt__Basic_Option_K2Node_ComponentBoundEvent_2_OnHoveringEnd__DelegateSignature_Params
{
};

// Function Options_HUD_Element.Options_HUD_Element_C.Construct
struct UOptions_HUD_Element_C_Construct_Params
{
};

// Function Options_HUD_Element.Options_HUD_Element_C.OnModeChanged_Event
struct UOptions_HUD_Element_C_OnModeChanged_Event_Params
{
	class UHUDVisibilityGroup**                        Group;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EHUDVisibilityMode*                                Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_HUD_Element.Options_HUD_Element_C.ExecuteUbergraph_Options_HUD_Element
struct UOptions_HUD_Element_C_ExecuteUbergraph_Options_HUD_Element_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
