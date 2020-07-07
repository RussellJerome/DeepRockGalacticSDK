// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_PerkBackground_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_PerkBackground.UI_PerkBackground_C.FromPerk
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPerkAsset**             InPerk                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPerkTierState*                InState                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PerkBackground_C::FromPerk(class UPerkAsset** InPerk, EPerkTierState* InState)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PerkBackground.UI_PerkBackground_C.FromPerk");

	UUI_PerkBackground_C_FromPerk_Params params;
	params.InPerk = InPerk;
	params.InState = InState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PerkBackground.UI_PerkBackground_C.SetPerkType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPerkUsageType*                InType                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPerkTierState*                InState                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PerkBackground_C::SetPerkType(EPerkUsageType* InType, EPerkTierState* InState)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PerkBackground.UI_PerkBackground_C.SetPerkType");

	UUI_PerkBackground_C_SetPerkType_Params params;
	params.InType = InType;
	params.InState = InState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PerkBackground.UI_PerkBackground_C.SetColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           InFillColor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           InBorderColor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PerkBackground_C::SetColors(struct FLinearColor* InFillColor, struct FLinearColor* InBorderColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PerkBackground.UI_PerkBackground_C.SetColors");

	UUI_PerkBackground_C_SetColors_Params params;
	params.InFillColor = InFillColor;
	params.InBorderColor = InBorderColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PerkBackground.UI_PerkBackground_C.SetDimensions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InDimensions                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PerkBackground_C::SetDimensions(float* InDimensions)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PerkBackground.UI_PerkBackground_C.SetDimensions");

	UUI_PerkBackground_C_SetDimensions_Params params;
	params.InDimensions = InDimensions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PerkBackground.UI_PerkBackground_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PerkBackground_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PerkBackground.UI_PerkBackground_C.PreConstruct");

	UUI_PerkBackground_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PerkBackground.UI_PerkBackground_C.ExecuteUbergraph_UI_PerkBackground
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_PerkBackground_C::ExecuteUbergraph_UI_PerkBackground(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PerkBackground.UI_PerkBackground_C.ExecuteUbergraph_UI_PerkBackground");

	UUI_PerkBackground_C_ExecuteUbergraph_UI_PerkBackground_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
