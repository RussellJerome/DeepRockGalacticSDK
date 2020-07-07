// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_EWC_Generic_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EWC_Generic.EWC_Generic_C.StartWave
// (Event, Public, BlueprintEvent)

void UEWC_Generic_C::StartWave()
{
	static auto fn = UObject::FindObject<UFunction>("Function EWC_Generic.EWC_Generic_C.StartWave");

	UEWC_Generic_C_StartWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EWC_Generic.EWC_Generic_C.StopConstantPreassure
// (BlueprintCallable, BlueprintEvent)

void UEWC_Generic_C::StopConstantPreassure()
{
	static auto fn = UObject::FindObject<UFunction>("Function EWC_Generic.EWC_Generic_C.StopConstantPreassure");

	UEWC_Generic_C_StopConstantPreassure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EWC_Generic.EWC_Generic_C.ExecuteUbergraph_EWC_Generic
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEWC_Generic_C::ExecuteUbergraph_EWC_Generic(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EWC_Generic.EWC_Generic_C.ExecuteUbergraph_EWC_Generic");

	UEWC_Generic_C_ExecuteUbergraph_EWC_Generic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
