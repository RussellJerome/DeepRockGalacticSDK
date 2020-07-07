// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_PerkListItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cheat_PerkListItem.Cheat_PerkListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCheat_PerkListItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_PerkListItem.Cheat_PerkListItem_C.Construct");

	UCheat_PerkListItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_PerkListItem.Cheat_PerkListItem_C.BndEvt__CheckBox_49_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_PerkListItem_C::BndEvt__CheckBox_49_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_PerkListItem.Cheat_PerkListItem_C.BndEvt__CheckBox_49_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");

	UCheat_PerkListItem_C_BndEvt__CheckBox_49_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_PerkListItem.Cheat_PerkListItem_C.Increase font size
// (BlueprintCallable, BlueprintEvent)

void UCheat_PerkListItem_C::Increase_font_size()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_PerkListItem.Cheat_PerkListItem_C.Increase font size");

	UCheat_PerkListItem_C_Increase_font_size_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_PerkListItem.Cheat_PerkListItem_C.ExecuteUbergraph_Cheat_PerkListItem
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_PerkListItem_C::ExecuteUbergraph_Cheat_PerkListItem(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_PerkListItem.Cheat_PerkListItem_C.ExecuteUbergraph_Cheat_PerkListItem");

	UCheat_PerkListItem_C_ExecuteUbergraph_Cheat_PerkListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_PerkListItem.Cheat_PerkListItem_C.OnCheckStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Is_Checked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItemUpgrade**           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemCategory*                 Item_Category                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_PerkListItem_C::OnCheckStateChanged__DelegateSignature(bool* Is_Checked, class UItemUpgrade** Item, EItemCategory* Item_Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_PerkListItem.Cheat_PerkListItem_C.OnCheckStateChanged__DelegateSignature");

	UCheat_PerkListItem_C_OnCheckStateChanged__DelegateSignature_Params params;
	params.Is_Checked = Is_Checked;
	params.Item = Item;
	params.Item_Category = Item_Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
