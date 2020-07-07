// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_LaserPointer_Marker_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.UpdateMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LaserPointer_Marker_C::UpdateMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.UpdateMaterial");

	ABP_LaserPointer_Marker_C_UpdateMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LaserPointer_Marker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.ReceiveBeginPlay");

	ABP_LaserPointer_Marker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.OnDestroyed_Target
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LaserPointer_Marker_C::OnDestroyed_Target(class AActor** DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.OnDestroyed_Target");

	ABP_LaserPointer_Marker_C_OnDestroyed_Target_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.OnDestroyed_Self
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LaserPointer_Marker_C::OnDestroyed_Self(class AActor** DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.OnDestroyed_Self");

	ABP_LaserPointer_Marker_C_OnDestroyed_Self_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.OnDeath_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHealthComponentBase**   HealthComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_LaserPointer_Marker_C::OnDeath_Event(class UHealthComponentBase** HealthComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.OnDeath_Event");

	ABP_LaserPointer_Marker_C_OnDeath_Event_Params params;
	params.HealthComponent = HealthComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.ExecuteUbergraph_BP_LaserPointer_Marker
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LaserPointer_Marker_C::ExecuteUbergraph_BP_LaserPointer_Marker(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.ExecuteUbergraph_BP_LaserPointer_Marker");

	ABP_LaserPointer_Marker_C_ExecuteUbergraph_BP_LaserPointer_Marker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
