// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TSK_GetPointInFrontOf_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TSK_GetPointInFrontOf.TSK_GetPointInFrontOf_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTSK_GetPointInFrontOf_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_GetPointInFrontOf.TSK_GetPointInFrontOf_C.ReceiveExecuteAI");

	UTSK_GetPointInFrontOf_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TSK_GetPointInFrontOf.TSK_GetPointInFrontOf_C.ExecuteUbergraph_TSK_GetPointInFrontOf
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTSK_GetPointInFrontOf_C::ExecuteUbergraph_TSK_GetPointInFrontOf(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_GetPointInFrontOf.TSK_GetPointInFrontOf_C.ExecuteUbergraph_TSK_GetPointInFrontOf");

	UTSK_GetPointInFrontOf_C_ExecuteUbergraph_TSK_GetPointInFrontOf_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
