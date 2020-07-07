#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SupplyPod_Marker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.SetMaterials
struct ABP_SupplyPod_Marker_C_SetMaterials_Params
{
	class UMaterial**                                  ParentMaterial;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMeshComponent**                             Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.UserConstructionScript
struct ABP_SupplyPod_Marker_C_UserConstructionScript_Params
{
};

// Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.ReceiveBeginPlay
struct ABP_SupplyPod_Marker_C_ReceiveBeginPlay_Params
{
};

// Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.OnMarkerValidChanged
struct ABP_SupplyPod_Marker_C_OnMarkerValidChanged_Params
{
	bool*                                              Valid;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.OnMarkerVisibilityChanged
struct ABP_SupplyPod_Marker_C_OnMarkerVisibilityChanged_Params
{
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.ExecuteUbergraph_BP_SupplyPod_Marker
struct ABP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
