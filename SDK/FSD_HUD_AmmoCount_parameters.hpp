#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_AmmoCount_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_AmmoCount.HUD_AmmoCount_C.OnTotalChanged
struct UHUD_AmmoCount_C_OnTotalChanged_Params
{
	int*                                               Total;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_AmmoCount.HUD_AmmoCount_C.OnAmountChanged
struct UHUD_AmmoCount_C_OnAmountChanged_Params
{
	int*                                               count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_AmmoCount.HUD_AmmoCount_C.OnVisibleChanged
struct UHUD_AmmoCount_C_OnVisibleChanged_Params
{
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              showClipCount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_AmmoCount.HUD_AmmoCount_C.Construct
struct UHUD_AmmoCount_C_Construct_Params
{
};

// Function HUD_AmmoCount.HUD_AmmoCount_C.OnTotalVisibleChanged
struct UHUD_AmmoCount_C_OnTotalVisibleChanged_Params
{
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_AmmoCount.HUD_AmmoCount_C.PreConstruct
struct UHUD_AmmoCount_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_AmmoCount.HUD_AmmoCount_C.ExecuteUbergraph_HUD_AmmoCount
struct UHUD_AmmoCount_C_ExecuteUbergraph_HUD_AmmoCount_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
