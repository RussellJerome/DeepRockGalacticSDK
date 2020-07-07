// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_Detonator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Detonator.ABP_Detonator_C.ExecuteUbergraph_ABP_Detonator
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Detonator_C::ExecuteUbergraph_ABP_Detonator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Detonator.ABP_Detonator_C.ExecuteUbergraph_ABP_Detonator");

	UABP_Detonator_C_ExecuteUbergraph_ABP_Detonator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
