#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_MixerInteractivitySteam_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Options_MixerInteractivitySteam.Options_MixerInteractivitySteam_C.PrintNotInEditor
struct UOptions_MixerInteractivitySteam_C_PrintNotInEditor_Params
{
	class FString*                                     inString;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Options_MixerInteractivitySteam.Options_MixerInteractivitySteam_C.Get_Mixer_Login_bIsEnabled_1
struct UOptions_MixerInteractivitySteam_C_Get_Mixer_Login_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Options_MixerInteractivitySteam.Options_MixerInteractivitySteam_C.Set Mixer button description
struct UOptions_MixerInteractivitySteam_C_Set_Mixer_button_description_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Options_MixerInteractivitySteam.Options_MixerInteractivitySteam_C.Construct
struct UOptions_MixerInteractivitySteam_C_Construct_Params
{
};

// Function Options_MixerInteractivitySteam.Options_MixerInteractivitySteam_C.BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
struct UOptions_MixerInteractivitySteam_C_BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params
{
};

// Function Options_MixerInteractivitySteam.Options_MixerInteractivitySteam_C.BndEvt__Mixer_Logout_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature
struct UOptions_MixerInteractivitySteam_C_BndEvt__Mixer_Logout_K2Node_ComponentBoundEvent_20_OnClicked__DelegateSignature_Params
{
};

// Function Options_MixerInteractivitySteam.Options_MixerInteractivitySteam_C.MixerHandleUser
struct UOptions_MixerInteractivitySteam_C_MixerHandleUser_Params
{
	class FString*                                     UserName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Options_MixerInteractivitySteam.Options_MixerInteractivitySteam_C.OnInitialized
struct UOptions_MixerInteractivitySteam_C_OnInitialized_Params
{
};

// Function Options_MixerInteractivitySteam.Options_MixerInteractivitySteam_C.MixerLoginStateChanged
struct UOptions_MixerInteractivitySteam_C_MixerLoginStateChanged_Params
{
	EFSDMixerLoginState*                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_MixerInteractivitySteam.Options_MixerInteractivitySteam_C.ExecuteUbergraph_Options_MixerInteractivitySteam
struct UOptions_MixerInteractivitySteam_C_ExecuteUbergraph_Options_MixerInteractivitySteam_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
