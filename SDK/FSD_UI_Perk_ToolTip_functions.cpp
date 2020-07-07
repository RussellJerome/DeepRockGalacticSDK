// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Perk_ToolTip_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perk_ToolTip_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.PreConstruct");

	UUI_Perk_ToolTip_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.OnPerkClaimed_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPerkAsset**             Perk                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClaimedTier                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perk_ToolTip_C::OnPerkClaimed_Event(class UPerkAsset** Perk, int* ClaimedTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.OnPerkClaimed_Event");

	UUI_Perk_ToolTip_C_OnPerkClaimed_Event_Params params;
	params.Perk = Perk;
	params.ClaimedTier = ClaimedTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.SetPerkAsset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPerkAsset**             PerkAsset                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShowRank                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perk_ToolTip_C::SetPerkAsset(class UPerkAsset** PerkAsset, int* Rank, bool* ShowRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.SetPerkAsset");

	UUI_Perk_ToolTip_C_SetPerkAsset_Params params;
	params.PerkAsset = PerkAsset;
	params.Rank = Rank;
	params.ShowRank = ShowRank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.FancyDelayedIntro
// (BlueprintCallable, BlueprintEvent)

void UUI_Perk_ToolTip_C::FancyDelayedIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.FancyDelayedIntro");

	UUI_Perk_ToolTip_C_FancyDelayedIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.FadeInIntro
// (BlueprintCallable, BlueprintEvent)

void UUI_Perk_ToolTip_C::FadeInIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.FadeInIntro");

	UUI_Perk_ToolTip_C_FadeInIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.Show Rank
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          InShowRank                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perk_ToolTip_C::Show_Rank(bool* InShowRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.Show Rank");

	UUI_Perk_ToolTip_C_Show_Rank_Params params;
	params.InShowRank = InShowRank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.StopAnimations
// (BlueprintCallable, BlueprintEvent)

void UUI_Perk_ToolTip_C::StopAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.StopAnimations");

	UUI_Perk_ToolTip_C_StopAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.ExecuteUbergraph_UI_Perk_ToolTip
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perk_ToolTip_C::ExecuteUbergraph_UI_Perk_ToolTip(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_ToolTip.UI_Perk_ToolTip_C.ExecuteUbergraph_UI_Perk_ToolTip");

	UUI_Perk_ToolTip_C_ExecuteUbergraph_UI_Perk_ToolTip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
