// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_CampaignItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_CampaignItem.ITM_CampaignItem_C.Ping
// (Public, BlueprintCallable, BlueprintEvent)

void UITM_CampaignItem_C::Ping()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignItem.ITM_CampaignItem_C.Ping");

	UITM_CampaignItem_C_Ping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CampaignItem.ITM_CampaignItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UITM_CampaignItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignItem.ITM_CampaignItem_C.Construct");

	UITM_CampaignItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CampaignItem.ITM_CampaignItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CampaignItem_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignItem.ITM_CampaignItem_C.PreConstruct");

	UITM_CampaignItem_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CampaignItem.ITM_CampaignItem_C.OnPingStarted
// (BlueprintCallable, BlueprintEvent)

void UITM_CampaignItem_C::OnPingStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignItem.ITM_CampaignItem_C.OnPingStarted");

	UITM_CampaignItem_C_OnPingStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CampaignItem.ITM_CampaignItem_C.OnPingFinished
// (BlueprintCallable, BlueprintEvent)

void UITM_CampaignItem_C::OnPingFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignItem.ITM_CampaignItem_C.OnPingFinished");

	UITM_CampaignItem_C_OnPingFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_CampaignItem.ITM_CampaignItem_C.ExecuteUbergraph_ITM_CampaignItem
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_CampaignItem_C::ExecuteUbergraph_ITM_CampaignItem(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignItem.ITM_CampaignItem_C.ExecuteUbergraph_ITM_CampaignItem");

	UITM_CampaignItem_C_ExecuteUbergraph_ITM_CampaignItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
