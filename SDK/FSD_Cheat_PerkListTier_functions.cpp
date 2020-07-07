// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_PerkListTier_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cheat_PerkListTier.Cheat_PerkListTier_C.Initiate Widget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemCategory*                 input_category                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUpgradeTier*           Upgrade_struct                 (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           Tier_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 itemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_PerkListTier_C::Initiate_Widget(EItemCategory* input_category, struct FUpgradeTier* Upgrade_struct, int* Tier_Index, class UClass** itemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_PerkListTier.Cheat_PerkListTier_C.Initiate Widget");

	UCheat_PerkListTier_C_Initiate_Widget_Params params;
	params.input_category = input_category;
	params.Upgrade_struct = Upgrade_struct;
	params.Tier_Index = Tier_Index;
	params.itemClass = itemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_PerkListTier.Cheat_PerkListTier_C.On State change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Is_Checked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItemUpgrade**           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemCategory*                 Item_Category                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_PerkListTier_C::On_State_change(bool* Is_Checked, class UItemUpgrade** Item, EItemCategory* Item_Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_PerkListTier.Cheat_PerkListTier_C.On State change");

	UCheat_PerkListTier_C_On_State_change_Params params;
	params.Is_Checked = Is_Checked;
	params.Item = Item;
	params.Item_Category = Item_Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_PerkListTier.Cheat_PerkListTier_C.Initiate Bosco-tier
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUpgradeTier*           Upgrade_struct                 (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           Tier_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 Item_Class                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_PerkListTier_C::Initiate_Bosco_tier(struct FUpgradeTier* Upgrade_struct, int* Tier_Index, class UClass** Item_Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_PerkListTier.Cheat_PerkListTier_C.Initiate Bosco-tier");

	UCheat_PerkListTier_C_Initiate_Bosco_tier_Params params;
	params.Upgrade_struct = Upgrade_struct;
	params.Tier_Index = Tier_Index;
	params.Item_Class = Item_Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_PerkListTier.Cheat_PerkListTier_C.On bosco state change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Is_Checked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItemUpgrade**           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemCategory*                 Item_Category                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_PerkListTier_C::On_bosco_state_change(bool* Is_Checked, class UItemUpgrade** Item, EItemCategory* Item_Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_PerkListTier.Cheat_PerkListTier_C.On bosco state change");

	UCheat_PerkListTier_C_On_bosco_state_change_Params params;
	params.Is_Checked = Is_Checked;
	params.Item = Item;
	params.Item_Category = Item_Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_PerkListTier.Cheat_PerkListTier_C.ExecuteUbergraph_Cheat_PerkListTier
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_PerkListTier_C::ExecuteUbergraph_Cheat_PerkListTier(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_PerkListTier.Cheat_PerkListTier_C.ExecuteUbergraph_Cheat_PerkListTier");

	UCheat_PerkListTier_C_ExecuteUbergraph_Cheat_PerkListTier_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_PerkListTier.Cheat_PerkListTier_C.OnItemActivationStateChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Is_Checked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItemUpgrade**           Upgrade_item                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemCategory*                 Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_PerkListTier_C::OnItemActivationStateChange__DelegateSignature(bool* Is_Checked, class UItemUpgrade** Upgrade_item, EItemCategory* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_PerkListTier.Cheat_PerkListTier_C.OnItemActivationStateChange__DelegateSignature");

	UCheat_PerkListTier_C_OnItemActivationStateChange__DelegateSignature_Params params;
	params.Is_Checked = Is_Checked;
	params.Upgrade_item = Upgrade_item;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
