// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TSK_MeleeAttack_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TSK_MeleeAttack.TSK_MeleeAttack_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTSK_MeleeAttack_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_MeleeAttack.TSK_MeleeAttack_C.ReceiveExecuteAI");

	UTSK_MeleeAttack_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TSK_MeleeAttack.TSK_MeleeAttack_C.OnMeleeAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  nameValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTSK_MeleeAttack_C::OnMeleeAttack(struct FName* nameValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_MeleeAttack.TSK_MeleeAttack_C.OnMeleeAttack");

	UTSK_MeleeAttack_C_OnMeleeAttack_Params params;
	params.nameValue = nameValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TSK_MeleeAttack.TSK_MeleeAttack_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTSK_MeleeAttack_C::ReceiveAbortAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_MeleeAttack.TSK_MeleeAttack_C.ReceiveAbortAI");

	UTSK_MeleeAttack_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TSK_MeleeAttack.TSK_MeleeAttack_C.ExecuteUbergraph_TSK_MeleeAttack
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTSK_MeleeAttack_C::ExecuteUbergraph_TSK_MeleeAttack(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TSK_MeleeAttack.TSK_MeleeAttack_C.ExecuteUbergraph_TSK_MeleeAttack");

	UTSK_MeleeAttack_C_ExecuteUbergraph_TSK_MeleeAttack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
