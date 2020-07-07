// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_BurstPistol_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_BurstPistol.ABP_BurstPistol_C.ExecuteUbergraph_ABP_BurstPistol
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_BurstPistol_C::ExecuteUbergraph_ABP_BurstPistol(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_BurstPistol.ABP_BurstPistol_C.ExecuteUbergraph_ABP_BurstPistol");

	UABP_BurstPistol_C_ExecuteUbergraph_ABP_BurstPistol_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
