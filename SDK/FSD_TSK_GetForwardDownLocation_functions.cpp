// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TSK_GetForwardDownLocation_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TSK_GetForwardDownLocation.TSK_GetForwardDownLocation_C.GetEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                PawnLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                TargetLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                PawnForward                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTSK_GetForwardDownLocation_C::GetEnd(struct FVector* PawnLocation, struct FVector* TargetLocation, struct FVector* PawnForward)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_GetForwardDownLocation.TSK_GetForwardDownLocation_C.GetEnd");

	UTSK_GetForwardDownLocation_C_GetEnd_Params params;
	params.PawnLocation = PawnLocation;
	params.TargetLocation = TargetLocation;
	params.PawnForward = PawnForward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TSK_GetForwardDownLocation.TSK_GetForwardDownLocation_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTSK_GetForwardDownLocation_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_GetForwardDownLocation.TSK_GetForwardDownLocation_C.ReceiveExecuteAI");

	UTSK_GetForwardDownLocation_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TSK_GetForwardDownLocation.TSK_GetForwardDownLocation_C.ExecuteUbergraph_TSK_GetForwardDownLocation
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTSK_GetForwardDownLocation_C::ExecuteUbergraph_TSK_GetForwardDownLocation(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_GetForwardDownLocation.TSK_GetForwardDownLocation_C.ExecuteUbergraph_TSK_GetForwardDownLocation");

	UTSK_GetForwardDownLocation_C_ExecuteUbergraph_TSK_GetForwardDownLocation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
