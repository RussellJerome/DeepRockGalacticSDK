#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_CharacterRetirement_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WND_CharacterRetirement.WND_CharacterRetirement_C.StopAudio
struct UWND_CharacterRetirement_C_StopAudio_Params
{
	class UAudioComponent**                            InAudioComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WND_CharacterRetirement.WND_CharacterRetirement_C.IsAudioFinished
struct UWND_CharacterRetirement_C_IsAudioFinished_Params
{
	class UAudioComponent**                            InAudioComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WND_CharacterRetirement.WND_CharacterRetirement_C.BuildCostList
struct UWND_CharacterRetirement_C_BuildCostList_Params
{
};

// Function WND_CharacterRetirement.WND_CharacterRetirement_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWND_CharacterRetirement_C_BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function WND_CharacterRetirement.WND_CharacterRetirement_C.SetData
struct UWND_CharacterRetirement_C_SetData_Params
{
	class UPlayerCharacterID**                         characterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_CharacterRetirement.WND_CharacterRetirement_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWND_CharacterRetirement_C_BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function WND_CharacterRetirement.WND_CharacterRetirement_C.PreConstruct
struct UWND_CharacterRetirement_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnShown
struct UWND_CharacterRetirement_C_OnShown_Params
{
};

// Function WND_CharacterRetirement.WND_CharacterRetirement_C.HideMouseCursor
struct UWND_CharacterRetirement_C_HideMouseCursor_Params
{
};

// Function WND_CharacterRetirement.WND_CharacterRetirement_C.BndEvt__OVERLAY_RetirementGranted_K2Node_ComponentBoundEvent_1_OnFinished__DelegateSignature
struct UWND_CharacterRetirement_C_BndEvt__OVERLAY_RetirementGranted_K2Node_ComponentBoundEvent_1_OnFinished__DelegateSignature_Params
{
};

// Function WND_CharacterRetirement.WND_CharacterRetirement_C.Retire
struct UWND_CharacterRetirement_C_Retire_Params
{
};

// Function WND_CharacterRetirement.WND_CharacterRetirement_C.FadeInBackground
struct UWND_CharacterRetirement_C_FadeInBackground_Params
{
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WND_CharacterRetirement.WND_CharacterRetirement_C.Stop Character Audio
struct UWND_CharacterRetirement_C_Stop_Character_Audio_Params
{
};

// Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnClosed
struct UWND_CharacterRetirement_C_OnClosed_Params
{
};

// Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnRewardsClosed
struct UWND_CharacterRetirement_C_OnRewardsClosed_Params
{
	class UWindowWidget**                              Window;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WND_CharacterRetirement.WND_CharacterRetirement_C.ExecuteUbergraph_WND_CharacterRetirement
struct UWND_CharacterRetirement_C_ExecuteUbergraph_WND_CharacterRetirement_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
