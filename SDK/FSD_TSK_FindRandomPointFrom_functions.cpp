// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TSK_FindRandomPointFrom_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C.GetLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UTSK_FindRandomPointFrom_C::GetLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C.GetLocation");

	UTSK_FindRandomPointFrom_C_GetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C.snap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          SnapToCeiling                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDeepPathfinderMovement** Pathfinder                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UTSK_FindRandomPointFrom_C::snap(bool* SnapToCeiling, class UDeepPathfinderMovement** Pathfinder, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C.snap");

	UTSK_FindRandomPointFrom_C_snap_Params params;
	params.SnapToCeiling = SnapToCeiling;
	params.Pathfinder = Pathfinder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTSK_FindRandomPointFrom_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C.ReceiveExecuteAI");

	UTSK_FindRandomPointFrom_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C.ExecuteUbergraph_TSK_FindRandomPointFrom
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTSK_FindRandomPointFrom_C::ExecuteUbergraph_TSK_FindRandomPointFrom(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C.ExecuteUbergraph_TSK_FindRandomPointFrom");

	UTSK_FindRandomPointFrom_C_ExecuteUbergraph_TSK_FindRandomPointFrom_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
