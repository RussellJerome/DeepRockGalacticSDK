#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_CroNew_GrapplingGun_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_CroNew_GrapplingGun.HUD_CroNew_GrapplingGun_C.ClearMessage
struct UHUD_CroNew_GrapplingGun_C_ClearMessage_Params
{
};

// Function HUD_CroNew_GrapplingGun.HUD_CroNew_GrapplingGun_C.DistanceMessage
struct UHUD_CroNew_GrapplingGun_C_DistanceMessage_Params
{
	float*                                             Dist;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_CroNew_GrapplingGun.HUD_CroNew_GrapplingGun_C.FailMessage
struct UHUD_CroNew_GrapplingGun_C_FailMessage_Params
{
	struct FText                                       Msg;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function HUD_CroNew_GrapplingGun.HUD_CroNew_GrapplingGun_C.SetText
struct UHUD_CroNew_GrapplingGun_C_SetText_Params
{
	struct FText                                       Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
