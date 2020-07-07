#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_PlayerPerks_Icon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetCooldownDuration
struct UHUD_PlayerPerks_Icon_C_GetCooldownDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetCoolDownProgress
struct UHUD_PlayerPerks_Icon_C_GetCoolDownProgress_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetMaxUseCharges
struct UHUD_PlayerPerks_Icon_C_GetMaxUseCharges_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.GetRemainingUseCharges
struct UHUD_PlayerPerks_Icon_C_GetRemainingUseCharges_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.RefreshCounterAndProgress
struct UHUD_PlayerPerks_Icon_C_RefreshCounterAndProgress_Params
{
	bool                                               CoolDownActive;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.SetCounter
struct UHUD_PlayerPerks_Icon_C_SetCounter_Params
{
	int*                                               InCount;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.SetProgress
struct UHUD_PlayerPerks_Icon_C_SetProgress_Params
{
	float*                                             InProgress;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutProgress;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.OnTick_64B6D09E4CB7705CDF68E9949787003B
struct UHUD_PlayerPerks_Icon_C_OnTick_64B6D09E4CB7705CDF68E9949787003B_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NormalizedTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.Completed_64B6D09E4CB7705CDF68E9949787003B
struct UHUD_PlayerPerks_Icon_C_Completed_64B6D09E4CB7705CDF68E9949787003B_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NormalizedTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.ReceivePerkAssetChanged
struct UHUD_PlayerPerks_Icon_C_ReceivePerkAssetChanged_Params
{
};

// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.Construct
struct UHUD_PlayerPerks_Icon_C_Construct_Params
{
};

// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.OnAnimCoolDownFinished
struct UHUD_PlayerPerks_Icon_C_OnAnimCoolDownFinished_Params
{
};

// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.Begin Cool Down
struct UHUD_PlayerPerks_Icon_C_Begin_Cool_Down_Params
{
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.PreConstruct
struct UHUD_PlayerPerks_Icon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.RefreshUseCharges
struct UHUD_PlayerPerks_Icon_C_RefreshUseCharges_Params
{
	class UPerkAsset**                                 Perk;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.CoolDownTick
struct UHUD_PlayerPerks_Icon_C_CoolDownTick_Params
{
};

// Function HUD_PlayerPerks_Icon.HUD_PlayerPerks_Icon_C.ExecuteUbergraph_HUD_PlayerPerks_Icon
struct UHUD_PlayerPerks_Icon_C_ExecuteUbergraph_HUD_PlayerPerks_Icon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
