// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_ClassLevelRequirement_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_ClassLevelRequirement.ITM_ClassLevelRequirement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_ClassLevelRequirement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ClassLevelRequirement.ITM_ClassLevelRequirement_C.Construct");

	UITM_ClassLevelRequirement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ClassLevelRequirement.ITM_ClassLevelRequirement_C.ExecuteUbergraph_ITM_ClassLevelRequirement
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ClassLevelRequirement_C::ExecuteUbergraph_ITM_ClassLevelRequirement(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ClassLevelRequirement.ITM_ClassLevelRequirement_C.ExecuteUbergraph_ITM_ClassLevelRequirement");

	UITM_ClassLevelRequirement_C_ExecuteUbergraph_ITM_ClassLevelRequirement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
