// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_AFE_PowerAttack_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AFE_PowerAttack.AFE_PowerAttack_C.ReceiveBeginEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UPawnAfflictionComponent** Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAFE_PowerAttack_C::ReceiveBeginEffect(class UPawnAfflictionComponent** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AFE_PowerAttack.AFE_PowerAttack_C.ReceiveBeginEffect");

	UAFE_PowerAttack_C_ReceiveBeginEffect_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AFE_PowerAttack.AFE_PowerAttack_C.ReceiveEndEffect
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UPawnAfflictionComponent** Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAFE_PowerAttack_C::ReceiveEndEffect(class UPawnAfflictionComponent** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function AFE_PowerAttack.AFE_PowerAttack_C.ReceiveEndEffect");

	UAFE_PowerAttack_C_ReceiveEndEffect_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AFE_PowerAttack.AFE_PowerAttack_C.ExecuteUbergraph_AFE_PowerAttack
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAFE_PowerAttack_C::ExecuteUbergraph_AFE_PowerAttack(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AFE_PowerAttack.AFE_PowerAttack_C.ExecuteUbergraph_AFE_PowerAttack");

	UAFE_PowerAttack_C_ExecuteUbergraph_AFE_PowerAttack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
