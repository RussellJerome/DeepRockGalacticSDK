#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Basic_Slider_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Basic_Slider.Basic_Slider_C.Set Text
struct UBasic_Slider_C_Set_Text_Params
{
	struct FText*                                      New_Text;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Basic_Slider.Basic_Slider_C.Get Value
struct UBasic_Slider_C_Get_Value_Params
{
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_Slider.Basic_Slider_C.Get Percent
struct UBasic_Slider_C_Get_Percent_Params
{
	float                                              Percent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_Slider.Basic_Slider_C.Set Value
struct UBasic_Slider_C_Set_Value_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_Slider.Basic_Slider_C.Set Percent
struct UBasic_Slider_C_Set_Percent_Params
{
	float*                                             New_Percent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_Slider.Basic_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature
struct UBasic_Slider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_Slider.Basic_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature
struct UBasic_Slider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function Basic_Slider.Basic_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_6_OnMouseCaptureEndEvent__DelegateSignature
struct UBasic_Slider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_6_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function Basic_Slider.Basic_Slider_C.PreConstruct
struct UBasic_Slider_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_Slider.Basic_Slider_C.Update Text
struct UBasic_Slider_C_Update_Text_Params
{
};

// Function Basic_Slider.Basic_Slider_C.ExecuteUbergraph_Basic_Slider
struct UBasic_Slider_C_ExecuteUbergraph_Basic_Slider_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_Slider.Basic_Slider_C.OnPercentChanged__DelegateSignature
struct UBasic_Slider_C_OnPercentChanged__DelegateSignature_Params
{
	float*                                             Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Basic_Slider.Basic_Slider_C.OnValueChanged__DelegateSignature
struct UBasic_Slider_C_OnValueChanged__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
