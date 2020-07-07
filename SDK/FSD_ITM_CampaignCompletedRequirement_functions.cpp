// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CampaignCompletedRequirement_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_CampaignCompletedRequirement.ITM_CampaignCompletedRequirement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_CampaignCompletedRequirement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignCompletedRequirement.ITM_CampaignCompletedRequirement_C.Construct");

	UITM_CampaignCompletedRequirement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CampaignCompletedRequirement.ITM_CampaignCompletedRequirement_C.ExecuteUbergraph_ITM_CampaignCompletedRequirement
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CampaignCompletedRequirement_C::ExecuteUbergraph_ITM_CampaignCompletedRequirement(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignCompletedRequirement.ITM_CampaignCompletedRequirement_C.ExecuteUbergraph_ITM_CampaignCompletedRequirement");

	UITM_CampaignCompletedRequirement_C_ExecuteUbergraph_ITM_CampaignCompletedRequirement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
