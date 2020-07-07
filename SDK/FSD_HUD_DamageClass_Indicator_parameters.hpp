#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_DamageClass_Indicator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.UpdateThisSpacer
struct UHUD_DamageClass_Indicator_C_UpdateThisSpacer_Params
{
	class UWidget**                                    ThisSpacer;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPanelWidget**                               ThisAfflictionBox;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPanelWidget**                               OtherAfflictionBox;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              TemperatureIsVisible;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.UpdateSpacers
struct UHUD_DamageClass_Indicator_C_UpdateSpacers_Params
{
};

// Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.ClearIcons
struct UHUD_DamageClass_Indicator_C_ClearIcons_Params
{
};

// Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.CreateIcon
struct UHUD_DamageClass_Indicator_C_CreateIcon_Params
{
	class UPawnAffliction**                            affliction;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UHUD_DamageClass_Item_C*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.Construct
struct UHUD_DamageClass_Indicator_C_Construct_Params
{
};

// Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.OnAfflictionActivated
struct UHUD_DamageClass_Indicator_C_OnAfflictionActivated_Params
{
	class UPawnAffliction**                            affliction;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.OnAfflictionDeactivated
struct UHUD_DamageClass_Indicator_C_OnAfflictionDeactivated_Params
{
	class UPawnAffliction**                            affliction;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.Elapsed
struct UHUD_DamageClass_Indicator_C_Elapsed_Params
{
	class UHUD_DamageClass_Item_C**                    Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.BndEvt__HUD_PlayerTemperature_K2Node_ComponentBoundEvent_0_VisibilityChangedDelegate__DelegateSignature
struct UHUD_DamageClass_Indicator_C_BndEvt__HUD_PlayerTemperature_K2Node_ComponentBoundEvent_0_VisibilityChangedDelegate__DelegateSignature_Params
{
	class UUserWidget**                                Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.ExecuteUbergraph_HUD_DamageClass_Indicator
struct UHUD_DamageClass_Indicator_C_ExecuteUbergraph_HUD_DamageClass_Indicator_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
