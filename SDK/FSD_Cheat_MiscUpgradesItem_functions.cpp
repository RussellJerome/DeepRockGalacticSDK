// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_MiscUpgradesItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cheat_MiscUpgradesItem.Cheat_MiscUpgradesItem_C.Initiate Widget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemCategory*                 First_Upgrade_Item             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_MiscUpgradesItem_C::Initiate_Widget(EItemCategory* First_Upgrade_Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_MiscUpgradesItem.Cheat_MiscUpgradesItem_C.Initiate Widget");

	UCheat_MiscUpgradesItem_C_Initiate_Widget_Params params;
	params.First_Upgrade_Item = First_Upgrade_Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_MiscUpgradesItem.Cheat_MiscUpgradesItem_C.BndEvt__ItemSelect_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString*                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>*      SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_MiscUpgradesItem_C::BndEvt__ItemSelect_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_MiscUpgradesItem.Cheat_MiscUpgradesItem_C.BndEvt__ItemSelect_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	UCheat_MiscUpgradesItem_C_BndEvt__ItemSelect_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_MiscUpgradesItem.Cheat_MiscUpgradesItem_C.Initialize Current Item
// (BlueprintCallable, BlueprintEvent)

void UCheat_MiscUpgradesItem_C::Initialize_Current_Item()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_MiscUpgradesItem.Cheat_MiscUpgradesItem_C.Initialize Current Item");

	UCheat_MiscUpgradesItem_C_Initialize_Current_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cheat_MiscUpgradesItem.Cheat_MiscUpgradesItem_C.ExecuteUbergraph_Cheat_MiscUpgradesItem
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCheat_MiscUpgradesItem_C::ExecuteUbergraph_Cheat_MiscUpgradesItem(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cheat_MiscUpgradesItem.Cheat_MiscUpgradesItem_C.ExecuteUbergraph_Cheat_MiscUpgradesItem");

	UCheat_MiscUpgradesItem_C_ExecuteUbergraph_Cheat_MiscUpgradesItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
