// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_MileStone_Tier_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_MileStone_Tier.UI_Milestone_Tier_C.InitTierImage
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage**                 Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_Milestone_Tier_C::InitTierImage(class UImage** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MileStone_Tier.UI_Milestone_Tier_C.InitTierImage");

	UUI_Milestone_Tier_C_InitTierImage_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MileStone_Tier.UI_Milestone_Tier_C.Set Tier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Milestone_Tier_C::Set_Tier(int* Tier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MileStone_Tier.UI_Milestone_Tier_C.Set Tier");

	UUI_Milestone_Tier_C_Set_Tier_Params params;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MileStone_Tier.UI_Milestone_Tier_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Milestone_Tier_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MileStone_Tier.UI_Milestone_Tier_C.PreConstruct");

	UUI_Milestone_Tier_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MileStone_Tier.UI_Milestone_Tier_C.ExecuteUbergraph_UI_Milestone_Tier
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Milestone_Tier_C::ExecuteUbergraph_UI_Milestone_Tier(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MileStone_Tier.UI_Milestone_Tier_C.ExecuteUbergraph_UI_Milestone_Tier");

	UUI_Milestone_Tier_C_ExecuteUbergraph_UI_Milestone_Tier_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
