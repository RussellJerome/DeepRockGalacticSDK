// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_LaserPointerWaypoint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.Scanner Object Timeline__FinishedFunc
// (BlueprintEvent)

void ABP_LaserPointerWaypoint_C::Scanner_Object_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.Scanner Object Timeline__FinishedFunc");

	ABP_LaserPointerWaypoint_C_Scanner_Object_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.Scanner Object Timeline__UpdateFunc
// (BlueprintEvent)

void ABP_LaserPointerWaypoint_C::Scanner_Object_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.Scanner Object Timeline__UpdateFunc");

	ABP_LaserPointerWaypoint_C_Scanner_Object_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.OnShow
// (Event, Protected, BlueprintEvent)

void ABP_LaserPointerWaypoint_C::OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.OnShow");

	ABP_LaserPointerWaypoint_C_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.OnHide
// (Event, Protected, BlueprintEvent)

void ABP_LaserPointerWaypoint_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.OnHide");

	ABP_LaserPointerWaypoint_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LaserPointerWaypoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.ReceiveBeginPlay");

	ABP_LaserPointerWaypoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.ExecuteUbergraph_BP_LaserPointerWaypoint
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LaserPointerWaypoint_C::ExecuteUbergraph_BP_LaserPointerWaypoint(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.ExecuteUbergraph_BP_LaserPointerWaypoint");

	ABP_LaserPointerWaypoint_C_ExecuteUbergraph_BP_LaserPointerWaypoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
