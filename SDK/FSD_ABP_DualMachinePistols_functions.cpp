// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_DualMachinePistols_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_DualMachinePistols.ABP_DualMachinePistols_C.ExecuteUbergraph_ABP_DualMachinePistols
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_DualMachinePistols_C::ExecuteUbergraph_ABP_DualMachinePistols(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_DualMachinePistols.ABP_DualMachinePistols_C.ExecuteUbergraph_ABP_DualMachinePistols");

	UABP_DualMachinePistols_C_ExecuteUbergraph_ABP_DualMachinePistols_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
