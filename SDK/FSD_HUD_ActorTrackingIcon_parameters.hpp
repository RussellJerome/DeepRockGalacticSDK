#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_HUD_ActorTrackingIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.SetInfo
struct UHUD_ActorTrackingIcon_C_SetInfo_Params
{
	struct FText*                                      InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D**                                 Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               InTint;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnTargetDistanceChanged
struct UHUD_ActorTrackingIcon_C_OnTargetDistanceChanged_Params
{
	float*                                             distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnTargetSet
struct UHUD_ActorTrackingIcon_C_OnTargetSet_Params
{
	class AActor**                                     NewTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnPlayerNameChanged
struct UHUD_ActorTrackingIcon_C_OnPlayerNameChanged_Params
{
	class FString*                                     NewName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnInViewChanged
struct UHUD_ActorTrackingIcon_C_OnInViewChanged_Params
{
	bool*                                              inView;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.PreConstruct
struct UHUD_ActorTrackingIcon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.UpdateArrow
struct UHUD_ActorTrackingIcon_C_UpdateArrow_Params
{
	bool*                                              inView;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnShow
struct UHUD_ActorTrackingIcon_C_OnShow_Params
{
};

// Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.ExecuteUbergraph_HUD_ActorTrackingIcon
struct UHUD_ActorTrackingIcon_C_ExecuteUbergraph_HUD_ActorTrackingIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
