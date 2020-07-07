// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_LCD_CampaignProgress_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LCD_CampaignProgress.LCD_CampaignProgress_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULCD_CampaignProgress_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LCD_CampaignProgress.LCD_CampaignProgress_C.Construct");

	ULCD_CampaignProgress_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LCD_CampaignProgress.LCD_CampaignProgress_C.OnCampaignChanged_Event_1
// (BlueprintCallable, BlueprintEvent)

void ULCD_CampaignProgress_C::OnCampaignChanged_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function LCD_CampaignProgress.LCD_CampaignProgress_C.OnCampaignChanged_Event_1");

	ULCD_CampaignProgress_C_OnCampaignChanged_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LCD_CampaignProgress.LCD_CampaignProgress_C.ExecuteUbergraph_LCD_CampaignProgress
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULCD_CampaignProgress_C::ExecuteUbergraph_LCD_CampaignProgress(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LCD_CampaignProgress.LCD_CampaignProgress_C.ExecuteUbergraph_LCD_CampaignProgress");

	ULCD_CampaignProgress_C_ExecuteUbergraph_LCD_CampaignProgress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
