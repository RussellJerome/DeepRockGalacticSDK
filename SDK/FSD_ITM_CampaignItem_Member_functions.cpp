// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CampaignItem_Member_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_CampaignItem_Member.ITM_CampaignItem_Member_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_CampaignItem_Member_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignItem_Member.ITM_CampaignItem_Member_C.Construct");

	UITM_CampaignItem_Member_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CampaignItem_Member.ITM_CampaignItem_Member_C.ExecuteUbergraph_ITM_CampaignItem_Member
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CampaignItem_Member_C::ExecuteUbergraph_ITM_CampaignItem_Member(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignItem_Member.ITM_CampaignItem_Member_C.ExecuteUbergraph_ITM_CampaignItem_Member");

	UITM_CampaignItem_Member_C_ExecuteUbergraph_ITM_CampaignItem_Member_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
