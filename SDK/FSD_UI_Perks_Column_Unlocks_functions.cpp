// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_Perks_Column_Unlocks_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.IsUnlocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Unlocked                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_Column_Unlocks_C::IsUnlocked(bool* Unlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.IsUnlocked");

	UUI_Perks_Column_Unlocks_C_IsUnlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Unlocked != nullptr)
		*Unlocked = params.Unlocked;
}


// Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_Column_Unlocks_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.PreConstruct");

	UUI_Perks_Column_Unlocks_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.Set Arrow Count
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ArrowCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           UnlockedCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_Column_Unlocks_C::Set_Arrow_Count(int* ArrowCount, int* UnlockedCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.Set Arrow Count");

	UUI_Perks_Column_Unlocks_C_Set_Arrow_Count_Params params;
	params.ArrowCount = ArrowCount;
	params.UnlockedCount = UnlockedCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.Set Unlocked Count
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           UnlockedCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_Column_Unlocks_C::Set_Unlocked_Count(int* UnlockedCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.Set Unlocked Count");

	UUI_Perks_Column_Unlocks_C_Set_Unlocked_Count_Params params;
	params.UnlockedCount = UnlockedCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.ExecuteUbergraph_UI_Perks_Column_Unlocks
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Perks_Column_Unlocks_C::ExecuteUbergraph_UI_Perks_Column_Unlocks(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perks_Column_Unlocks.UI_Perks_Column_Unlocks_C.ExecuteUbergraph_UI_Perks_Column_Unlocks");

	UUI_Perks_Column_Unlocks_C_ExecuteUbergraph_UI_Perks_Column_Unlocks_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
