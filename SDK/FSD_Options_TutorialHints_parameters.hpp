#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_TutorialHints_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Options_TutorialHints.Options_TutorialHints_C.Construct
struct UOptions_TutorialHints_C_Construct_Params
{
};

// Function Options_TutorialHints.Options_TutorialHints_C.OnEnableTutorialHintsChanged
struct UOptions_TutorialHints_C_OnEnableTutorialHintsChanged_Params
{
	bool*                                              NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_TutorialHints.Options_TutorialHints_C.BndEvt__Button_Reset_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UOptions_TutorialHints_C_BndEvt__Button_Reset_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function Options_TutorialHints.Options_TutorialHints_C.BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
struct UOptions_TutorialHints_C_BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params
{
	bool*                                              IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_TutorialHints.Options_TutorialHints_C.ExecuteUbergraph_Options_TutorialHints
struct UOptions_TutorialHints_C_ExecuteUbergraph_Options_TutorialHints_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
