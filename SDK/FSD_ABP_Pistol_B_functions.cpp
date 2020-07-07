// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_Pistol_B_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Pistol_B.ABP_Pistol_B_C.ExecuteUbergraph_ABP_Pistol_B
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Pistol_B_C::ExecuteUbergraph_ABP_Pistol_B(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Pistol_B.ABP_Pistol_B_C.ExecuteUbergraph_ABP_Pistol_B");

	UABP_Pistol_B_C_ExecuteUbergraph_ABP_Pistol_B_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
