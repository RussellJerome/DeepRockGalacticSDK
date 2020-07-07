// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_PerkIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_PerkIcon.UI_PerkIcon_C.SetPerkLevelVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          inVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PerkIcon_C::SetPerkLevelVisibility(bool* inVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PerkIcon.UI_PerkIcon_C.SetPerkLevelVisibility");

	UUI_PerkIcon_C_SetPerkLevelVisibility_Params params;
	params.inVisible = inVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PerkIcon.UI_PerkIcon_C.ShowPerkAs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPerkAsset**             InPerk                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           InIconColor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InRank                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PerkIcon_C::ShowPerkAs(class UPerkAsset** InPerk, struct FLinearColor* InIconColor, int* InRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PerkIcon.UI_PerkIcon_C.ShowPerkAs");

	UUI_PerkIcon_C_ShowPerkAs_Params params;
	params.InPerk = InPerk;
	params.InIconColor = InIconColor;
	params.InRank = InRank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PerkIcon.UI_PerkIcon_C.ShowPerkByRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPerkAsset**             InPerk                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InRank                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PerkIcon_C::ShowPerkByRank(class UPerkAsset** InPerk, int* InRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PerkIcon.UI_PerkIcon_C.ShowPerkByRank");

	UUI_PerkIcon_C_ShowPerkByRank_Params params;
	params.InPerk = InPerk;
	params.InRank = InRank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PerkIcon.UI_PerkIcon_C.ShowAs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             InIconTexture                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           InIconColor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           InRank                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PerkIcon_C::ShowAs(class UTexture2D** InIconTexture, struct FLinearColor* InIconColor, int* InRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PerkIcon.UI_PerkIcon_C.ShowAs");

	UUI_PerkIcon_C_ShowAs_Params params;
	params.InIconTexture = InIconTexture;
	params.InIconColor = InIconColor;
	params.InRank = InRank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PerkIcon.UI_PerkIcon_C.SetDimensions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InDiminsions                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PerkIcon_C::SetDimensions(float* InDiminsions)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PerkIcon.UI_PerkIcon_C.SetDimensions");

	UUI_PerkIcon_C_SetDimensions_Params params;
	params.InDiminsions = InDiminsions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PerkIcon.UI_PerkIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PerkIcon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PerkIcon.UI_PerkIcon_C.PreConstruct");

	UUI_PerkIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PerkIcon.UI_PerkIcon_C.Set Perk Asset Last Claimed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPerkAsset**             PerkAsset                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PerkIcon_C::Set_Perk_Asset_Last_Claimed(class UPerkAsset** PerkAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PerkIcon.UI_PerkIcon_C.Set Perk Asset Last Claimed");

	UUI_PerkIcon_C_Set_Perk_Asset_Last_Claimed_Params params;
	params.PerkAsset = PerkAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PerkIcon.UI_PerkIcon_C.ExecuteUbergraph_UI_PerkIcon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PerkIcon_C::ExecuteUbergraph_UI_PerkIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PerkIcon.UI_PerkIcon_C.ExecuteUbergraph_UI_PerkIcon");

	UUI_PerkIcon_C_ExecuteUbergraph_UI_PerkIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
