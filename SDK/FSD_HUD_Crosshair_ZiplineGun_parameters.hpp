#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_Crosshair_ZiplineGun_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.SetMinMaxAngle
struct UHUD_Crosshair_ZiplineGun_C_SetMinMaxAngle_Params
{
	float*                                             Min;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.ClearMessage
struct UHUD_Crosshair_ZiplineGun_C_ClearMessage_Params
{
};

// Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.DistanceMessage
struct UHUD_Crosshair_ZiplineGun_C_DistanceMessage_Params
{
	float*                                             Dist;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InRange;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.FailMessage
struct UHUD_Crosshair_ZiplineGun_C_FailMessage_Params
{
	struct FText*                                      Msg;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.SetText
struct UHUD_Crosshair_ZiplineGun_C_SetText_Params
{
	struct FText*                                      Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.PreConstruct
struct UHUD_Crosshair_ZiplineGun_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.ExecuteUbergraph_HUD_Crosshair_ZiplineGun
struct UHUD_Crosshair_ZiplineGun_C_ExecuteUbergraph_HUD_Crosshair_ZiplineGun_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
