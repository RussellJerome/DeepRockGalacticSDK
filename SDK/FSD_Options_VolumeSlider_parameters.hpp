#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Options_VolumeSlider_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Options_VolumeSlider.Options_VolumeSlider_C.Construct
struct UOptions_VolumeSlider_C_Construct_Params
{
};

// Function Options_VolumeSlider.Options_VolumeSlider_C.PreConstruct
struct UOptions_VolumeSlider_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_VolumeSlider.Options_VolumeSlider_C.BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
struct UOptions_VolumeSlider_C_BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_VolumeSlider.Options_VolumeSlider_C.UINeedsUpdate
struct UOptions_VolumeSlider_C_UINeedsUpdate_Params
{
};

// Function Options_VolumeSlider.Options_VolumeSlider_C.Update Percentage Text
struct UOptions_VolumeSlider_C_Update_Percentage_Text_Params
{
};

// Function Options_VolumeSlider.Options_VolumeSlider_C.ExecuteUbergraph_Options_VolumeSlider
struct UOptions_VolumeSlider_C_ExecuteUbergraph_Options_VolumeSlider_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
