// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DEC_ShowOutline_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DEC_ShowOutline.DEC_ShowOutline_C.PerformConditionCheckAI
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDEC_ShowOutline_C::PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DEC_ShowOutline.DEC_ShowOutline_C.PerformConditionCheckAI");

	UDEC_ShowOutline_C_PerformConditionCheckAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DEC_ShowOutline.DEC_ShowOutline_C.ReceiveExecutionStartAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDEC_ShowOutline_C::ReceiveExecutionStartAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DEC_ShowOutline.DEC_ShowOutline_C.ReceiveExecutionStartAI");

	UDEC_ShowOutline_C_ReceiveExecutionStartAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DEC_ShowOutline.DEC_ShowOutline_C.ReceiveExecutionFinishAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBTNodeResult>*    NodeResult                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDEC_ShowOutline_C::ReceiveExecutionFinishAI(class AAIController** OwnerController, class APawn** ControlledPawn, TEnumAsByte<EBTNodeResult>* NodeResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function DEC_ShowOutline.DEC_ShowOutline_C.ReceiveExecutionFinishAI");

	UDEC_ShowOutline_C_ReceiveExecutionFinishAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.NodeResult = NodeResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DEC_ShowOutline.DEC_ShowOutline_C.ExecuteUbergraph_DEC_ShowOutline
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDEC_ShowOutline_C::ExecuteUbergraph_DEC_ShowOutline(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DEC_ShowOutline.DEC_ShowOutline_C.ExecuteUbergraph_DEC_ShowOutline");

	UDEC_ShowOutline_C_ExecuteUbergraph_DEC_ShowOutline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
