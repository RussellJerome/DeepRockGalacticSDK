// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_ShieldLinkComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ShieldLinkComponent.BP_ShieldLinkComponent_C.ExecuteUbergraph_BP_ShieldLinkComponent
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ShieldLinkComponent_C::ExecuteUbergraph_BP_ShieldLinkComponent(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShieldLinkComponent.BP_ShieldLinkComponent_C.ExecuteUbergraph_BP_ShieldLinkComponent");

	UBP_ShieldLinkComponent_C_ExecuteUbergraph_BP_ShieldLinkComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
