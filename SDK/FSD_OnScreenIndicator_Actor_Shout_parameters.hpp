#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OnScreenIndicator_Actor_Shout_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.SetShoutLocation
struct UOnScreenIndicator_Actor_Shout_C_SetShoutLocation_Params
{
	class UUserWidget**                                Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D*                                  Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              OwnShout;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.UpdateIcon
struct UOnScreenIndicator_Actor_Shout_C_UpdateIcon_Params
{
};

// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.IsOwnShout
struct UOnScreenIndicator_Actor_Shout_C_IsOwnShout_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.Shout
struct UOnScreenIndicator_Actor_Shout_C_Shout_Params
{
};

// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.CalculateScreenPos
struct UOnScreenIndicator_Actor_Shout_C_CalculateScreenPos_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.InViewport
struct UOnScreenIndicator_Actor_Shout_C_InViewport_Params
{
	struct FVector2D*                                  Pos;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.IsSenderBehind
struct UOnScreenIndicator_Actor_Shout_C_IsSenderBehind_Params
{
	struct FVector                                     ToSender;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.Construct
struct UOnScreenIndicator_Actor_Shout_C_Construct_Params
{
};

// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.Update Widget
struct UOnScreenIndicator_Actor_Shout_C_Update_Widget_Params
{
};

// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.Tick
struct UOnScreenIndicator_Actor_Shout_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.OnShout
struct UOnScreenIndicator_Actor_Shout_C_OnShout_Params
{
};

// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.PreConstruct
struct UOnScreenIndicator_Actor_Shout_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.ExecuteUbergraph_OnScreenIndicator_Actor_Shout
struct UOnScreenIndicator_Actor_Shout_C_ExecuteUbergraph_OnScreenIndicator_Actor_Shout_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
