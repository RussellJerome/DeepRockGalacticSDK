#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SentryItem_PlaceMarker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.SetAngleRestriction
struct ABP_SentryItem_PlaceMarker_C_SetAngleRestriction_Params
{
	float*                                             AngleRestriction;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.SetMaterials
struct ABP_SentryItem_PlaceMarker_C_SetMaterials_Params
{
	class UMeshComponent**                             Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInterface**                         ParentMaterial;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.UserConstructionScript
struct ABP_SentryItem_PlaceMarker_C_UserConstructionScript_Params
{
};

// Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.ReceiveBeginPlay
struct ABP_SentryItem_PlaceMarker_C_ReceiveBeginPlay_Params
{
};

// Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.OnMarkerValidChanged
struct ABP_SentryItem_PlaceMarker_C_OnMarkerValidChanged_Params
{
	bool*                                              Valid;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.ExecuteUbergraph_BP_SentryItem_PlaceMarker
struct ABP_SentryItem_PlaceMarker_C_ExecuteUbergraph_BP_SentryItem_PlaceMarker_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
