// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_Bartender_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Bartender.ABP_Bartender_C.ExecuteUbergraph_ABP_Bartender
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Bartender_C::ExecuteUbergraph_ABP_Bartender(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Bartender.ABP_Bartender_C.ExecuteUbergraph_ABP_Bartender");

	UABP_Bartender_C_ExecuteUbergraph_ABP_Bartender_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
