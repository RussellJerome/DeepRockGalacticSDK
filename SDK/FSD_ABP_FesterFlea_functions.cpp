// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_FesterFlea_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_FesterFlea.ABP_FesterFlea_C.SetFlying
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_FesterFlea_C::SetFlying(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_FesterFlea.ABP_FesterFlea_C.SetFlying");

	UABP_FesterFlea_C_SetFlying_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_FesterFlea.ABP_FesterFlea_C.ExecuteUbergraph_ABP_FesterFlea
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_FesterFlea_C::ExecuteUbergraph_ABP_FesterFlea(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_FesterFlea.ABP_FesterFlea_C.ExecuteUbergraph_ABP_FesterFlea");

	UABP_FesterFlea_C_ExecuteUbergraph_ABP_FesterFlea_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
