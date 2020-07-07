// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_AssaultRifle_B_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_AssaultRifle_B.ABP_AssaultRifle_B_C.ExecuteUbergraph_ABP_AssaultRifle_B
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_AssaultRifle_B_C::ExecuteUbergraph_ABP_AssaultRifle_B(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_AssaultRifle_B.ABP_AssaultRifle_B_C.ExecuteUbergraph_ABP_AssaultRifle_B");

	UABP_AssaultRifle_B_C_ExecuteUbergraph_ABP_AssaultRifle_B_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
