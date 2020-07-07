// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SupplyPod_Marker_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.SetMaterials
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterial**              ParentMaterial                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMeshComponent**         Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMaterialInstanceDynamic* DynamicMaterial                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SupplyPod_Marker_C::SetMaterials(class UMaterial** ParentMaterial, class UMeshComponent** Mesh, class UMaterialInstanceDynamic** DynamicMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.SetMaterials");

	ABP_SupplyPod_Marker_C_SetMaterials_Params params;
	params.ParentMaterial = ParentMaterial;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DynamicMaterial != nullptr)
		*DynamicMaterial = params.DynamicMaterial;
}


// Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SupplyPod_Marker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.UserConstructionScript");

	ABP_SupplyPod_Marker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SupplyPod_Marker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.ReceiveBeginPlay");

	ABP_SupplyPod_Marker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.OnMarkerValidChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          Valid                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SupplyPod_Marker_C::OnMarkerValidChanged(bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.OnMarkerValidChanged");

	ABP_SupplyPod_Marker_C_OnMarkerValidChanged_Params params;
	params.Valid = Valid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.OnMarkerVisibilityChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SupplyPod_Marker_C::OnMarkerVisibilityChanged(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.OnMarkerVisibilityChanged");

	ABP_SupplyPod_Marker_C_OnMarkerVisibilityChanged_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.ExecuteUbergraph_BP_SupplyPod_Marker
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SupplyPod_Marker_C::ExecuteUbergraph_BP_SupplyPod_Marker(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.ExecuteUbergraph_BP_SupplyPod_Marker");

	ABP_SupplyPod_Marker_C_ExecuteUbergraph_BP_SupplyPod_Marker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
