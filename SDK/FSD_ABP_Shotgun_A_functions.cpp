// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_Shotgun_A_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Shotgun_A.ABP_Shotgun_A_C.ExecuteUbergraph_ABP_Shotgun_A
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Shotgun_A_C::ExecuteUbergraph_ABP_Shotgun_A(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Shotgun_A.ABP_Shotgun_A_C.ExecuteUbergraph_ABP_Shotgun_A");

	UABP_Shotgun_A_C_ExecuteUbergraph_ABP_Shotgun_A_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
