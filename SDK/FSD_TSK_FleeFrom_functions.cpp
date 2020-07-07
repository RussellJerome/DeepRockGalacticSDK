// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TSK_FleeFrom_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TSK_FleeFrom.TSK_FleeFrom_C.SetFleeFalse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController**            Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTSK_FleeFrom_C::SetFleeFalse(class AController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_FleeFrom.TSK_FleeFrom_C.SetFleeFalse");

	UTSK_FleeFrom_C_SetFleeFalse_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TSK_FleeFrom.TSK_FleeFrom_C.OutsideDanger
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTSK_FleeFrom_C::OutsideDanger(class AActor** Pawn, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_FleeFrom.TSK_FleeFrom_C.OutsideDanger");

	UTSK_FleeFrom_C_OutsideDanger_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function TSK_FleeFrom.TSK_FleeFrom_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTSK_FleeFrom_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_FleeFrom.TSK_FleeFrom_C.ReceiveExecuteAI");

	UTSK_FleeFrom_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TSK_FleeFrom.TSK_FleeFrom_C.PathDone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTSK_FleeFrom_C::PathDone(bool* success)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_FleeFrom.TSK_FleeFrom_C.PathDone");

	UTSK_FleeFrom_C_PathDone_Params params;
	params.success = success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TSK_FleeFrom.TSK_FleeFrom_C.RefreshDest
// (BlueprintCallable, BlueprintEvent)

void UTSK_FleeFrom_C::RefreshDest()
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_FleeFrom.TSK_FleeFrom_C.RefreshDest");

	UTSK_FleeFrom_C_RefreshDest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TSK_FleeFrom.TSK_FleeFrom_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTSK_FleeFrom_C::ReceiveAbortAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_FleeFrom.TSK_FleeFrom_C.ReceiveAbortAI");

	UTSK_FleeFrom_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TSK_FleeFrom.TSK_FleeFrom_C.ExecuteUbergraph_TSK_FleeFrom
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTSK_FleeFrom_C::ExecuteUbergraph_TSK_FleeFrom(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_FleeFrom.TSK_FleeFrom_C.ExecuteUbergraph_TSK_FleeFrom");

	UTSK_FleeFrom_C_ExecuteUbergraph_TSK_FleeFrom_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
