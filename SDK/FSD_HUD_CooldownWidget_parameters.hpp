#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_CooldownWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_CooldownWidget.HUD_CooldownWidget_C.SetBackgroundTint
struct UHUD_CooldownWidget_C_SetBackgroundTint_Params
{
	struct FLinearColor*                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CooldownWidget.HUD_CooldownWidget_C.SetFillTint
struct UHUD_CooldownWidget_C_SetFillTint_Params
{
	struct FLinearColor*                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CooldownWidget.HUD_CooldownWidget_C.SetPercent
struct UHUD_CooldownWidget_C_SetPercent_Params
{
	float*                                             InPercent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CooldownWidget.HUD_CooldownWidget_C.ReceiveInitWidget
struct UHUD_CooldownWidget_C_ReceiveInitWidget_Params
{
};

// Function HUD_CooldownWidget.HUD_CooldownWidget_C.PreConstruct
struct UHUD_CooldownWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CooldownWidget.HUD_CooldownWidget_C.Construct
struct UHUD_CooldownWidget_C_Construct_Params
{
};

// Function HUD_CooldownWidget.HUD_CooldownWidget_C.SetHeightScale
struct UHUD_CooldownWidget_C_SetHeightScale_Params
{
	float*                                             Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CooldownWidget.HUD_CooldownWidget_C.OnAnimFadeoutFinished
struct UHUD_CooldownWidget_C_OnAnimFadeoutFinished_Params
{
};

// Function HUD_CooldownWidget.HUD_CooldownWidget_C.ReceiveUpdateProgress
struct UHUD_CooldownWidget_C_ReceiveUpdateProgress_Params
{
	float*                                             InProgress;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CooldownWidget.HUD_CooldownWidget_C.ExecuteUbergraph_HUD_CooldownWidget
struct UHUD_CooldownWidget_C_ExecuteUbergraph_HUD_CooldownWidget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
