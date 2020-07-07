// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ABP_Forge_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Forge.ABP_Forge_C.ExecuteUbergraph_ABP_Forge
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_Forge_C::ExecuteUbergraph_ABP_Forge(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Forge.ABP_Forge_C.ExecuteUbergraph_ABP_Forge");

	UABP_Forge_C_ExecuteUbergraph_ABP_Forge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
