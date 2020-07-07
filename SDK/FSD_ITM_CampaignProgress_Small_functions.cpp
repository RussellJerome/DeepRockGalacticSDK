// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CampaignProgress_Small_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_CampaignProgress_Small.ITM_CampaignProgress_Small_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CampaignProgress_Small_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignProgress_Small.ITM_CampaignProgress_Small_C.PreConstruct");

	UITM_CampaignProgress_Small_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CampaignProgress_Small.ITM_CampaignProgress_Small_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_CampaignProgress_Small_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignProgress_Small.ITM_CampaignProgress_Small_C.Construct");

	UITM_CampaignProgress_Small_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CampaignProgress_Small.ITM_CampaignProgress_Small_C.Update_Campaign
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCampaign**              Campaign                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CampaignProgress_Small_C::Update_Campaign(class UCampaign** Campaign)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignProgress_Small.ITM_CampaignProgress_Small_C.Update_Campaign");

	UITM_CampaignProgress_Small_C_Update_Campaign_Params params;
	params.Campaign = Campaign;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CampaignProgress_Small.ITM_CampaignProgress_Small_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void UITM_CampaignProgress_Small_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignProgress_Small.ITM_CampaignProgress_Small_C.Refresh");

	UITM_CampaignProgress_Small_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CampaignProgress_Small.ITM_CampaignProgress_Small_C.ExecuteUbergraph_ITM_CampaignProgress_Small
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CampaignProgress_Small_C::ExecuteUbergraph_ITM_CampaignProgress_Small(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignProgress_Small.ITM_CampaignProgress_Small_C.ExecuteUbergraph_ITM_CampaignProgress_Small");

	UITM_CampaignProgress_Small_C_ExecuteUbergraph_ITM_CampaignProgress_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
