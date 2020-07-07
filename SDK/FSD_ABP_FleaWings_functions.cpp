// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_FleaWings_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_FleaWings.ABP_FleaWings_C.SetFlying
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_FleaWings_C::SetFlying(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_FleaWings.ABP_FleaWings_C.SetFlying");

	UABP_FleaWings_C_SetFlying_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_FleaWings.ABP_FleaWings_C.ExecuteUbergraph_ABP_FleaWings
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_FleaWings_C::ExecuteUbergraph_ABP_FleaWings(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_FleaWings.ABP_FleaWings_C.ExecuteUbergraph_ABP_FleaWings");

	UABP_FleaWings_C_ExecuteUbergraph_ABP_FleaWings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
