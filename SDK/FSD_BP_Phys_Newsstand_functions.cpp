// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Phys_Newsstand_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Phys_Newsstand.BP_Phys_Newsstand_C.ExecuteUbergraph_BP_Phys_Newsstand
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Phys_Newsstand_C::ExecuteUbergraph_BP_Phys_Newsstand(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Phys_Newsstand.BP_Phys_Newsstand_C.ExecuteUbergraph_BP_Phys_Newsstand");

	ABP_Phys_Newsstand_C_ExecuteUbergraph_BP_Phys_Newsstand_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
