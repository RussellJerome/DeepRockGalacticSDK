// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Drop_CamShake_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Drop_CamShake.BP_Drop_CamShake_C.SetStandingDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsStandingDown                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Drop_CamShake_C::SetStandingDown(bool* IsStandingDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Drop_CamShake.BP_Drop_CamShake_C.SetStandingDown");

	ABP_Drop_CamShake_C_SetStandingDown_Params params;
	params.IsStandingDown = IsStandingDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Drop_CamShake.BP_Drop_CamShake_C.TriggerShakeSequence
// (BlueprintCallable, BlueprintEvent)

void ABP_Drop_CamShake_C::TriggerShakeSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Drop_CamShake.BP_Drop_CamShake_C.TriggerShakeSequence");

	ABP_Drop_CamShake_C_TriggerShakeSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Drop_CamShake.BP_Drop_CamShake_C.ExecuteUbergraph_BP_Drop_CamShake
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Drop_CamShake_C::ExecuteUbergraph_BP_Drop_CamShake(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Drop_CamShake.BP_Drop_CamShake_C.ExecuteUbergraph_BP_Drop_CamShake");

	ABP_Drop_CamShake_C_ExecuteUbergraph_BP_Drop_CamShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
