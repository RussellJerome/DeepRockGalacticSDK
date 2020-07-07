#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_LaserPointer_Marker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.UpdateMaterial
struct ABP_LaserPointer_Marker_C_UpdateMaterial_Params
{
};

// Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.ReceiveBeginPlay
struct ABP_LaserPointer_Marker_C_ReceiveBeginPlay_Params
{
};

// Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.OnDestroyed_Target
struct ABP_LaserPointer_Marker_C_OnDestroyed_Target_Params
{
	class AActor**                                     DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.OnDestroyed_Self
struct ABP_LaserPointer_Marker_C_OnDestroyed_Self_Params
{
	class AActor**                                     DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.OnDeath_Event
struct ABP_LaserPointer_Marker_C_OnDeath_Event_Params
{
	class UHealthComponentBase**                       HealthComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.ExecuteUbergraph_BP_LaserPointer_Marker
struct ABP_LaserPointer_Marker_C_ExecuteUbergraph_BP_LaserPointer_Marker_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
