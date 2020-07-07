// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_SentryItem_PlaceMarker_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.SetAngleRestriction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         AngleRestriction               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SentryItem_PlaceMarker_C::SetAngleRestriction(float* AngleRestriction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.SetAngleRestriction");

	ABP_SentryItem_PlaceMarker_C_SetAngleRestriction_Params params;
	params.AngleRestriction = AngleRestriction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.SetMaterials
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent**         Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMaterialInterface**     ParentMaterial                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* DynamicMaterial                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SentryItem_PlaceMarker_C::SetMaterials(class UMeshComponent** Mesh, class UMaterialInterface** ParentMaterial, class UMaterialInstanceDynamic** DynamicMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.SetMaterials");

	ABP_SentryItem_PlaceMarker_C_SetMaterials_Params params;
	params.Mesh = Mesh;
	params.ParentMaterial = ParentMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DynamicMaterial != nullptr)
		*DynamicMaterial = params.DynamicMaterial;
}


// Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SentryItem_PlaceMarker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.UserConstructionScript");

	ABP_SentryItem_PlaceMarker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SentryItem_PlaceMarker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.ReceiveBeginPlay");

	ABP_SentryItem_PlaceMarker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.OnMarkerValidChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          Valid                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SentryItem_PlaceMarker_C::OnMarkerValidChanged(bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.OnMarkerValidChanged");

	ABP_SentryItem_PlaceMarker_C_OnMarkerValidChanged_Params params;
	params.Valid = Valid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.ExecuteUbergraph_BP_SentryItem_PlaceMarker
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SentryItem_PlaceMarker_C::ExecuteUbergraph_BP_SentryItem_PlaceMarker(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryItem_PlaceMarker.BP_SentryItem_PlaceMarker_C.ExecuteUbergraph_BP_SentryItem_PlaceMarker");

	ABP_SentryItem_PlaceMarker_C_ExecuteUbergraph_BP_SentryItem_PlaceMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
