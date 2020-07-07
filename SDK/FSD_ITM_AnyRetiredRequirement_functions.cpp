// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_AnyRetiredRequirement_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_AnyRetiredRequirement.ITM_AnyRetiredRequirement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_AnyRetiredRequirement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_AnyRetiredRequirement.ITM_AnyRetiredRequirement_C.Construct");

	UITM_AnyRetiredRequirement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_AnyRetiredRequirement.ITM_AnyRetiredRequirement_C.ExecuteUbergraph_ITM_AnyRetiredRequirement
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_AnyRetiredRequirement_C::ExecuteUbergraph_ITM_AnyRetiredRequirement(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_AnyRetiredRequirement.ITM_AnyRetiredRequirement_C.ExecuteUbergraph_ITM_AnyRetiredRequirement");

	UITM_AnyRetiredRequirement_C_ExecuteUbergraph_ITM_AnyRetiredRequirement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
