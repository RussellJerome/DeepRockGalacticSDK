// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TSK_ChangeDestIfFarAway_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TSK_ChangeDestIfFarAway.TSK_ChangeDestIfFarAway_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTSK_ChangeDestIfFarAway_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_ChangeDestIfFarAway.TSK_ChangeDestIfFarAway_C.ReceiveExecuteAI");

	UTSK_ChangeDestIfFarAway_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TSK_ChangeDestIfFarAway.TSK_ChangeDestIfFarAway_C.ExecuteUbergraph_TSK_ChangeDestIfFarAway
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTSK_ChangeDestIfFarAway_C::ExecuteUbergraph_TSK_ChangeDestIfFarAway(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_ChangeDestIfFarAway.TSK_ChangeDestIfFarAway_C.ExecuteUbergraph_TSK_ChangeDestIfFarAway");

	UTSK_ChangeDestIfFarAway_C_ExecuteUbergraph_TSK_ChangeDestIfFarAway_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
