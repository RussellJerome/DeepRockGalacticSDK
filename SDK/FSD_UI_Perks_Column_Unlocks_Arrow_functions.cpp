// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Perks_Column_Unlocks_Arrow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Perks_Column_Unlocks_Arrow.UI_Perks_Column_Unlocks_Arrow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_Column_Unlocks_Arrow_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Unlocks_Arrow.UI_Perks_Column_Unlocks_Arrow_C.PreConstruct");

	UUI_Perks_Column_Unlocks_Arrow_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Column_Unlocks_Arrow.UI_Perks_Column_Unlocks_Arrow_C.SetIsUnlocked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsUnlocked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_Column_Unlocks_Arrow_C::SetIsUnlocked(bool* IsUnlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Unlocks_Arrow.UI_Perks_Column_Unlocks_Arrow_C.SetIsUnlocked");

	UUI_Perks_Column_Unlocks_Arrow_C_SetIsUnlocked_Params params;
	params.IsUnlocked = IsUnlocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Column_Unlocks_Arrow.UI_Perks_Column_Unlocks_Arrow_C.ExecuteUbergraph_UI_Perks_Column_Unlocks_Arrow
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_Column_Unlocks_Arrow_C::ExecuteUbergraph_UI_Perks_Column_Unlocks_Arrow(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Unlocks_Arrow.UI_Perks_Column_Unlocks_Arrow_C.ExecuteUbergraph_UI_Perks_Column_Unlocks_Arrow");

	UUI_Perks_Column_Unlocks_Arrow_C_ExecuteUbergraph_UI_Perks_Column_Unlocks_Arrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
