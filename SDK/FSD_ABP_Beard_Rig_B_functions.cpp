// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_Beard_Rig_B_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Beard_Rig_B.ABP_Beard_Rig_B_C.ExecuteUbergraph_ABP_Beard_Rig_B
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Beard_Rig_B_C::ExecuteUbergraph_ABP_Beard_Rig_B(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Beard_Rig_B.ABP_Beard_Rig_B_C.ExecuteUbergraph_ABP_Beard_Rig_B");

	UABP_Beard_Rig_B_C_ExecuteUbergraph_ABP_Beard_Rig_B_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
