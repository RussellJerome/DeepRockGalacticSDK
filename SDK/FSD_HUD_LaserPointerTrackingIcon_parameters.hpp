#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_LaserPointerTrackingIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.UpdateVisibility
struct UHUD_LaserPointerTrackingIcon_C_UpdateVisibility_Params
{
};

// Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.UpdatePixelOffset
struct UHUD_LaserPointerTrackingIcon_C_UpdatePixelOffset_Params
{
};

// Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.OnInViewChanged
struct UHUD_LaserPointerTrackingIcon_C_OnInViewChanged_Params
{
	bool*                                              inView;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.PreConstruct
struct UHUD_LaserPointerTrackingIcon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.UpdateArrow
struct UHUD_LaserPointerTrackingIcon_C_UpdateArrow_Params
{
	bool*                                              inView;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.OnShow
struct UHUD_LaserPointerTrackingIcon_C_OnShow_Params
{
};

// Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.OnTargetDistanceChanged
struct UHUD_LaserPointerTrackingIcon_C_OnTargetDistanceChanged_Params
{
	float*                                             distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.OnTargetSet
struct UHUD_LaserPointerTrackingIcon_C_OnTargetSet_Params
{
	class AActor**                                     NewTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_LaserPointerTrackingIcon.HUD_LaserPointerTrackingIcon_C.ExecuteUbergraph_HUD_LaserPointerTrackingIcon
struct UHUD_LaserPointerTrackingIcon_C_ExecuteUbergraph_HUD_LaserPointerTrackingIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
