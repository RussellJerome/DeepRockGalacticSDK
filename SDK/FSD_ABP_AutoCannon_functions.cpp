// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_AutoCannon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_AutoCannon.ABP_AutoCannon_C.ExecuteUbergraph_ABP_AutoCannon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_AutoCannon_C::ExecuteUbergraph_ABP_AutoCannon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_AutoCannon.ABP_AutoCannon_C.ExecuteUbergraph_ABP_AutoCannon");

	UABP_AutoCannon_C_ExecuteUbergraph_ABP_AutoCannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
