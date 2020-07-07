// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TSK_FindRandomPoint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TSK_FindRandomPoint.TSK_FindRandomPoint_C.snap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          SnapToCeiling                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDeepPathfinderMovement** Pathfinder                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UTSK_FindRandomPoint_C::snap(bool* SnapToCeiling, class UDeepPathfinderMovement** Pathfinder, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_FindRandomPoint.TSK_FindRandomPoint_C.snap");

	UTSK_FindRandomPoint_C_snap_Params params;
	params.SnapToCeiling = SnapToCeiling;
	params.Pathfinder = Pathfinder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function TSK_FindRandomPoint.TSK_FindRandomPoint_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTSK_FindRandomPoint_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_FindRandomPoint.TSK_FindRandomPoint_C.ReceiveExecuteAI");

	UTSK_FindRandomPoint_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TSK_FindRandomPoint.TSK_FindRandomPoint_C.ExecuteUbergraph_TSK_FindRandomPoint
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTSK_FindRandomPoint_C::ExecuteUbergraph_TSK_FindRandomPoint(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_FindRandomPoint.TSK_FindRandomPoint_C.ExecuteUbergraph_TSK_FindRandomPoint");

	UTSK_FindRandomPoint_C_ExecuteUbergraph_TSK_FindRandomPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
