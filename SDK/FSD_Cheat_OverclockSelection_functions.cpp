// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_OverclockSelection_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cheat_OverclockSelection.Cheat_OverclockSelection_C.Initiate Widget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemCategory*                 ItemCategory                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_OverclockSelection_C::Initiate_Widget(EItemCategory* ItemCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_OverclockSelection.Cheat_OverclockSelection_C.Initiate Widget");

	UCheat_OverclockSelection_C_Initiate_Widget_Params params;
	params.ItemCategory = ItemCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_OverclockSelection.Cheat_OverclockSelection_C.On State change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Is_Checked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UItemUpgrade**           Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemCategory*                 Item_Category                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_OverclockSelection_C::On_State_change(bool* Is_Checked, class UItemUpgrade** Item, EItemCategory* Item_Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_OverclockSelection.Cheat_OverclockSelection_C.On State change");

	UCheat_OverclockSelection_C_On_State_change_Params params;
	params.Is_Checked = Is_Checked;
	params.Item = Item;
	params.Item_Category = Item_Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_OverclockSelection.Cheat_OverclockSelection_C.ExecuteUbergraph_Cheat_OverclockSelection
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_OverclockSelection_C::ExecuteUbergraph_Cheat_OverclockSelection(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_OverclockSelection.Cheat_OverclockSelection_C.ExecuteUbergraph_Cheat_OverclockSelection");

	UCheat_OverclockSelection_C_ExecuteUbergraph_Cheat_OverclockSelection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
