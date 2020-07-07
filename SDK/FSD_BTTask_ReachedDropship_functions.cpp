// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BTTask_ReachedDropship_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTTask_ReachedDropship.BTTask_ReachedDropship_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_ReachedDropship_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_ReachedDropship.BTTask_ReachedDropship_C.ReceiveExecuteAI");

	UBTTask_ReachedDropship_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_ReachedDropship.BTTask_ReachedDropship_C.ExecuteUbergraph_BTTask_ReachedDropship
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_ReachedDropship_C::ExecuteUbergraph_BTTask_ReachedDropship(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_ReachedDropship.BTTask_ReachedDropship_C.ExecuteUbergraph_BTTask_ReachedDropship");

	UBTTask_ReachedDropship_C_ExecuteUbergraph_BTTask_ReachedDropship_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
