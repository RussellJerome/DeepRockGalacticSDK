#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_OnScreenIndicator_UsableItem_WithDescription_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.GetUsable
struct UOnScreenIndicator_UsableItem_WithDescription_C_GetUsable_Params
{
	class UUsableComponentBase*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.SetTitle
struct UOnScreenIndicator_UsableItem_WithDescription_C_SetTitle_Params
{
	struct FText*                                      InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.SetAction
struct UOnScreenIndicator_UsableItem_WithDescription_C_SetAction_Params
{
	struct FText*                                      NewText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText*                                      OverrideControllerText;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.PreConstruct
struct UOnScreenIndicator_UsableItem_WithDescription_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.Construct
struct UOnScreenIndicator_UsableItem_WithDescription_C_Construct_Params
{
};

// Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.BeginHover
struct UOnScreenIndicator_UsableItem_WithDescription_C_BeginHover_Params
{
	class UUsableComponentBase**                       Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.OnDepositingBegin
struct UOnScreenIndicator_UsableItem_WithDescription_C_OnDepositingBegin_Params
{
	class UResourceBank**                              ResourceBank;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.EndHover
struct UOnScreenIndicator_UsableItem_WithDescription_C_EndHover_Params
{
};

// Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.On Initialize
struct UOnScreenIndicator_UsableItem_WithDescription_C_On_Initialize_Params
{
};

// Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.Tick
struct UOnScreenIndicator_UsableItem_WithDescription_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnScreenIndicator_UsableItem_WithDescription.OnScreenIndicator_UsableItem_WithDescription_C.ExecuteUbergraph_OnScreenIndicator_UsableItem_WithDescription
struct UOnScreenIndicator_UsableItem_WithDescription_C_ExecuteUbergraph_OnScreenIndicator_UsableItem_WithDescription_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
